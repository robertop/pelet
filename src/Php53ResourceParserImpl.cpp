
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
#line 1 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"

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
#include <pelet/ResourceParserTypeClass.h>
#include <pelet/LintParserFunctions.h>
#include <pelet/TokenClass.h>
 
 #if defined(_MSC_VER)
    #pragma warning(disable:4065) // Bison generates a switch statement without a case
 #endif
 
#define YYSTYPE pelet::ResourceParserTypeClass

// so that both bison parses call the same lex function
#define php53_resource_lex ResourceSemanticValue

// so that both bison parses call the same error function
#define php53_resource_error ResourceGrammarError


#define AST_INIT(dest, clazz) dest = new clazz; observers.Adopt(dest);

#define AST_INIT_ARGS(dest, clazz, ...) dest = new clazz; dest->Init(__VA_ARGS__); observers.Adopt(dest);

#define AST_MERGE(stmtListDest, stmtListSrc) stmtListDest = stmtListSrc;

#define AST_PUSH_MERGE(stmtListDest, stmt, stmtListSrc) stmtListDest = stmtListSrc; stmtListDest->Push(stmt);

#define AST_PUSH_ALL_MERGE(stmtListDest, stmtListSrcA, stmtListSrcB) stmtListDest = stmtListSrcA; stmtListDest->PushAll(stmtListSrcB);



/* Line 189 of yacc.c  */
#line 137 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.cpp"

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
#line 308 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.cpp"

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
#define YYLAST   7478

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  158
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  125
/* YYNRULES -- Number of rules.  */
#define YYNRULES  408
/* YYNRULES -- Number of states.  */
#define YYNSTATES  838

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
    1157,  1159,  1161,  1163,  1169,  1171,  1174,  1175,  1179,  1183,
    1184,  1186,  1189,  1193,  1197,  1199,  1201,  1203,  1205,  1208,
    1210,  1215,  1220,  1222,  1224,  1229,  1230,  1232,  1234,  1236,
    1241,  1246,  1248,  1250,  1254,  1256,  1259,  1263,  1265,  1267,
    1272,  1273,  1274,  1277,  1283,  1287,  1291,  1293,  1300,  1305,
    1310,  1313,  1316,  1319,  1321,  1324,  1326,  1331,  1335,  1339,
    1346,  1350,  1352,  1354,  1356,  1361,  1366,  1367,  1371,  1372,
    1376,  1381,  1382,  1386,  1387,  1391,  1393,  1397,  1401
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
      -1,   249,    -1,   123,   151,   269,   152,    13,   249,    -1,
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
      -1,   249,    25,    26,   249,    -1,   276,    -1,    57,   249,
      -1,    56,   249,    -1,    55,   249,    -1,    54,   249,    -1,
      53,   249,    -1,    52,   249,    -1,    51,   249,    -1,   106,
     239,    -1,    60,   249,    -1,   245,    -1,    73,   151,   271,
     152,    -1,   154,   240,   154,    -1,    12,   249,    -1,   227,
     179,   151,   205,   152,   228,   149,   168,   150,    -1,   112,
      -1,    -1,   144,   151,   229,   152,    -1,   229,     8,   146,
      -1,   229,     8,    31,   146,    -1,   146,    -1,    31,   146,
      -1,    -1,   161,   151,   231,   208,   152,    -1,   126,   128,
     161,   151,   208,   152,    -1,    -1,   128,   161,   151,   232,
     208,   152,    -1,   233,   133,   136,   151,   208,   152,    -1,
     233,   133,   257,   151,   208,   152,    -1,   259,   133,   136,
     151,   208,   152,    -1,   259,   133,   257,   151,   208,   152,
      -1,   257,   151,   208,   152,    -1,    72,    -1,   161,    -1,
     126,   128,   161,    -1,   128,   161,    -1,   161,    -1,   126,
     128,   161,    -1,   128,   161,    -1,   233,    -1,   236,    -1,
     261,   130,   265,   237,    -1,   261,    -1,   237,   238,    -1,
      -1,   130,   265,    -1,    -1,   151,   152,    -1,   151,   249,
     152,    -1,    -1,    99,    -1,   273,    -1,    -1,   151,   208,
     152,    -1,   124,    -1,    92,    -1,    86,    -1,   122,    -1,
     108,    -1,    91,    -1,    82,    -1,   125,    -1,   111,    -1,
     127,    -1,   135,    99,   103,    -1,   135,   103,    -1,   242,
      -1,   161,    -1,   126,   128,   161,    -1,   128,   161,    -1,
      42,   243,    -1,    43,   243,    -1,    73,   151,   246,   152,
      -1,   244,    -1,   233,   133,   136,    -1,   137,    -1,   282,
      -1,   161,    -1,   126,   128,   161,    -1,   128,   161,    -1,
     242,    -1,   156,   273,   156,    -1,   135,   273,   103,    -1,
      -1,   248,   247,    -1,    -1,     8,    -1,   248,     8,   243,
      96,   243,    -1,   248,     8,   243,    -1,   243,    96,   243,
      -1,   243,    -1,   250,    -1,   226,    -1,   253,    -1,   253,
      -1,   253,    -1,   260,   130,   265,   256,   254,    -1,   260,
      -1,   254,   255,    -1,    -1,   130,   265,   256,    -1,   151,
     208,   152,    -1,    -1,   262,    -1,   268,   262,    -1,   233,
     133,   257,    -1,   259,   133,   257,    -1,   262,    -1,   261,
      -1,   230,    -1,   262,    -1,   268,   262,    -1,   258,    -1,
     262,    61,   264,   157,    -1,   262,   149,   249,   150,    -1,
     263,    -1,   146,    -1,   155,   149,   249,   150,    -1,    -1,
     249,    -1,   266,    -1,   257,    -1,   266,    61,   264,   157,
      -1,   266,   149,   249,   150,    -1,   267,    -1,   136,    -1,
     149,   249,   150,    -1,   155,    -1,   268,   155,    -1,   269,
       8,   270,    -1,   270,    -1,   253,    -1,   123,   151,   269,
     152,    -1,    -1,    -1,   272,   247,    -1,   272,     8,   249,
      96,   249,    -1,   272,     8,   249,    -1,   249,    96,   249,
      -1,   249,    -1,   272,     8,   249,    96,    31,   251,    -1,
     272,     8,    31,   251,    -1,   249,    96,    31,   251,    -1,
      31,   251,    -1,   273,   274,    -1,   273,    99,    -1,   274,
      -1,    99,   274,    -1,   146,    -1,   146,    61,   275,   157,
      -1,   146,   130,   136,    -1,    95,   249,   150,    -1,    95,
     137,    61,   249,   157,   150,    -1,    88,   253,   150,    -1,
     136,    -1,   129,    -1,   146,    -1,   121,   151,   281,   152,
      -1,    98,   151,   253,   152,    -1,    -1,     7,   277,   249,
      -1,    -1,     6,   278,   249,    -1,     5,   151,   249,   152,
      -1,    -1,     4,   279,   249,    -1,    -1,     3,   280,   249,
      -1,   253,    -1,   281,     8,   253,    -1,   233,   133,   136,
      -1,   259,   133,   136,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   352,   352,   356,   357,   361,   362,   366,   367,   368,
     369,   370,   375,   375,   380,   380,   386,   387,   391,   393,
     397,   400,   403,   406,   412,   418,   427,   428,   432,   433,
     434,   435,   439,   440,   444,   445,   449,   453,   454,   455,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   481,   484,   485,   486,   492,
     493,   497,   498,   502,   503,   507,   512,   513,   517,   521,
     525,   529,   530,   535,   534,   548,   547,   556,   555,   566,
     567,   568,   572,   573,   580,   584,   585,   590,   591,   596,
     599,   603,   604,   608,   609,   613,   614,   618,   619,   623,
     624,   628,   629,   633,   634,   635,   636,   640,   641,   642,
     646,   647,   651,   652,   656,   657,   663,   664,   670,   671,
     675,   676,   680,   681,   685,   686,   687,   688,   689,   690,
     691,   692,   696,   697,   698,   702,   703,   707,   714,   721,
     728,   729,   730,   734,   735,   739,   740,   741,   745,   746,
     747,   748,   752,   753,   757,   758,   760,   759,   771,   772,
     776,   777,   783,   784,   788,   789,   793,   794,   795,   796,
     797,   798,   802,   808,   814,   820,   829,   836,   845,   846,
     850,   851,   855,   856,   860,   861,   862,   863,   864,   865,
     866,   867,   868,   869,   870,   871,   872,   873,   874,   875,
     876,   877,   878,   879,   880,   881,   882,   883,   884,   885,
     886,   887,   888,   889,   890,   891,   892,   893,   894,   895,
     896,   897,   898,   899,   900,   901,   902,   903,   904,   905,
     906,   907,   908,   909,   910,   911,   914,   916,   917,   918,
     919,   920,   921,   922,   923,   924,   925,   926,   927,   928,
     929,   930,   935,   939,   940,   944,   945,   946,   947,   951,
     951,   968,   971,   971,   988,   990,   992,   994,   996,  1001,
    1002,  1003,  1004,  1008,  1009,  1010,  1014,  1015,  1019,  1021,
    1026,  1027,  1031,  1035,  1036,  1037,  1041,  1042,  1043,  1048,
    1049,  1054,  1063,  1073,  1082,  1083,  1084,  1085,  1086,  1087,
    1088,  1089,  1090,  1095,  1096,  1097,  1098,  1099,  1100,  1101,
    1102,  1106,  1110,  1111,  1112,  1113,  1114,  1115,  1116,  1117,
    1122,  1123,  1127,  1128,  1132,  1133,  1134,  1135,  1139,  1140,
    1145,  1150,  1154,  1158,  1162,  1166,  1167,  1172,  1176,  1177,
    1181,  1182,  1186,  1187,  1192,  1196,  1197,  1201,  1202,  1203,
    1207,  1208,  1209,  1214,  1215,  1219,  1220,  1225,  1226,  1230,
    1231,  1232,  1236,  1237,  1241,  1242,  1246,  1247,  1252,  1253,
    1254,  1258,  1259,  1263,  1264,  1265,  1266,  1267,  1268,  1269,
    1270,  1274,  1275,  1276,  1277,  1281,  1282,  1283,  1284,  1285,
    1286,  1290,  1291,  1292,  1296,  1297,  1298,  1298,  1304,  1304,
    1310,  1311,  1311,  1317,  1317,  1326,  1327,  1331,  1332
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
  "r_variable", "w_variable", "rw_variable", "variable",
  "variable_properties", "variable_property", "method_or_not",
  "variable_without_objects", "static_member", "variable_class_name",
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
     250,   251,   252,   253,   253,   254,   254,   255,   256,   256,
     257,   257,   258,   258,   259,   260,   260,   261,   261,   261,
     262,   262,   262,   263,   263,   264,   264,   265,   265,   266,
     266,   266,   267,   267,   268,   268,   269,   269,   270,   270,
     270,   271,   271,   272,   272,   272,   272,   272,   272,   272,
     272,   273,   273,   273,   273,   274,   274,   274,   274,   274,
     274,   275,   275,   275,   276,   276,   277,   276,   278,   276,
     276,   279,   276,   280,   276,   281,   281,   282,   282
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
       1,     1,     1,     5,     1,     2,     0,     3,     3,     0,
       1,     2,     3,     3,     1,     1,     1,     1,     2,     1,
       4,     4,     1,     1,     4,     0,     1,     1,     1,     4,
       4,     1,     1,     3,     1,     2,     3,     1,     1,     4,
       0,     0,     2,     5,     3,     3,     1,     6,     4,     4,
       2,     2,     2,     1,     2,     1,     4,     3,     3,     6,
       3,     1,     1,     1,     4,     4,     0,     3,     0,     3,
       4,     0,     3,     0,     3,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     2,     1,   403,   401,     0,   398,   396,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   269,     0,
       0,    79,   297,     0,   293,     0,     0,   296,   292,     0,
       0,     0,   283,   295,     0,     0,   299,   252,     0,     0,
       0,     0,    51,    84,     0,   294,     0,   291,   298,     0,
     300,     0,     0,     0,     5,   312,     0,     0,     0,     0,
       0,   353,     0,    27,     0,    57,   286,   364,     0,   314,
       3,     0,     7,    32,     8,     9,    69,    70,     0,     0,
     329,    71,   346,     0,   317,   247,     0,   328,     0,   330,
       0,   349,     0,   334,   345,   347,   352,     0,   237,   313,
       0,     0,     0,     0,     0,   269,     0,     5,    71,   250,
     221,   222,   223,   224,   244,   243,   242,   241,   240,   239,
     238,     0,     0,   270,     0,   204,   332,     0,   202,   246,
     189,     0,     0,   270,   276,   289,   277,     0,   279,   347,
       0,    81,    80,   150,     0,   371,    41,     0,     0,    43,
       0,     0,     0,     0,   179,     0,     0,   245,   180,     0,
     145,     0,     0,   144,     0,     0,     0,     0,   370,     0,
      14,     0,   316,    45,   329,     0,   330,     0,     0,     0,
     302,   385,     0,   383,    33,     0,     0,    27,     0,     0,
      20,     0,    19,     0,     0,     0,   287,     0,   288,     0,
       0,     0,     0,   259,     0,    17,    82,    85,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,   203,   201,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   136,     0,     0,   355,     0,   365,   348,   404,
     402,     0,   399,   397,     0,     0,   272,     0,     0,     0,
     272,     0,   136,   188,     0,     0,   348,     0,     0,    49,
       0,   376,     0,   322,    42,     0,    44,     0,     0,     0,
       0,    50,     0,   284,     0,     0,   181,   183,   329,   330,
       0,   146,   330,     0,    48,    60,     0,     0,   405,     0,
       0,   368,     0,   367,   315,     4,    12,    11,   262,    46,
      47,     0,   312,     0,   301,   384,     0,     0,   382,   319,
     381,     0,    59,     0,     0,    66,    68,    22,     0,     0,
      16,     0,     0,    34,    26,    28,    29,    30,   234,   249,
       0,   318,     6,   136,     0,     0,    87,     0,    77,     0,
     132,   407,   342,   340,     0,   207,   209,   208,     0,     0,
     205,   206,   210,   212,   211,   226,   225,   228,   227,   229,
     231,   232,   230,   220,   219,   214,   215,   213,   216,   217,
     218,   233,     0,   185,   200,   199,   198,   197,   196,   195,
     194,   193,   192,   191,   190,     0,     0,   135,   329,   330,
     408,   343,   362,     0,   358,   339,   357,   361,   356,     0,
       0,   400,   271,     0,     0,   271,   342,     0,   343,   281,
       0,     0,     0,     0,     0,     0,   304,     0,   303,   151,
     310,   148,   380,   331,     0,   248,   323,   372,    25,     0,
       0,     0,     0,   178,   395,   285,   180,     0,     0,     0,
       0,   143,    10,     0,     0,   394,   370,   370,     0,   136,
       0,     4,   136,   390,     0,   388,   392,   391,   393,     0,
     387,     0,     0,     0,     0,     0,    21,    18,     0,     0,
     354,     0,     0,     0,     0,   273,    83,     0,    75,    86,
      89,     0,   132,   134,     0,   122,     0,   133,   136,   136,
     341,   236,     0,     0,   186,   139,   268,     0,   136,   136,
       0,   136,   336,   355,     0,   350,   351,   290,   278,   307,
     308,   320,     0,   306,     0,     0,     0,     0,   375,     0,
     374,   101,     0,    27,    99,    56,     0,     0,   182,    91,
       0,    91,    93,   147,    27,   114,   406,     0,   366,     0,
       0,    15,     0,     0,     0,   386,   107,   107,    40,     0,
      67,    53,    23,    27,   112,    37,     0,   260,    24,     0,
     275,    88,     0,     0,   153,     0,   253,   132,     0,   124,
       0,     0,   235,   289,     0,   329,   330,     0,     0,   363,
       0,   333,     0,     0,     0,   280,   327,     0,   322,   305,
     311,   149,   379,   378,     0,     0,     0,     0,   180,     0,
       0,    94,     0,   116,   118,   369,   184,   261,    13,   263,
       0,   107,     0,   107,     0,     0,     0,    31,   274,   153,
      90,   162,    73,     0,     0,     0,   125,     0,   264,   265,
     187,   142,   266,   267,   338,     0,   335,   359,   360,   282,
       0,   309,   323,   321,     0,   373,   102,     0,    38,     0,
      92,     0,     0,   120,     0,     0,    35,   389,     0,     0,
       0,     0,     0,   103,     0,     0,   162,   166,   167,   168,
     171,   170,   169,     0,   161,    78,   152,     0,     0,   160,
     164,     0,     0,     0,    27,     0,   128,     0,   127,   339,
     326,   325,   377,   100,     0,    27,    97,    55,    54,     0,
       0,     0,     0,   119,     0,     0,   110,   111,    27,   105,
     104,     0,   113,    76,     0,   174,     0,    71,   165,     0,
     155,    27,     0,   257,     0,     0,   129,     0,   126,   337,
       0,    27,    95,    39,     0,     0,    27,     0,     0,   106,
      27,   109,     0,     0,     0,     0,   154,     0,     0,     0,
     258,     0,   254,   251,     0,   131,   324,     0,     0,     0,
     121,    36,     0,   108,    27,   177,   175,   172,     0,     0,
      74,     0,   255,   130,     0,    98,     0,   115,     0,     0,
     132,   176,   256,    96,    27,    62,   173,     0,   117,     0,
      58,    61,    63,   156,     0,    64,     0,     0,    27,   158,
     157,     0,     0,     0,   159,    27,     0,    65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    79,    80,   481,   325,   201,   202,    81,
     204,   354,   355,    83,   820,   821,   822,   344,   345,   356,
     357,   219,    86,   712,    87,   592,   511,    88,   366,    89,
     368,   508,   509,   630,   561,   763,   727,   555,   298,   578,
     642,   738,   585,   634,   683,   686,   731,   514,   515,   516,
     416,   417,   172,   173,   154,   651,   706,   826,   830,   707,
     708,   709,   710,   746,   711,   163,   305,   306,    90,   118,
     654,   754,    92,   363,   482,    93,   517,   145,   146,   538,
     615,   167,   207,   283,    94,   449,   450,    95,   617,   457,
     618,    96,    97,   452,    98,    99,   611,   666,   532,   100,
     101,   102,   103,   104,   105,   106,   429,   425,   426,   427,
     107,   322,   323,   292,   293,   192,   193,   489,   108,   114,
     113,   111,   110,   319,   109
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -526
static const yytype_int16 yypact[] =
{
    -526,    61,  1732,  -526,  -526,  -526,  -100,  -526,  -526,  6171,
    6171,  6171,  6171,  6171,  6171,  6171,  6171,  6171,  6171,  6171,
    6171,   271,   271,  6171,  6171,   317,    11,    26,   -67,   -62,
    4658,  -526,  -526,    28,  -526,  4784,    58,  -526,  -526,  4504,
    6171,    88,    94,  -526,   108,   115,  -526,  -526,   -50,   136,
     158,   203,  -526,  -526,   218,  -526,   252,  -526,  -526,    69,
    -526,   206,  4910,   187,   121,  -526,   259,  6171,   174,   260,
     236,  -526,   280,  -526,  6171,  -526,   359,   273,   389,   -47,
    -526,    12,  -526,  -526,  -526,  -526,  -526,  -526,   300,   303,
    -526,   415,  -526,   316,  -526,  -526,  6429,  -526,   149,   864,
     304,  -526,   323,   332,  -526,   -20,  -526,   176,  -526,  -526,
    6171,  6171,  6171,  6171,  6171,  -526,   337,  -526,   415,  1718,
    -526,  -526,   420,  -526,  -526,  -526,  -526,  -526,  -526,  -526,
    -526,   343,   206,   -31,   342,  -526,  -526,   346,  -526,  -526,
    -526,   358,   206,   364,   365,   348,  -526,   369,   367,    71,
     176,  -526,  -526,   495,    14,  5036,  -526,  6470,   497,  -526,
    6511,   378,   374,    15,  7352,   271,  5162,  -526,  6171,  6171,
    -526,   266,    20,  -526,   370,   384,  6171,   271,   -38,   206,
    -526,   104,   -14,  -526,   373,  7352,   360,   271,  6297,    -1,
    -526,   -18,   268,  -526,  -526,  6171,  6556,  -526,   271,   206,
     -37,    23,  -526,  6171,  1886,  6597,    55,   368,   439,  6171,
      55,   345,   395,  -526,   401,  -526,   432,   433,  -526,   -58,
      79,  6171,  6171,  6171,  5289,  6171,  6171,  6171,  6171,  6171,
    6171,  6171,  6171,  6171,  6171,  6171,  6171,  6171,  6171,  6171,
    6171,  6171,  6171,  6171,  6171,  6171,   317,  -526,  -526,  -526,
    5415,  6171,  6171,  6171,  6171,  6171,  6171,  6171,  6171,  6171,
    6171,  6171,  5541,   161,   128,  6171,  6171,   273,   -16,  7352,
    7352,  6638,  7352,  7352,   390,   206,     6,   184,   215,   206,
     364,   191,  5541,  -526,   191,   128,   -11,   736,   399,  -526,
     271,  7227,   396,   542,  -526,   736,  -526,   538,     7,   402,
    6171,  -526,   404,  -526,  6683,   406,   553,  7352,   488,   986,
    6171,  -526,  -526,   -50,  -526,  -526,   410,  6725,  -526,    17,
     413,  -526,    22,  -526,   201,  -526,  -526,  -526,  -526,  -526,
    -526,   417,   504,  6977,  -526,  -526,   190,   438,  -526,  -526,
    -526,  6766,  -526,  2040,    27,  -526,  -526,     8,   442,   236,
    -526,  6809,   418,  -526,  -526,  -526,  -526,  -526,  -526,  -526,
    7018,  -526,  -526,  5541,   555,    30,   458,    30,  -526,   428,
     143,   441,   443,   -11,   176,  7392,  7429,  1718,  6171,  7311,
    2025,  2178,  1561,  2330,  2483,  2637,  2637,  2637,  2637,   682,
     632,   632,   632,   605,   605,   383,   383,   383,   420,   420,
     420,  -526,   -25,  1718,  1718,  1718,  1718,  1718,  1718,  1718,
    1718,  1718,  1718,  1718,  1718,   271,   437,   592,    31,    51,
     450,   451,  -526,  6171,  -526,   459,    -3,  -526,  7352,   454,
    7061,  -526,    93,   441,   450,   364,  -526,   447,  -526,  -526,
     736,   736,   463,   487,   206,   335,   160,   483,  -526,  -526,
    -526,   604,  -526,  -526,  5667,  -526,  5793,  -526,  -526,   736,
     484,  3734,  6171,  7352,  -526,  -526,  6171,  6171,   271,    91,
    7103,  -526,  -526,  3888,   271,  -526,   -38,   -38,   606,  5541,
    1415,  -526,  5541,  -526,  6171,  -526,  -526,  -526,  -526,   464,
    -526,     3,   544,   271,   473,   493,  -526,  -526,  4042,   480,
    -526,   481,   736,   506,   206,   364,  -526,    30,  -526,   628,
    -526,   492,   143,  -526,   485,   634,    -7,  -526,  5541,  5541,
     -11,  1872,  6171,   317,  -526,  -526,  -526,  5919,  5541,  5541,
    7144,  5541,  -526,  6171,  6171,  -526,  -526,  -526,   513,  -526,
    -526,   736,   206,   263,   564,   509,   736,   271,  7352,   271,
    7268,  -526,   643,  -526,  -526,  -526,  6851,   530,  7352,   588,
     271,   588,  -526,  -526,  -526,  -526,  -526,    32,  -526,  6171,
     533,  -526,  1578,   536,  1235,  -526,   539,   540,  -526,   545,
    -526,  -526,  -526,  -526,  -526,  -526,   546,  -526,  -526,   206,
     364,   628,   548,    30,  -526,   537,   557,   221,   556,   695,
     558,   560,  1872,   348,   271,    46,   172,   578,   582,  -526,
     583,   586,   575,  7185,   128,  -526,   642,   589,   734,   292,
    -526,  -526,  -526,  -526,  6045,   736,  2194,   595,  6171,    91,
     593,  -526,   597,  3580,   227,  -526,  1718,  -526,  -526,  -526,
     594,  -526,   148,  -526,   146,    30,  2348,  -526,   364,  -526,
    -526,   243,  -526,   599,   602,    -5,   741,   736,  -526,  -526,
    -526,  -526,  -526,  -526,  -526,   128,  -526,  -526,  -526,  -526,
     736,  -526,   736,  -526,   271,  7352,  -526,   607,  -526,   609,
    -526,  4196,  4196,   239,   608,  4504,  -526,  -526,   164,  6171,
      -9,   610,   150,  -526,   612,   613,   448,  -526,  -526,  -526,
    -526,  -526,  -526,   635,  -526,  -526,  -526,   622,   662,   591,
    -526,    24,   626,    -4,  -526,   630,   767,   736,  -526,   459,
    -526,   685,  -526,  -526,  4350,  -526,  -526,  -526,  -526,   633,
     757,   720,  6171,  -526,   637,  1276,  -526,  -526,  -526,  -526,
    -526,   644,  -526,  -526,   774,   781,    25,   415,  -526,   659,
    -526,  -526,   651,  -526,    47,  2502,   786,   736,  -526,  -526,
     736,  -526,  -526,  -526,  2656,  6171,  -526,   647,  6892,  -526,
    -526,  3580,   653,   736,   736,   657,  -526,   668,   792,  2810,
    -526,     5,  -526,  -526,   736,  -526,  -526,  2964,   658,  6935,
    3580,  -526,  4504,  3580,  -526,  -526,  -526,   797,   661,   736,
    -526,   667,  -526,  -526,   664,  -526,   788,  -526,  3118,   736,
     143,  -526,  -526,  -526,  -526,   742,  -526,   663,  3580,   669,
    -526,   742,  -526,  -526,    30,  -526,   -26,   677,  -526,  -526,
    -526,   672,  3272,   676,  -526,  -526,  3426,  -526
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -526,  -526,  -309,   -17,  -526,  -526,  -526,  -526,   477,  -526,
    -148,  -526,     9,  -526,  -526,  -526,    10,  -526,   336,     1,
      16,  -117,  -526,  -526,  -526,  -526,  -526,  -526,  -526,  -526,
    -526,  -526,   325,   272,   207,  -526,   153,  -526,  -526,  -526,
    -525,   103,  -526,  -526,  -526,  -526,  -526,  -502,  -526,   242,
    -268,  -526,  -526,   527,  -526,   192,  -526,  -526,  -526,  -526,
    -526,  -526,   137,  -526,  -526,  -526,  -453,  -526,   186,    -2,
    -526,  -526,  -526,  -526,  -526,   296,  -358,  -234,  -526,  -526,
    -526,  -526,  -526,   245,   452,   580,  -526,  -526,  -526,   231,
    -526,   920,   679,  -394,   379,    78,  -526,  -526,   132,  -201,
    -526,    35,  -526,   -23,    21,  -526,   319,  -279,  -526,  -526,
      81,   377,   380,  -526,  -526,    48,   198,  -526,  -526,  -526,
    -526,  -526,  -526,  -526,  -526
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -345
static const yytype_int16 yytable[] =
{
      91,   274,   148,    84,   133,   133,   439,   506,   143,   510,
     595,    82,   401,   557,   437,   460,   480,   736,    85,   372,
     214,   525,   288,   300,   598,   474,   715,   752,   313,   576,
     477,   349,   749,   775,   115,   493,   801,   348,   523,  -137,
     477,   265,   181,   336,   182,   265,   149,   115,   162,   343,
     265,   112,   644,   200,  -140,   781,   137,   137,   533,  -138,
     147,     3,   421,   424,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   372,   421,   369,   153,
     436,   212,   495,   438,   424,   320,  -270,   187,   131,   155,
     132,   212,   151,   370,   188,   501,   170,   212,   117,   136,
     136,   131,   334,   132,   213,   171,   150,   152,    71,  -332,
    -332,   117,   337,  -344,   212,   276,   688,    77,   692,  -272,
     213,    71,   560,   828,   208,   280,   211,   829,   268,   266,
      77,  -340,   265,   266,   212,  -341,   212,   328,   266,   599,
     186,   716,   753,   187,   737,   191,   534,   194,   133,   510,
     188,   802,   577,   622,   133,   623,   503,   328,   504,   461,
     133,   133,   324,   115,   158,   215,   117,   289,   301,   475,
     133,   286,   572,   314,   478,   679,   350,   750,   776,   494,
    -141,   133,   347,  -137,   635,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   179,  -140,   782,
     137,   191,    91,  -138,  -344,   117,   137,   248,   249,   161,
     661,   570,   137,   137,   573,   371,   513,   131,   180,   132,
     266,   212,   137,   148,   689,    71,   689,   117,   689,   143,
    -332,  -332,   212,   137,    77,   650,   690,    71,   690,   165,
     690,   373,   689,   302,   479,   166,    77,   309,   184,   312,
     600,   601,   691,   326,   690,   318,   321,   327,   432,   168,
     607,   608,   435,   610,   422,   331,   169,   149,   734,   503,
     446,   504,   174,   133,    71,   187,   346,   423,   446,   117,
     722,   147,   188,    77,   373,   373,   189,   694,   212,   603,
     190,   684,   685,  -270,   513,  -123,   693,   420,   373,   373,
     740,   374,   373,   729,   730,   373,   373,    71,   817,   175,
     697,   698,   699,   700,   701,   702,    77,   134,   134,   486,
     433,   144,    71,   197,  -141,   137,   487,   150,   703,   212,
      71,   267,   200,   191,  -271,   669,   488,    71,   115,    77,
     419,    91,   117,   115,   374,   374,    77,   503,   505,   504,
     505,   434,   479,   505,   176,   308,   187,   117,   374,   374,
     419,    71,   374,   188,   199,   374,   374,   338,   453,   177,
      77,   339,   117,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   133,   719,   335,   704,   115,
     340,   212,   131,   705,   132,   520,  -272,   131,   133,   132,
     135,   138,   117,   178,   335,   626,   340,   117,   335,   340,
     195,   198,    71,   424,   191,   310,   633,    71,  -332,  -332,
     212,    77,   209,   446,   446,  -271,    77,   543,   243,   244,
     245,   203,   246,   187,   544,   646,   216,   137,   190,   217,
     188,   419,   446,   141,   338,   142,   218,   187,   418,   220,
     137,   133,   133,   117,   188,   262,   263,   133,   206,   133,
     133,   134,   264,    71,   424,   179,   827,   134,   418,   246,
     554,   275,    77,   134,   134,   277,   133,   187,    91,   278,
     524,    84,   565,   134,   188,   446,   279,   590,   210,    82,
     505,   191,   212,   453,   134,   505,    85,   285,   281,   282,
     148,   361,   284,   137,   137,   191,   143,   584,   287,   137,
     295,   137,   137,   330,   297,   697,   698,   699,   700,   701,
     702,   299,   359,   315,   446,   619,   329,   187,   137,   446,
     133,   362,   133,   703,   188,   191,   316,   364,   338,   365,
     367,   370,   144,   133,   149,   451,   559,   562,   455,   418,
     456,   459,   566,   462,   321,   321,   464,   419,   147,   466,
     419,   467,   468,   472,   476,   484,   755,   483,   502,   499,
      91,   346,   648,    84,   490,   507,   505,   764,   496,   512,
     505,    82,   137,   447,   137,   191,   134,   133,    85,   526,
     771,   447,   518,   704,   519,   137,   419,   419,   743,   537,
     527,   528,   529,   779,   150,   606,   419,   419,   446,   419,
     531,   535,   133,   787,   541,   542,   545,   546,   790,   569,
     552,   575,   793,   579,    91,   453,   581,   453,   505,   582,
     777,    91,   586,   587,   589,   373,   593,   596,   631,   137,
     446,   594,   597,   614,    91,   620,   808,   240,   241,   242,
     243,   244,   245,   446,   246,   446,   625,   133,   697,   698,
     699,   700,   701,   702,   137,   418,   818,   334,   418,  -345,
    -345,  -345,   238,   239,   240,   241,   242,   243,   244,   245,
     832,   246,   453,   628,   629,   637,   373,   836,   639,   652,
     726,   726,   641,   643,   733,   374,   645,   649,   134,   647,
     446,   653,   656,  -163,   418,   418,   747,   562,   657,   137,
     658,   134,   659,   605,   418,   418,   665,   418,  -345,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     662,   246,   667,   762,   663,   664,   447,   447,   670,   448,
     446,   671,   672,   446,   687,   681,   374,   448,   678,   682,
     713,   714,   453,    91,   717,   447,   446,   446,   741,   732,
     723,   724,    91,   739,   134,   134,   742,   446,   745,    91,
     134,   744,   134,   134,    47,   751,   756,    91,   440,   441,
     757,   760,   446,   766,   765,    91,   767,   773,    91,   134,
     769,    91,   446,   505,   774,   778,   772,   780,   447,   784,
     791,   807,   794,   797,   798,   799,    91,   505,   115,   442,
     809,   805,   810,   812,   814,   823,    91,   813,    32,   144,
     824,   819,    34,   831,   833,   835,   497,    37,    38,   580,
      91,   825,   591,   632,    91,   728,   680,   447,   770,   655,
     471,   696,   447,   134,    43,   134,   748,    46,   660,   673,
     311,   759,   612,   567,     0,     0,   134,   568,    55,     0,
      57,    58,   443,    60,   444,     0,     0,     0,     0,     0,
       0,   445,   117,     0,     0,   458,     0,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,     0,
       0,     0,   448,   448,     0,     0,     0,     0,     0,     0,
     134,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   448,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   447,  -332,  -332,     0,   134,     0,     0,     0,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,     0,     0,   139,   140,     0,     0,     0,     0,     0,
     157,     0,     0,   447,   448,   160,     0,     0,     0,     0,
     164,     0,     0,     0,     0,     0,   447,     0,   447,     0,
     134,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   185,     0,     0,     0,     0,   196,     0,     0,
       0,     0,     0,   448,   205,     0,     0,     0,   448,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,     0,     0,   447,     0,     0,     0,     0,     0,     0,
     539,   540,     0,     0,     0,     0,     0,     0,     0,     0,
     269,   270,   271,   272,   273,     0,     0,     0,     0,   551,
       0,     0,     0,     0,  -332,  -332,     0,     0,     0,     0,
       0,     0,     0,   447,     0,     0,   447,     0,     0,     0,
     469,     0,     0,     0,     0,     0,     0,     0,     0,   447,
     447,     0,     0,     0,     0,   291,     0,   448,     0,     0,
     447,     0,   588,     0,     0,     0,   304,     0,   307,   185,
       0,     0,     0,     0,     0,   447,   317,     0,     0,     0,
       0,     0,     0,     0,     0,   447,     0,     0,   333,   448,
       0,     0,     0,     0,     0,   341,     0,     0,     0,     0,
       0,   616,   448,   351,   448,     0,   621,     0,     0,   360,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   375,   376,   377,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,     0,     0,     0,   448,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   185,     0,     0,   428,   430,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   185,     0,     0,   676,     0,     0,     0,   448,
       0,     0,   448,     0,     0,     0,     0,     0,     0,     0,
     463,     0,     0,     0,     0,   448,   448,     0,     0,     0,
     470,     0,     0,     0,     0,     0,   448,   718,     0,     0,
       0,     0,     0,     0,   221,   222,   223,     0,     0,     0,
     720,   448,   721,     0,     0,     0,     0,     0,     0,     0,
     224,   448,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   185,   246,   221,   222,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   758,   521,     0,
       0,   224,   736,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   785,     0,     0,
     786,     0,     0,   530,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   795,   796,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   803,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   548,     0,   550,     0,     0,   811,
       0,     0,   556,     0,     0,     0,   307,   558,     0,   816,
       0,     0,   640,     0,     0,     0,     0,     0,     0,   185,
       0,     0,   185,     0,   574,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,   737,
       0,     0,     0,     0,     0,     0,     0,     0,   185,   185,
       0,     0,   602,     0,     0,     0,     0,   185,   185,   185,
       0,   185,     0,   428,   613,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,    26,    27,    28,    29,   636,
       0,    30,     0,     0,     0,     0,    31,    32,     0,     0,
      33,    34,    35,     0,    36,     0,    37,    38,    39,     0,
       0,     0,    40,    41,     0,     0,     0,     0,     0,     0,
       0,    42,     0,    43,    44,    45,    46,    47,    48,    49,
      50,    51,     0,    52,     0,    53,    54,    55,    56,    57,
      58,    59,    60,    61,   675,     0,     0,     0,   307,    62,
      63,    64,    65,    66,    67,     0,     0,    68,    69,    70,
       0,    71,    72,     0,    73,   571,    74,     0,    75,    76,
      77,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   735,
     246,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,     0,     0,     0,     0,     0,     0,    26,    27,
      28,    29,   768,     0,    30,     0,     0,     0,     0,    31,
      32,     0,     0,    33,    34,    35,     0,    36,     0,    37,
      38,    39,     0,     0,     0,    40,    41,     0,     0,     0,
       0,     0,     0,     0,    42,   789,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,    52,     0,    53,    54,
      55,    56,    57,    58,    59,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,     0,     0,
      68,    69,    70,     0,    71,    72,     0,    73,   638,    74,
       0,    75,    76,    77,    78,     4,     5,     6,     7,     8,
       0,     0,     0,   224,     9,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,     0,     0,     0,     0,
       0,     0,    26,    27,    28,    29,     0,     0,    30,     0,
       0,     0,     0,    31,    32,     0,     0,    33,    34,    35,
       0,    36,     0,    37,    38,    39,     0,     0,     0,    40,
      41,     0,     0,     0,     0,     0,     0,     0,    42,     0,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
      52,     0,    53,    54,    55,    56,    57,    58,    59,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,     0,     0,    68,    69,    70,     0,    71,    72,
       0,    73,     0,    74,     0,    75,    76,    77,    78,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,     0,     0,     0,     0,     0,     0,    10,    11,
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
       0,     0,    71,    72,     0,    73,   353,    74,     0,    75,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,     0,     0,    30,     0,     0,     0,
       0,    31,    32,     0,     0,     0,    34,    35,     0,    36,
       0,    37,    38,    39,     0,     0,     0,    40,    41,     0,
       0,     0,     0,     0,     0,     0,    42,     0,    43,    44,
      45,    46,    47,    48,    49,   352,    51,     0,    52,     0,
      53,    54,    55,    56,    57,    58,   116,    60,    61,     0,
       0,     0,     0,     0,    62,    63,    64,    65,    66,    67,
       0,     0,    68,    69,     0,     0,    71,    72,     0,    73,
     492,    74,     0,    75,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,     0,     0,
      30,     0,     0,     0,     0,    31,    32,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,   677,     0,     0,     0,     0,     0,
      42,     0,    43,    44,    45,    46,    47,    48,    49,   352,
      51,     0,    52,     0,    53,    54,    55,    56,    57,    58,
     116,    60,    61,     0,     0,     0,     0,     0,    62,    63,
      64,    65,    66,    67,     0,     0,    68,    69,     0,     0,
      71,    72,     0,    73,     0,    74,     0,    75,    76,    77,
      78,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,     0,     0,     0,     0,     0,     0,    26,    27,
      28,    29,     0,     0,    30,     0,     0,     0,     0,    31,
      32,     0,     0,     0,    34,    35,     0,    36,     0,    37,
      38,    39,     0,     0,     0,    40,    41,     0,     0,     0,
       0,     0,     0,   695,    42,     0,    43,    44,    45,    46,
      47,    48,    49,   352,    51,     0,    52,     0,    53,    54,
      55,    56,    57,    58,   116,    60,    61,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,     0,     0,
      68,    69,     0,     0,    71,    72,     0,    73,     0,    74,
       0,    75,    76,    77,    78,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,     0,     0,     0,     0,     0,     0,     0,
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
       0,    73,   783,    74,     0,    75,    76,    77,    78,     4,
       5,     6,     7,     8,     0,     0,     0,     0,     9,  -345,
    -345,  -345,  -345,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
       0,     0,     0,     0,     0,     0,    26,    27,    28,    29,
       0,     0,    30,     0,     0,     0,     0,    31,    32,     0,
       0,     0,    34,    35,     0,    36,     0,    37,    38,    39,
       0,     0,     0,    40,    41,     0,     0,     0,   788,     0,
       0,     0,    42,     0,    43,    44,    45,    46,    47,    48,
      49,   352,    51,     0,    52,     0,    53,    54,    55,    56,
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
      26,    27,    28,    29,     0,     0,    30,     0,     0,     0,
       0,    31,    32,     0,     0,     0,    34,    35,     0,    36,
       0,    37,    38,    39,     0,     0,     0,    40,    41,     0,
       0,     0,     0,     0,     0,     0,    42,     0,    43,    44,
      45,    46,    47,    48,    49,   352,    51,     0,    52,     0,
      53,    54,    55,    56,    57,    58,   116,    60,    61,     0,
       0,     0,     0,     0,    62,    63,    64,    65,    66,    67,
       0,     0,    68,    69,     0,     0,    71,    72,     0,    73,
     800,    74,     0,    75,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,     0,     0,
       0,     0,     0,     0,    26,    27,    28,    29,     0,     0,
      30,     0,     0,     0,     0,    31,    32,     0,     0,     0,
      34,    35,     0,    36,     0,    37,    38,    39,     0,     0,
       0,    40,    41,     0,     0,   804,     0,     0,     0,     0,
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
      68,    69,     0,     0,    71,    72,     0,    73,   815,    74,
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
       0,    73,   834,    74,     0,    75,    76,    77,    78,     4,
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
       0,     0,    71,    72,     0,    73,   837,    74,     0,    75,
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
       0,     0,     0,     0,     0,     0,    42,     0,    43,    44,
      45,    46,    47,    48,    49,   352,    51,     0,    52,     0,
      53,    54,    55,    56,    57,    58,   116,    60,    61,     0,
       0,     0,     0,     0,    62,    63,    64,    65,    66,    67,
       0,     0,    68,    69,     0,     0,    71,    72,     0,    73,
       0,    74,     0,    75,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     553,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,   564,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,   583,     0,
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
       0,     0,   725,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,   761,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,     0,     0,     0,     0,     0,     0,     0,     0,
     115,    29,     0,     0,     0,     0,     0,     0,     0,     0,
      32,     0,     0,     0,    34,     0,     0,     0,     0,    37,
      38,     0,     0,     0,     0,     0,    41,     0,     0,     0,
       0,     0,     0,     0,    42,     0,    43,     0,     0,    46,
      47,     0,     0,     0,     0,     0,     0,     0,     0,    54,
      55,    56,    57,    58,   116,    60,    61,     4,     5,     6,
       7,     8,     0,    63,   117,    65,     9,     0,     0,     0,
       0,     0,     0,     0,    71,     0,     0,     0,     0,    74,
       0,   156,    76,    77,    78,     0,     0,     0,     0,     0,
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
      71,     0,     0,     0,     0,    74,     0,   159,    76,    77,
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
       0,    74,     0,   183,    76,    77,    78,   290,     0,     0,
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
       0,     0,    71,     0,     0,     0,     0,    74,     0,     0,
      76,    77,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,     0,     0,     0,     0,
       0,     0,     0,     0,   115,    29,     0,     0,     0,     0,
       0,     0,     0,     0,    32,     0,     0,     0,    34,     0,
       0,     0,     0,    37,    38,     0,     0,     0,     0,     0,
      41,     0,     0,     0,     0,     0,     0,     0,    42,     0,
      43,     0,     0,    46,    47,     0,     0,     0,     0,     0,
       0,     0,     0,    54,    55,    56,    57,    58,   116,    60,
      61,     0,     4,     5,     6,     7,     8,    63,   117,    65,
       0,     9,     0,     0,     0,     0,     0,     0,    71,     0,
       0,     0,     0,    74,   303,   378,    76,    77,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
      74,     0,     0,    76,    77,    78,   402,     0,     0,     0,
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
      77,    78,   415,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,    74,     0,     0,    76,    77,    78,   547,     0,
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
       0,    76,    77,    78,   549,     0,     0,     0,     0,     0,
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
     604,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
      74,     0,     0,    76,    77,    78,   674,     0,     0,     0,
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
      77,    78,     0,     0,     0,     0,     0,     0,     0,     0,
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
      56,    57,    58,   116,    60,    61,     0,     0,     0,     0,
       0,     0,    63,   117,   332,     0,     0,     0,   221,   222,
     223,     0,     0,    71,     0,     0,     0,     0,    74,     0,
       0,    76,    77,    78,   224,     0,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,   221,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,     0,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   224,     0,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,     0,     0,     0,     0,   221,   222,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   224,   247,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,   221,   222,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   224,   294,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,   221,   222,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   224,   296,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,     0,     0,
       0,     0,   221,   222,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   224,   342,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,     0,   221,   222,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   358,
     224,     0,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246,   221,   222,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     431,   224,     0,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,     0,     0,   221,   222,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,   465,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,     0,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   224,   473,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,   221,   222,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   224,   491,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,     0,     0,   221,   222,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,   498,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246,     0,   221,   222,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   224,   627,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,   221,   222,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   224,   792,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,     0,     0,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   224,   806,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,     0,   221,   222,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   485,   224,     0,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   500,   224,
       0,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,   221,   222,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,   536,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246,     0,   221,   222,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   224,   563,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,   221,   222,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   224,   609,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,     0,     0,
     221,   222,   223,   454,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   668,   224,   522,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,   221,   222,   223,   624,     0,     0,     0,     0,     0,
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
       2,   118,    25,     2,    21,    22,   285,   365,    25,   367,
     512,     2,   246,   466,   282,     8,   325,    26,     2,   220,
       8,   415,     8,     8,    31,     8,    31,    31,     8,    26,
       8,     8,     8,     8,    72,     8,    31,    74,    63,     8,
       8,    61,    59,    61,    61,    61,    25,    72,    39,   197,
      61,   151,   577,    70,     8,     8,    21,    22,    61,     8,
      25,     0,   263,   264,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,   277,   278,   136,   146,
     281,   128,    74,   284,   285,   123,   133,    88,   126,   151,
     128,   128,    81,   151,    95,   363,   146,   128,   136,    21,
      22,   126,   103,   128,   151,   155,    25,    81,   146,    58,
      59,   136,   130,   133,   128,   132,   641,   155,   643,   133,
     151,   146,    31,   149,    76,   142,    78,   153,   107,   149,
     155,   151,    61,   149,   128,   151,   128,   151,   149,   146,
      62,   146,   146,    88,   153,   146,   149,    26,   165,   507,
      95,   146,   149,   547,   171,   549,   126,   151,   128,   152,
     177,   178,   179,    72,   136,   153,   136,   153,   153,   152,
     187,   150,   481,   153,   152,   628,   153,   153,   153,   152,
       8,   198,   199,   152,   152,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   128,   152,   152,
     165,   146,   204,   152,   133,   136,   171,    58,    59,   151,
     604,   479,   177,   178,   482,   136,    73,   126,   149,   128,
     149,   128,   187,   246,    78,   146,    78,   136,    78,   246,
      58,    59,   128,   198,   155,   593,    90,   146,    90,   151,
      90,   220,    78,   165,   151,   151,   155,   169,    62,   171,
     518,   519,   104,   149,    90,   177,   178,   153,   275,   151,
     528,   529,   279,   531,   136,   187,   151,   246,   104,   126,
     287,   128,   136,   290,   146,    88,   198,   149,   295,   136,
     674,   246,    95,   155,   263,   264,    99,   645,   128,   523,
     103,    64,    65,   133,    73,   152,   150,   136,   277,   278,
     150,   220,   281,    64,    65,   284,   285,   146,   810,   151,
      67,    68,    69,    70,    71,    72,   155,    21,    22,   129,
     136,    25,   146,   149,   152,   290,   136,   246,    85,   128,
     146,   155,   349,   146,   133,   614,   146,   146,    72,   155,
     262,   343,   136,    72,   263,   264,   155,   126,   365,   128,
     367,   136,   151,   370,   151,   169,    88,   136,   277,   278,
     282,   146,   281,    95,   128,   284,   285,    99,   290,   151,
     155,   103,   136,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,   402,   665,   189,   145,    72,
     192,   128,   126,   150,   128,   374,   133,   126,   415,   128,
      21,    22,   136,   151,   206,   553,   208,   136,   210,   211,
     151,   151,   146,   614,   146,   149,   564,   146,    58,    59,
     128,   155,   149,   440,   441,   133,   155,   444,    45,    46,
      47,   151,    49,    88,    99,   583,   136,   402,   103,   136,
      95,   363,   459,   126,    99,   128,    31,    88,   262,   133,
     415,   468,   469,   136,    95,   151,   133,   474,    99,   476,
     477,   165,   130,   146,   665,   128,   824,   171,   282,    49,
     461,   128,   155,   177,   178,   133,   493,    88,   480,   133,
     402,   480,   473,   187,    95,   502,   128,   504,    99,   480,
     507,   146,   128,   415,   198,   512,   480,   130,   133,   151,
     523,   156,   133,   468,   469,   146,   523,   498,    13,   474,
      13,   476,   477,   153,   136,    67,    68,    69,    70,    71,
      72,   147,   154,   153,   541,   542,   153,    88,   493,   546,
     547,   136,   549,    85,    95,   146,   152,   136,    99,   107,
     107,   151,   246,   560,   523,   146,   468,   469,   152,   363,
       8,    13,   474,   151,   476,   477,   152,   479,   523,   153,
     482,     8,    74,   153,   151,    61,   714,   150,    13,   151,
     572,   493,   589,   572,   136,   117,   593,   725,   136,   151,
     597,   572,   547,   287,   549,   146,   290,   604,   572,   152,
     738,   295,   151,   145,   151,   560,   518,   519,   150,   152,
       8,   151,   151,   751,   523,   527,   528,   529,   625,   531,
     151,   157,   629,   761,   151,   128,   133,    13,   766,    13,
     136,   157,   770,    79,   626,   547,   153,   549,   645,   136,
     747,   633,   152,   152,   128,   614,     8,   152,   560,   604,
     657,   149,     8,   130,   646,   136,   794,    42,    43,    44,
      45,    46,    47,   670,    49,   672,    13,   674,    67,    68,
      69,    70,    71,    72,   629,   479,   814,   103,   482,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
     828,    49,   604,   153,    96,   152,   665,   835,   152,   152,
     681,   682,   153,   153,   685,   614,   151,   149,   402,   153,
     717,   144,   146,   112,   518,   519,   708,   629,    13,   674,
     152,   415,   152,   527,   528,   529,   130,   531,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
     152,    49,   157,   724,   152,   152,   440,   441,    96,   287,
     757,   152,     8,   760,   150,   152,   665,   295,   153,   152,
     151,   149,   674,   755,    13,   459,   773,   774,   146,   151,
     153,   152,   764,   153,   468,   469,   153,   784,   146,   771,
     474,   136,   476,   477,   112,   149,   146,   779,    42,    43,
      13,    96,   799,    26,   151,   787,    66,    13,   790,   493,
     153,   793,   809,   810,    13,   136,   152,   146,   502,    13,
     153,   792,   149,   146,   136,    13,   808,   824,    72,    73,
      13,   153,   151,   146,    26,   152,   818,   153,    82,   523,
     151,    79,    86,   146,   152,   149,   349,    91,    92,   493,
     832,   821,   507,   561,   836,   682,   629,   541,   735,   597,
     313,   649,   546,   547,   108,   549,   709,   111,   603,   618,
     171,   719,   533,   476,    -1,    -1,   560,   477,   122,    -1,
     124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,    -1,    -1,   295,    -1,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    -1,
      -1,    -1,   440,   441,    -1,    -1,    -1,    -1,    -1,    -1,
     604,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   459,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   625,    58,    59,    -1,   629,    -1,    -1,    -1,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,
      30,    -1,    -1,   657,   502,    35,    -1,    -1,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,   670,    -1,   672,    -1,
     674,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    62,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    -1,   541,    74,    -1,    -1,    -1,   546,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    -1,    -1,   717,    -1,    -1,    -1,    -1,    -1,    -1,
     440,   441,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     110,   111,   112,   113,   114,    -1,    -1,    -1,    -1,   459,
      -1,    -1,    -1,    -1,    58,    59,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   757,    -1,    -1,   760,    -1,    -1,    -1,
      74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   773,
     774,    -1,    -1,    -1,    -1,   155,    -1,   625,    -1,    -1,
     784,    -1,   502,    -1,    -1,    -1,   166,    -1,   168,   169,
      -1,    -1,    -1,    -1,    -1,   799,   176,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   809,    -1,    -1,   188,   657,
      -1,    -1,    -1,    -1,    -1,   195,    -1,    -1,    -1,    -1,
      -1,   541,   670,   203,   672,    -1,   546,    -1,    -1,   209,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,    -1,    -1,    -1,   717,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,    -1,    -1,   265,   266,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   282,    -1,    -1,   625,    -1,    -1,    -1,   757,
      -1,    -1,   760,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     300,    -1,    -1,    -1,    -1,   773,   774,    -1,    -1,    -1,
     310,    -1,    -1,    -1,    -1,    -1,   784,   657,    -1,    -1,
      -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
     670,   799,   672,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   809,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,   363,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   717,   378,    -1,
      -1,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   757,    -1,    -1,
     760,    -1,    -1,   423,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   773,   774,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   784,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   454,    -1,   456,    -1,    -1,   799,
      -1,    -1,   462,    -1,    -1,    -1,   466,   467,    -1,   809,
      -1,    -1,   157,    -1,    -1,    -1,    -1,    -1,    -1,   479,
      -1,    -1,   482,    -1,   484,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,   153,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   518,   519,
      -1,    -1,   522,    -1,    -1,    -1,    -1,   527,   528,   529,
      -1,   531,    -1,   533,   534,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,   569,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      85,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,   118,    -1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   624,    -1,    -1,    -1,   628,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,   144,
      -1,   146,   147,    -1,   149,   150,   151,    -1,   153,   154,
     155,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,   689,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,   732,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    85,    86,    87,    -1,    89,    -1,    91,
      92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,   765,   108,   109,   110,   111,
     112,   113,   114,   115,   116,    -1,   118,    -1,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,   139,    -1,    -1,
     142,   143,   144,    -1,   146,   147,    -1,   149,   150,   151,
      -1,   153,   154,   155,   156,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    25,    12,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    85,    86,    87,
      -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
     108,   109,   110,   111,   112,   113,   114,   115,   116,    -1,
     118,    -1,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,   139,    -1,    -1,   142,   143,   144,    -1,   146,   147,
      -1,   149,    -1,   151,    -1,   153,   154,   155,   156,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
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
      -1,    -1,    12,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,
      -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    -1,   118,    -1,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,    -1,    -1,   146,   147,    -1,   149,
     150,   151,    -1,   153,   154,   155,   156,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      86,    87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,
      -1,    97,    98,    -1,   100,    -1,    -1,    -1,    -1,    -1,
     106,    -1,   108,   109,   110,   111,   112,   113,   114,   115,
     116,    -1,   118,    -1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,
     136,   137,   138,   139,    -1,    -1,   142,   143,    -1,    -1,
     146,   147,    -1,   149,    -1,   151,    -1,   153,   154,   155,
     156,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,
      82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,
      92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,   105,   106,    -1,   108,   109,   110,   111,
     112,   113,   114,   115,   116,    -1,   118,    -1,   120,   121,
     122,   123,   124,   125,   126,   127,   128,    -1,    -1,    -1,
      -1,    -1,   134,   135,   136,   137,   138,   139,    -1,    -1,
     142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,   151,
      -1,   153,   154,   155,   156,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,
      -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,    93,
      -1,    -1,    -1,    97,    98,    -1,    -1,    -1,   102,    -1,
      -1,    -1,   106,    -1,   108,   109,   110,   111,   112,   113,
     114,   115,   116,    -1,   118,    -1,   120,   121,   122,   123,
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
      70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,
      -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,
      -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    -1,   118,    -1,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
      -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,   139,
      -1,    -1,   142,   143,    -1,    -1,   146,   147,    -1,   149,
     150,   151,    -1,   153,   154,   155,   156,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,
      76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,
      86,    87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,
      -1,    97,    98,    -1,    -1,   101,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,
     110,   111,   112,   113,   114,   115,   116,    -1,   118,    -1,
     120,   121,   122,   123,   124,   125,   126,   127,   128,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    -1,    -1,    -1,    86,    -1,    -1,    -1,    -1,    91,
      92,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   106,    -1,   108,    -1,    -1,   111,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,   128,     3,     4,     5,
       6,     7,    -1,   135,   136,   137,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,   151,
      -1,   153,   154,   155,   156,    -1,    -1,    -1,    -1,    -1,
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
      -1,   151,    -1,   153,   154,   155,   156,    31,    -1,    -1,
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
      -1,    -1,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,
     154,   155,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    -1,
      -1,    -1,    -1,    91,    92,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
     108,    -1,    -1,   111,   112,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,     3,     4,     5,     6,     7,   135,   136,   137,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,
      -1,    -1,    -1,   151,   152,    26,   154,   155,   156,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     155,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,    -1,   135,   136,   137,    -1,    -1,    -1,     9,    10,
      11,    -1,    -1,   146,    -1,    -1,    -1,    -1,   151,    -1,
      -1,   154,   155,   156,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   153,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   153,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   153,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   153,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     152,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   152,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   152,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   152,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   152,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   152,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   152,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   152,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   150,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   150,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   150,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   150,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
       9,    10,    11,    96,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   150,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    96,    -1,    -1,    -1,    -1,    -1,
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
     257,   258,   259,   260,   261,   262,   263,   268,   276,   282,
     280,   279,   151,   278,   277,    72,   126,   136,   227,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   126,   128,   161,   233,   252,   253,   259,   252,   249,
     249,   126,   128,   161,   233,   235,   236,   259,   261,   262,
     268,    81,    81,   146,   212,   151,   153,   249,   136,   153,
     249,   151,   170,   223,   249,   151,   151,   239,   151,   151,
     146,   155,   210,   211,   136,   151,   151,   151,   151,   128,
     149,   161,   161,   153,   226,   249,   253,    88,    95,    99,
     103,   146,   273,   274,    26,   151,   249,   149,   151,   128,
     161,   165,   166,   151,   168,   249,    99,   240,   273,   149,
      99,   273,   128,   151,     8,   153,   136,   136,    31,   179,
     133,     9,    10,    11,    25,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    49,   153,    58,    59,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   151,   133,   130,    61,   149,   155,   262,   249,
     249,   249,   249,   249,   179,   128,   161,   133,   133,   128,
     161,   133,   151,   241,   133,   130,   262,    13,     8,   153,
      31,   249,   271,   272,   153,    13,   153,   136,   196,   147,
       8,   153,   253,   152,   249,   224,   225,   249,   226,   253,
     149,   250,   253,     8,   153,   153,   152,   249,   253,   281,
     123,   253,   269,   270,   161,   164,   149,   153,   151,   153,
     153,   253,   137,   249,   103,   274,    61,   130,    99,   103,
     274,   249,   153,   168,   175,   176,   253,   161,    74,     8,
     153,   249,   115,   150,   169,   170,   177,   178,   152,   154,
     249,   156,   136,   231,   136,   107,   186,   107,   188,   136,
     151,   136,   257,   262,   268,   249,   249,   249,    26,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,   249,   249,   249,   249,   249,
     249,   235,    31,   249,   249,   249,   249,   249,   249,   249,
     249,   249,   249,   249,   249,    31,   208,   209,   226,   253,
     136,   257,   136,   149,   257,   265,   266,   267,   249,   264,
     249,   152,   161,   136,   136,   161,   257,   208,   257,   265,
      42,    43,    73,   126,   128,   135,   161,   233,   242,   243,
     244,   146,   251,   253,    96,   152,     8,   247,   243,    13,
       8,   152,   151,   249,   152,   152,   153,     8,    74,    74,
     249,   211,   153,   152,     8,   152,   151,     8,   152,   151,
     160,   163,   232,   150,    61,   150,   129,   136,   146,   275,
     136,   152,   150,     8,   152,    74,   136,   166,   152,   151,
     150,   208,    13,   126,   128,   161,   234,   117,   189,   190,
     234,   184,   151,    73,   205,   206,   207,   234,   151,   151,
     262,   249,    26,    63,   253,   251,   152,     8,   151,   151,
     249,   151,   256,    61,   149,   157,   150,   152,   237,   243,
     243,   151,   128,   161,    99,   133,    13,    31,   249,    31,
     249,   243,   136,    26,   170,   195,   249,   224,   249,   253,
      31,   192,   253,   150,    26,   170,   253,   269,   270,    13,
     208,   150,   160,   208,   249,   157,    26,   149,   197,    79,
     176,   153,   136,    26,   170,   200,   152,   152,   243,   128,
     161,   190,   183,     8,   149,   205,   152,     8,    31,   146,
     208,   208,   249,   235,    31,   226,   253,   208,   208,   150,
     208,   254,   264,   249,   130,   238,   243,   246,   248,   161,
     136,   243,   251,   251,    96,    13,   168,   152,   153,    96,
     191,   253,   191,   168,   201,   152,   249,   152,   150,   152,
     157,   153,   198,   153,   198,   151,   168,   153,   161,   149,
     234,   213,   152,   144,   228,   207,   146,    13,   152,   152,
     241,   251,   152,   152,   152,   130,   255,   157,   150,   265,
      96,   152,     8,   247,    31,   249,   243,   100,   153,   224,
     192,   152,   152,   202,    64,    65,   203,   150,   198,    78,
      90,   104,   198,   150,   234,   105,   213,    67,    68,    69,
      70,    71,    72,    85,   145,   150,   214,   217,   218,   219,
     220,   222,   181,   151,   149,    31,   146,    13,   243,   265,
     243,   243,   251,   153,   152,    26,   170,   194,   194,    64,
      65,   204,   151,   170,   104,   249,    26,   153,   199,   153,
     150,   146,   153,   150,   136,   146,   221,   227,   220,     8,
     153,   149,    31,   146,   229,   168,   146,    13,   243,   256,
      96,    26,   170,   193,   168,   151,    26,    66,   249,   153,
     199,   168,   152,    13,    13,     8,   153,   179,   136,   168,
     146,     8,   152,   150,    13,   243,   243,   168,   102,   249,
     168,   153,   152,   168,   149,   243,   243,   146,   136,    13,
     150,    31,   146,   243,   101,   153,   152,   170,   168,    13,
     151,   243,   146,   153,    26,   150,   243,   205,   168,    79,
     172,   173,   174,   152,   151,   174,   215,   234,   149,   153,
     216,   146,   168,   152,   150,   149,   168,   150
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
#line 352 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { observers.MakeAst((yyvsp[(1) - (1)].statementList)); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 356 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList)->PushAll((yyvsp[(2) - (2)].statementList)); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 357 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 361 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.qualifiedName), pelet::QualifiedNameClass, (yyvsp[(1) - (1)].lexeme)); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 362 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (3)].qualifiedName)->AddName((yyvsp[(3) - (3)].lexeme)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 366 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 367 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 368 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 369 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 370 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::NamespaceDeclarationClass* decl;
												  AST_INIT_ARGS(decl, pelet::NamespaceDeclarationClass, (yyvsp[(2) - (3)].qualifiedName), (yyvsp[(1) - (3)].token));  
												  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, decl);
												  observers.SetCurrentNamespace((yyvsp[(2) - (3)].qualifiedName)); 
												;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 375 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { observers.SetCurrentNamespace((yyvsp[(2) - (3)].qualifiedName)); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 376 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::NamespaceDeclarationClass* decl;
												  AST_INIT_ARGS(decl, pelet::NamespaceDeclarationClass, (yyvsp[(2) - (6)].qualifiedName), (yyvsp[(1) - (6)].token));
												  (yyval.statementList) = (yyvsp[(5) - (6)].statementList)->PushFront(decl);
												;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 380 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { observers.SetCurrentNamespace(NULL); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 381 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { 
												  pelet::NamespaceDeclarationClass* decl;
												  AST_INIT_ARGS(decl, pelet::NamespaceDeclarationClass, (yyvsp[(1) - (5)].token));
												  (yyval.statementList) = (yyvsp[(4) - (5)].statementList)->PushFront(decl);
												;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 386 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = pelet::NamespaceUseClass::SetStartingPos((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].token)); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 387 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (2)].statementList)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 392 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].namespaceUse)); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 393 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].namespaceUse)); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 397 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(1) - (1)].qualifiedName), NULL, false); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 400 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].lexeme), false); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 403 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(2) - (2)].qualifiedName), NULL, true); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 406 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(2) - (4)].qualifiedName), (yyvsp[(4) - (4)].lexeme), true); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 412 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::ConstantStatementClass* constStmt;
																  AST_INIT_ARGS(constStmt, pelet::ConstantStatementClass, 
																	(yyvsp[(3) - (5)].lexeme), analyzer.GetLineNumber(), 
																	observers.GetCurrentNamespace());
																  (yyval.statementList) = (yyvsp[(1) - (5)].statementList)->Push(constStmt);
																;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 418 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::ConstantStatementClass* constStmt;
																  AST_INIT_ARGS(constStmt, pelet::ConstantStatementClass, 
																    (yyvsp[(2) - (4)].lexeme), analyzer.GetLineNumber(),
																    observers.GetCurrentNamespace());
																  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, constStmt);																	
																;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 427 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList)->PushAll((yyvsp[(2) - (2)].statementList)); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 428 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 435 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 439 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 440 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 444 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 445 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(5) - (7)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(6) - (7)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(7) - (7)].statementList));
																									;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 449 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(6) - (10)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(7) - (10)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(8) - (10)].statementList));
																									;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 453 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(5) - (5)].statementList); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 454 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(2) - (7)].statementList); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 463 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(9) - (9)].statementList); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 464 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(5) - (5)].statementList); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 465 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 466 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 467 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 468 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 469 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 470 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 471 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 472 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 473 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 474 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 475 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 476 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (2)].statement)); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 477 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 480 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(8) - (8)].statementList); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 483 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(8) - (8)].statementList); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 484 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 485 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 489 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_PUSH_ALL_MERGE((yyval.statementList), (yyvsp[(3) - (13)].statementList), (yyvsp[(11) - (13)].statementList));
																									  AST_PUSH_ALL_MERGE((yyval.statementList), (yyval.statementList), (yyvsp[(13) - (13)].statementList));
																									;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 492 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(2) - (3)].statement)); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 493 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 497 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 498 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 502 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 503 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_PUSH_ALL_MERGE((yyval.statementList), (yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 508 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) =  (yyvsp[(7) - (8)].statementList); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 512 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 513 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 517 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 529 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.isReference) = false; ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 530 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.isReference) = true; ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 535 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { observers.SetCurrentClassName(NULL); observers.SetCurrentMemberName((yyvsp[(3) - (6)].lexeme)); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 536 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
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
#line 548 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (4)].lexeme)); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 549 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::ClassSymbolClass* clazz;
											  AST_INIT(clazz, pelet::ClassSymbolClass);
											  clazz->SetAll((yyvsp[(2) - (8)].lexeme), (yyvsp[(1) - (8)].classSymbol), (yyvsp[(3) - (8)].classSymbol), (yyvsp[(4) - (8)].classSymbol), (yyvsp[(8) - (8)].token), observers.GetCurrentNamespace());
											  (yyval.statementList) = (yyvsp[(7) - (8)].statementList)->PushFront(clazz);											  
											  observers.SetCurrentClassName(NULL);
											;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 556 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (3)].lexeme)); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 557 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::ClassSymbolClass* clazz;
											  AST_INIT(clazz, pelet::ClassSymbolClass);
											  clazz->SetAll((yyvsp[(2) - (7)].lexeme), (yyvsp[(1) - (7)].classSymbol), NULL, (yyvsp[(3) - (7)].classSymbol), (yyvsp[(7) - (7)].token), observers.GetCurrentNamespace());
											  (yyval.statementList) = (yyvsp[(6) - (7)].statementList)->PushFront(clazz);
											  observers.SetCurrentClassName(NULL);
											;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 566 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (1)].lexeme), false, false, false, false); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 567 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (2)].lexeme), true, false, false, false); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 568 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (2)].lexeme), false, true, false, false); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 572 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.classSymbol) = 0; ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 574 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass);
										  (yyval.classSymbol)->SetExtends((yyvsp[(2) - (2)].qualifiedName), observers.GetScope(), observers.GetCurrentNamespace()); 
										;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 580 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (1)].lexeme), false, false, true, false); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 584 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.classSymbol) = 0; ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 586 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.classSymbol) = (yyvsp[(2) - (2)].classSymbol); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 590 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags(NULL, false, false, false, false); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 592 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.classSymbol) = (yyvsp[(2) - (2)].classSymbol); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 596 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); 
															  (yyval.classSymbol)->AddToImplements((yyvsp[(1) - (1)].qualifiedName), observers.GetScope(), observers.GetCurrentNamespace()); 
															;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 599 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.classSymbol) = (yyvsp[(1) - (3)].classSymbol)->AddToImplements((yyvsp[(3) - (3)].qualifiedName), observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 603 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 604 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 608 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 609 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = (yyvsp[(2) - (2)].statement); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 613 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 614 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 618 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 619 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 623 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 624 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 628 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 629 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 633 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 634 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 635 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 636 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(3) - (5)].statementList); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 640 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 641 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(5) - (5)].statementList); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 642 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(4) - (4)].statementList); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 646 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 647 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 651 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 652 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 656 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 657 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass);
															  (yyval.statementList)->PushAll((yyvsp[(1) - (6)].statementList))->Push((yyvsp[(4) - (6)].statement))->PushAll((yyvsp[(6) - (6)].statementList));
															;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 663 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 664 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass);
																				  (yyval.statementList)->PushAll((yyvsp[(1) - (7)].statementList))->Push((yyvsp[(4) - (7)].statement))->PushAll((yyvsp[(7) - (7)].statementList));
																			  	;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 670 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 671 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(2) - (2)].statementList); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 675 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 676 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(3) - (3)].statementList); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 680 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.parametersList) = (yyvsp[(1) - (1)].parametersList); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 681 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.parametersList) = 0; ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 685 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (2)].qualifiedName), (yyvsp[(2) - (2)].lexeme), false, observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 686 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].lexeme), true, observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 687 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (5)].qualifiedName), (yyvsp[(3) - (5)].lexeme), true, observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 688 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (4)].qualifiedName), (yyvsp[(2) - (4)].lexeme), false, observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 689 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.parametersList) = (yyvsp[(1) - (4)].parametersList)->Append((yyvsp[(3) - (4)].qualifiedName), (yyvsp[(4) - (4)].lexeme), false, observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 690 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.parametersList) = (yyvsp[(1) - (5)].parametersList)->Append((yyvsp[(3) - (5)].qualifiedName), (yyvsp[(5) - (5)].lexeme), true, observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 691 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.parametersList) = (yyvsp[(1) - (7)].parametersList)->Append((yyvsp[(3) - (7)].qualifiedName), (yyvsp[(5) - (7)].lexeme), true, observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 692 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.parametersList) = (yyvsp[(1) - (6)].parametersList)->Append((yyvsp[(3) - (6)].qualifiedName), (yyvsp[(4) - (6)].lexeme), false, observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 696 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.qualifiedName) = 0; ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 697 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 698 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.qualifiedName), pelet::QualifiedNameClass, UNICODE_STRING_SIMPLE("array")); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 702 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 703 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) =  0; ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 707 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
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
#line 714 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
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
#line 721 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
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
#line 728 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList) ? (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)) : 0; ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 729 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList) ? (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)) : 0; ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 730 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (4)].statementList) ? (yyvsp[(1) - (4)].statementList)->Push((yyvsp[(4) - (4)].statement)) : 0; ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 739 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 740 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 741 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 745 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 746 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 747 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 748 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 752 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_PUSH_ALL_MERGE((yyval.statementList), (yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 753 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 757 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = pelet::ClassMemberSymbolClass::MakeVariables((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].classMemberSymbol)); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 758 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 760 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { observers.SetCurrentMemberName((yyvsp[(4) - (7)].lexeme)); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 761 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
															  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
															  memberSymbol->MakeMethod((yyvsp[(4) - (9)].lexeme), (yyvsp[(1) - (9)].classMemberSymbol), (yyvsp[(3) - (9)].isReference), (yyvsp[(2) - (9)].lexeme), (yyvsp[(6) - (9)].parametersList), (yyvsp[(9) - (9)].classMemberSymbol),
															    observers.GetScope(), observers.GetCurrentNamespace()); 
															  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, memberSymbol);
															  observers.SetCurrentMemberName(NULL);
															;}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 771 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->MakeBody(0, (yyvsp[(1) - (1)].token), (yyvsp[(1) - (1)].token)); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 772 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->MakeBody((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].token), (yyvsp[(3) - (3)].token)); ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 776 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 777 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass);
										  (yyval.classMemberSymbol)->MakeAsPublicVariable((yyvsp[(1) - (1)].lexeme)); 
										;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 783 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->Make(NULL); ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 784 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 788 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->Make((yyvsp[(1) - (1)].lexeme)); ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 789 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (2)].classMemberSymbol)->SetModifier((yyvsp[(2) - (2)].lexeme)); ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 796 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme); ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 802 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(3) - (3)].lexeme), (yyvsp[(3) - (3)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetCurrentNamespace());
																		  (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push(memberSymbol);
																		;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 808 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(3) - (5)].lexeme), (yyvsp[(3) - (5)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetCurrentNamespace());
																		  (yyval.statementList) = (yyvsp[(1) - (5)].statementList)->Push(memberSymbol);
																		;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 814 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(1) - (1)].lexeme), (yyvsp[(1) - (1)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetCurrentNamespace());
																		  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, memberSymbol);
																		;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 820 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(1) - (3)].lexeme), (yyvsp[(1) - (3)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetCurrentNamespace());
																		  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, memberSymbol);
																		;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 830 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
											  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
											  memberSymbol->MakeVariable((yyvsp[(3) - (5)].lexeme), (yyvsp[(3) - (5)].lexeme), true, analyzer.GetLineNumber(),
												observers.GetScope(), observers.GetCurrentNamespace());
											  (yyval.statementList) = (yyvsp[(1) - (5)].statementList)->Push(memberSymbol);
											;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 836 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
											  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
											  memberSymbol->MakeVariable((yyvsp[(2) - (4)].lexeme), (yyvsp[(1) - (4)].lexeme), true, analyzer.GetLineNumber(),
												observers.GetScope(), observers.GetCurrentNamespace());
											  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, memberSymbol);
											;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 845 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)); ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 846 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement)); ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 850 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 851 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 855 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)); ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 856 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement)); ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 860 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = (yyvsp[(6) - (6)].statement); ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 861 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = (yyvsp[(3) - (3)].statement); ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 862 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 863 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 864 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 865 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 866 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 867 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 868 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 869 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 870 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 871 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 872 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 873 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 874 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 875 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 876 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 877 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 878 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 879 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 880 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 881 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 882 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 883 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 884 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 885 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 886 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 887 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 888 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 889 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 890 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 891 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 892 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 893 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 894 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 895 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 896 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 897 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 898 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 899 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 900 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 901 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 902 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 903 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 904 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 905 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 906 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 907 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 908 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 909 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 910 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = (yyvsp[(2) - (3)].statement); ;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 913 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 915 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 916 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 917 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 918 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 919 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 920 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 921 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 922 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 923 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 924 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 925 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = (yyvsp[(2) - (2)].statement); ;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 926 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 927 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 928 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 929 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 931 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 939 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 940 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 944 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 945 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 946 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 947 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 951 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { if ((yyvsp[(1) - (2)].qualifiedName)->ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) { 
																							observers.DoCaptureScalars = true;
																							observers.DoCaptureCallArguments = true;
																						  }
																						;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 956 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
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
#line 970 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 971 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { if ((yyvsp[(2) - (3)].qualifiedName)->ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) { 
																							observers.DoCaptureScalars = true; 
																							observers.DoCaptureCallArguments = true;
																						  }
																						;}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 976 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
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
#line 989 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 991 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 993 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 995 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 997 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 1001 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.qualifiedName) = 0; ;}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1002 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 1003 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.qualifiedName) = (yyvsp[(3) - (3)].qualifiedName)->MakeFromCurrentNamespace(&observers.GetCurrentNamespace()); ;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1004 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.qualifiedName) = (yyvsp[(2) - (2)].qualifiedName)->MakeAbsolute(); ;}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 1008 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1009 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.qualifiedName) = (yyvsp[(3) - (3)].qualifiedName)->MakeFromCurrentNamespace(&observers.GetCurrentNamespace()); ;}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 1010 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.qualifiedName) = (yyvsp[(2) - (2)].qualifiedName)->MakeAbsolute(); ;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1014 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1015 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1020 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.qualifiedName) = 0; ;}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1021 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.qualifiedName) = 0; ;}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 1026 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 1027 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1031 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1035 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 1036 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 1037 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 1041 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1042 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 1043 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 1048 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1049 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1054 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
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
#line 1063 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
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
#line 1073 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
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
#line 1082 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1083 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1084 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1085 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 1086 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1087 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1088 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 1089 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 1090 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 1095 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1096 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 1097 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1098 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 1099 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 1100 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 1101 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 1102 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 1106 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1110 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1111 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 1112 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1113 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 1114 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 1115 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 1116 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1117 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1122 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 1123 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 1127 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.isComma) = 0; ;}
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 1128 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.isComma) = 0; ;}
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 1139 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 1140 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1161 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1162 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1166 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 1167 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 1172 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 1176 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 1177 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 1186 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 1187 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 1196 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 1197 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 1214 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 1215 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 1219 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 1220 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 1236 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 1237 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 1241 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 1242 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 1252 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 1253 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 1254 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 1258 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 1259 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 1263 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 1264 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 1265 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 1266 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 1267 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 1268 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 1269 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 1270 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 1274 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 1275 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 1276 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 1277 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 1281 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 1282 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 1283 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 1284 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 1285 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 1286 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 1290 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 1291 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 1292 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 1296 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 1297 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 1298 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { observers.DoCaptureScalars = true; ;}
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 1299 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::IncludeStatementClass* includeStmt;
												  AST_INIT_ARGS(includeStmt, pelet::IncludeStatementClass, (yyvsp[(3) - (3)].statement), analyzer.GetLineNumber());
												  (yyval.statement) = includeStmt;
												  observers.DoCaptureScalars = false;  
												;}
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 1304 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { observers.DoCaptureScalars = true; ;}
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 1305 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::IncludeStatementClass* includeStmt;
												  AST_INIT_ARGS(includeStmt, pelet::IncludeStatementClass, (yyvsp[(3) - (3)].statement), analyzer.GetLineNumber());
												  (yyval.statement) = includeStmt;
												  observers.DoCaptureScalars = false;  
												;}
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 1310 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 1311 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { observers.DoCaptureScalars = true; ;}
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 1312 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::IncludeStatementClass* includeStmt;
												  AST_INIT_ARGS(includeStmt, pelet::IncludeStatementClass, (yyvsp[(3) - (3)].statement), analyzer.GetLineNumber());
												  (yyval.statement) = includeStmt;
												  observers.DoCaptureScalars = false;  
												;}
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 1317 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { observers.DoCaptureScalars = true; ;}
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 1318 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::IncludeStatementClass* includeStmt;
												  AST_INIT_ARGS(includeStmt, pelet::IncludeStatementClass, (yyvsp[(3) - (3)].statement), analyzer.GetLineNumber());
												  (yyval.statement) = includeStmt;
												  observers.DoCaptureScalars = false;  
												;}
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 1326 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 1327 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 1331 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 1332 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;



/* Line 1455 of yacc.c  */
#line 6471 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.cpp"
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
#line 1335 "c:\\Users\\Roberto\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"


