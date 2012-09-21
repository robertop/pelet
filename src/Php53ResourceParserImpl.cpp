
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
#line 1 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"

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
#line 137 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.cpp"

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
#line 308 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.cpp"

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
#define YYLAST   7509

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  158
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  119
/* YYNRULES -- Number of rules.  */
#define YYNRULES  402
/* YYNRULES -- Number of states.  */
#define YYNSTATES  832

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
     946,   953,   959,   966,   973,   980,   987,   992,   994,   996,
    1000,  1003,  1005,  1009,  1012,  1014,  1016,  1021,  1023,  1026,
    1027,  1030,  1031,  1034,  1038,  1039,  1041,  1043,  1044,  1048,
    1050,  1052,  1054,  1056,  1058,  1060,  1062,  1064,  1066,  1068,
    1072,  1075,  1077,  1079,  1083,  1086,  1089,  1092,  1097,  1099,
    1103,  1105,  1107,  1109,  1113,  1116,  1118,  1122,  1126,  1127,
    1130,  1131,  1133,  1139,  1143,  1147,  1149,  1151,  1153,  1155,
    1157,  1159,  1165,  1167,  1170,  1171,  1175,  1179,  1180,  1182,
    1185,  1189,  1193,  1195,  1197,  1199,  1201,  1204,  1206,  1211,
    1216,  1218,  1220,  1225,  1226,  1228,  1230,  1232,  1237,  1242,
    1244,  1246,  1250,  1252,  1255,  1259,  1261,  1263,  1268,  1269,
    1270,  1273,  1279,  1283,  1287,  1289,  1296,  1301,  1306,  1309,
    1312,  1315,  1317,  1320,  1322,  1327,  1331,  1335,  1342,  1346,
    1348,  1350,  1352,  1357,  1362,  1365,  1368,  1373,  1376,  1379,
    1381,  1385,  1389
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
     136,    -1,   167,     8,   136,    13,   241,    -1,    85,   136,
      13,   241,    -1,   168,   169,    -1,    -1,   170,    -1,   177,
      -1,   178,    -1,   115,   151,   152,   153,    -1,   171,    -1,
     136,    26,    -1,   149,   168,   150,    -1,   116,   151,   247,
     152,   170,   201,   203,    -1,   116,   151,   247,   152,    26,
     168,   202,   204,    66,   153,    -1,   147,   151,   247,   152,
     200,    -1,    93,   170,   147,   151,   247,   152,   153,    -1,
     109,   151,   224,   153,   224,   153,   224,   152,   193,    -1,
     138,   151,   247,   152,   197,    -1,    76,   153,    -1,    76,
     247,   153,    -1,    87,   153,    -1,    87,   247,   153,    -1,
     134,   153,    -1,   134,   226,   153,    -1,   134,   251,   153,
      -1,   113,   210,   153,    -1,    72,   212,   153,    -1,    97,
     223,   153,    -1,   118,    -1,   247,   153,    -1,   143,   151,
     175,   152,   153,    -1,   110,   151,   251,    74,   192,   191,
     152,   194,    -1,   110,   151,   226,    74,   251,   191,   152,
     194,    -1,    89,   151,   196,   152,   195,    -1,   153,    -1,
     142,   149,   168,   150,    79,   151,   232,   146,   152,   149,
     168,   150,   172,    -1,   139,   247,   153,    -1,   114,   136,
     153,    -1,   173,    -1,    -1,   174,    -1,   173,   174,    -1,
      79,   151,   232,   146,   152,   149,   168,   150,    -1,   176,
      -1,   175,     8,   176,    -1,   251,    -1,   180,    -1,   182,
      -1,    -1,    31,    -1,    -1,   227,   179,   136,   151,   205,
     152,   181,   149,   168,   150,    -1,    -1,   185,   136,   186,
     189,   183,   149,   213,   150,    -1,    -1,   187,   136,   188,
     184,   149,   213,   150,    -1,    81,    -1,    71,    81,    -1,
      70,    81,    -1,    -1,   107,   232,    -1,   120,    -1,    -1,
     107,   190,    -1,    -1,   117,   190,    -1,   232,    -1,   190,
       8,   232,    -1,    -1,    96,   192,    -1,   251,    -1,    31,
     251,    -1,   170,    -1,    26,   168,   101,   153,    -1,   170,
      -1,    26,   168,   102,   153,    -1,   170,    -1,    26,   168,
     100,   153,    -1,   136,    13,   241,    -1,   196,     8,   136,
      13,   241,    -1,   149,   198,   150,    -1,   149,   153,   198,
     150,    -1,    26,   198,   104,   153,    -1,    26,   153,   198,
     104,   153,    -1,    -1,   198,    78,   247,   199,   168,    -1,
     198,    90,   199,   168,    -1,    26,    -1,   153,    -1,   170,
      -1,    26,   168,   105,   153,    -1,    -1,   201,    64,   151,
     247,   152,   170,    -1,    -1,   202,    64,   151,   247,   152,
      26,   168,    -1,    -1,    65,   170,    -1,    -1,    65,    26,
     168,    -1,   206,    -1,    -1,   207,   146,    -1,   207,    31,
     146,    -1,   207,    31,   146,    13,   241,    -1,   207,   146,
      13,   241,    -1,   206,     8,   207,   146,    -1,   206,     8,
     207,    31,   146,    -1,   206,     8,   207,    31,   146,    13,
     241,    -1,   206,     8,   207,   146,    13,   241,    -1,    -1,
     232,    -1,    73,    -1,   209,    -1,    -1,   226,    -1,   251,
      -1,    31,   249,    -1,   209,     8,   226,    -1,   209,     8,
     251,    -1,   209,     8,    31,   249,    -1,   210,     8,   211,
      -1,   211,    -1,   146,    -1,   155,   248,    -1,   155,   149,
     247,   150,    -1,   212,     8,   146,    -1,   212,     8,   146,
      13,   241,    -1,   146,    -1,   146,    13,   241,    -1,   213,
     214,    -1,    -1,   217,   221,   153,    -1,   222,   153,    -1,
      -1,   218,   227,   179,   136,   151,   205,   152,   215,   216,
      -1,   153,    -1,   149,   168,   150,    -1,   219,    -1,   145,
      -1,    -1,   219,    -1,   220,    -1,   219,   220,    -1,    67,
      -1,    68,    -1,    69,    -1,    72,    -1,    71,    -1,    70,
      -1,   221,     8,   146,    -1,   221,     8,   146,    13,   241,
      -1,   146,    -1,   146,    13,   241,    -1,   222,     8,   136,
      13,   241,    -1,    85,   136,    13,   241,    -1,   223,     8,
     247,    -1,   247,    -1,    -1,   225,    -1,   225,     8,   247,
      -1,   247,    -1,   123,   151,   267,   152,    13,   247,    -1,
     251,    13,   247,    -1,   251,    13,    31,   251,    -1,   251,
      13,    31,    63,   233,   239,    -1,    63,   233,   239,    -1,
      62,   247,    -1,   251,    24,   247,    -1,   251,    23,   247,
      -1,   251,    22,   247,    -1,   251,    21,   247,    -1,   251,
      20,   247,    -1,   251,    19,   247,    -1,   251,    18,   247,
      -1,   251,    17,   247,    -1,   251,    16,   247,    -1,   251,
      15,   247,    -1,   251,    14,   247,    -1,   250,    59,    -1,
      59,   250,    -1,   250,    58,    -1,    58,   250,    -1,   247,
      27,   247,    -1,   247,    28,   247,    -1,   247,     9,   247,
      -1,   247,    11,   247,    -1,   247,    10,   247,    -1,   247,
      29,   247,    -1,   247,    31,   247,    -1,   247,    30,   247,
      -1,   247,    44,   247,    -1,   247,    42,   247,    -1,   247,
      43,   247,    -1,   247,    45,   247,    -1,   247,    46,   247,
      -1,   247,    47,   247,    -1,   247,    41,   247,    -1,   247,
      40,   247,    -1,    42,   247,    -1,    43,   247,    -1,    48,
     247,    -1,    50,   247,    -1,   247,    33,   247,    -1,   247,
      32,   247,    -1,   247,    35,   247,    -1,   247,    34,   247,
      -1,   247,    36,   247,    -1,   247,    39,   247,    -1,   247,
      37,   247,    -1,   247,    38,   247,    -1,   247,    49,   233,
      -1,   151,   247,   152,    -1,   247,    25,   247,    26,   247,
      -1,   247,    25,    26,   247,    -1,   274,    -1,    57,   247,
      -1,    56,   247,    -1,    55,   247,    -1,    54,   247,    -1,
      53,   247,    -1,    52,   247,    -1,    51,   247,    -1,   106,
     237,    -1,    60,   247,    -1,   243,    -1,    73,   151,   269,
     152,    -1,   154,   238,   154,    -1,    12,   247,    -1,   227,
     179,   151,   205,   152,   228,   149,   168,   150,    -1,   112,
      -1,    -1,   144,   151,   229,   152,    -1,   229,     8,   146,
      -1,   229,     8,    31,   146,    -1,   146,    -1,    31,   146,
      -1,   161,   151,   208,   152,    -1,   126,   128,   161,   151,
     208,   152,    -1,   128,   161,   151,   208,   152,    -1,   231,
     133,   136,   151,   208,   152,    -1,   231,   133,   255,   151,
     208,   152,    -1,   257,   133,   136,   151,   208,   152,    -1,
     257,   133,   255,   151,   208,   152,    -1,   255,   151,   208,
     152,    -1,    72,    -1,   161,    -1,   126,   128,   161,    -1,
     128,   161,    -1,   161,    -1,   126,   128,   161,    -1,   128,
     161,    -1,   231,    -1,   234,    -1,   259,   130,   263,   235,
      -1,   259,    -1,   235,   236,    -1,    -1,   130,   263,    -1,
      -1,   151,   152,    -1,   151,   247,   152,    -1,    -1,    99,
      -1,   271,    -1,    -1,   151,   208,   152,    -1,   124,    -1,
      92,    -1,    86,    -1,   122,    -1,   108,    -1,    91,    -1,
      82,    -1,   125,    -1,   111,    -1,   127,    -1,   135,    99,
     103,    -1,   135,   103,    -1,   240,    -1,   161,    -1,   126,
     128,   161,    -1,   128,   161,    -1,    42,   241,    -1,    43,
     241,    -1,    73,   151,   244,   152,    -1,   242,    -1,   231,
     133,   136,    -1,   137,    -1,   276,    -1,   161,    -1,   126,
     128,   161,    -1,   128,   161,    -1,   240,    -1,   156,   271,
     156,    -1,   135,   271,   103,    -1,    -1,   246,   245,    -1,
      -1,     8,    -1,   246,     8,   241,    96,   241,    -1,   246,
       8,   241,    -1,   241,    96,   241,    -1,   241,    -1,   248,
      -1,   226,    -1,   251,    -1,   251,    -1,   251,    -1,   258,
     130,   263,   254,   252,    -1,   258,    -1,   252,   253,    -1,
      -1,   130,   263,   254,    -1,   151,   208,   152,    -1,    -1,
     260,    -1,   266,   260,    -1,   231,   133,   255,    -1,   257,
     133,   255,    -1,   260,    -1,   259,    -1,   230,    -1,   260,
      -1,   266,   260,    -1,   256,    -1,   260,    61,   262,   157,
      -1,   260,   149,   247,   150,    -1,   261,    -1,   146,    -1,
     155,   149,   247,   150,    -1,    -1,   247,    -1,   264,    -1,
     255,    -1,   264,    61,   262,   157,    -1,   264,   149,   247,
     150,    -1,   265,    -1,   136,    -1,   149,   247,   150,    -1,
     155,    -1,   266,   155,    -1,   267,     8,   268,    -1,   268,
      -1,   251,    -1,   123,   151,   267,   152,    -1,    -1,    -1,
     270,   245,    -1,   270,     8,   247,    96,   247,    -1,   270,
       8,   247,    -1,   247,    96,   247,    -1,   247,    -1,   270,
       8,   247,    96,    31,   249,    -1,   270,     8,    31,   249,
      -1,   247,    96,    31,   249,    -1,    31,   249,    -1,   271,
     272,    -1,   271,    99,    -1,   272,    -1,    99,   272,    -1,
     146,    -1,   146,    61,   273,   157,    -1,   146,   130,   136,
      -1,    95,   247,   150,    -1,    95,   137,    61,   247,   157,
     150,    -1,    88,   251,   150,    -1,   136,    -1,   129,    -1,
     146,    -1,   121,   151,   275,   152,    -1,    98,   151,   251,
     152,    -1,     7,   247,    -1,     6,   247,    -1,     5,   151,
     247,   152,    -1,     4,   247,    -1,     3,   247,    -1,   251,
      -1,   275,     8,   251,    -1,   231,   133,   136,    -1,   257,
     133,   136,    -1
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
     691,   692,   696,   697,   698,   702,   703,   707,   708,   709,
     710,   711,   712,   716,   717,   721,   722,   723,   727,   728,
     729,   730,   734,   735,   739,   740,   742,   741,   753,   754,
     758,   759,   765,   766,   770,   771,   775,   776,   777,   778,
     779,   780,   784,   790,   796,   802,   811,   818,   827,   828,
     832,   833,   837,   838,   842,   843,   844,   845,   846,   847,
     848,   849,   850,   851,   852,   853,   854,   855,   856,   857,
     858,   859,   860,   861,   862,   863,   864,   865,   866,   867,
     868,   869,   870,   871,   872,   873,   874,   875,   876,   877,
     878,   879,   880,   881,   882,   883,   884,   885,   886,   887,
     888,   889,   890,   891,   892,   893,   896,   898,   899,   900,
     901,   902,   903,   904,   905,   906,   907,   908,   909,   910,
     911,   912,   917,   921,   922,   926,   927,   928,   929,   933,
     935,   938,   940,   942,   944,   946,   948,   953,   954,   955,
     956,   960,   961,   962,   966,   967,   971,   973,   978,   979,
     983,   987,   988,   989,   993,   994,   995,  1000,  1001,  1006,
    1007,  1008,  1009,  1010,  1011,  1012,  1013,  1014,  1015,  1016,
    1017,  1022,  1023,  1024,  1025,  1026,  1027,  1028,  1029,  1033,
    1037,  1038,  1039,  1040,  1041,  1042,  1043,  1044,  1049,  1050,
    1054,  1055,  1059,  1060,  1061,  1062,  1066,  1067,  1072,  1077,
    1081,  1085,  1089,  1093,  1094,  1099,  1103,  1104,  1108,  1109,
    1113,  1114,  1119,  1123,  1124,  1128,  1129,  1130,  1134,  1135,
    1136,  1141,  1142,  1146,  1147,  1152,  1153,  1157,  1158,  1159,
    1163,  1164,  1168,  1169,  1173,  1174,  1179,  1180,  1181,  1185,
    1186,  1190,  1191,  1192,  1193,  1194,  1195,  1196,  1197,  1201,
    1202,  1203,  1204,  1208,  1209,  1210,  1211,  1212,  1213,  1217,
    1218,  1219,  1223,  1224,  1225,  1226,  1227,  1228,  1229,  1233,
    1234,  1238,  1239
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
  "lexical_vars", "lexical_var_list", "function_call", "class_name",
  "fully_qualified_class_name", "class_name_reference",
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
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "class_constant", 0
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
     226,   226,   227,   228,   228,   229,   229,   229,   229,   230,
     230,   230,   230,   230,   230,   230,   230,   231,   231,   231,
     231,   232,   232,   232,   233,   233,   234,   234,   235,   235,
     236,   237,   237,   237,   238,   238,   238,   239,   239,   240,
     240,   240,   240,   240,   240,   240,   240,   240,   240,   240,
     240,   241,   241,   241,   241,   241,   241,   241,   241,   242,
     243,   243,   243,   243,   243,   243,   243,   243,   244,   244,
     245,   245,   246,   246,   246,   246,   247,   247,   248,   249,
     250,   251,   251,   252,   252,   253,   254,   254,   255,   255,
     256,   256,   257,   258,   258,   259,   259,   259,   260,   260,
     260,   261,   261,   262,   262,   263,   263,   264,   264,   264,
     265,   265,   266,   266,   267,   267,   268,   268,   268,   269,
     269,   270,   270,   270,   270,   270,   270,   270,   270,   271,
     271,   271,   271,   272,   272,   272,   272,   272,   272,   273,
     273,   273,   274,   274,   274,   274,   274,   274,   274,   275,
     275,   276,   276
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
       2,     9,     1,     0,     4,     3,     4,     1,     2,     4,
       6,     5,     6,     6,     6,     6,     4,     1,     1,     3,
       2,     1,     3,     2,     1,     1,     4,     1,     2,     0,
       2,     0,     2,     3,     0,     1,     1,     0,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       2,     1,     1,     3,     2,     2,     2,     4,     1,     3,
       1,     1,     1,     3,     2,     1,     3,     3,     0,     2,
       0,     1,     5,     3,     3,     1,     1,     1,     1,     1,
       1,     5,     1,     2,     0,     3,     3,     0,     1,     2,
       3,     3,     1,     1,     1,     1,     2,     1,     4,     4,
       1,     1,     4,     0,     1,     1,     1,     4,     4,     1,
       1,     3,     1,     2,     3,     1,     1,     4,     0,     0,
       2,     5,     3,     3,     1,     6,     4,     4,     2,     2,
       2,     1,     2,     1,     4,     3,     3,     6,     3,     1,
       1,     1,     4,     4,     2,     2,     4,     2,     2,     1,
       3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     2,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   267,     0,
       0,    79,   295,     0,   291,     0,     0,   294,   290,     0,
       0,     0,   281,   293,     0,     0,   297,   252,     0,     0,
       0,     0,    51,    84,     0,   292,     0,   289,   296,     0,
     298,     0,     0,     0,     5,   310,     0,     0,     0,     0,
       0,   351,     0,    27,     0,    57,   284,   362,     0,   312,
       3,     0,     7,    32,     8,     9,    69,    70,     0,     0,
     327,    71,   344,     0,   315,   247,     0,   326,     0,   328,
       0,   347,     0,   332,   343,   345,   350,     0,   237,   311,
     267,     0,     5,    71,   398,   397,     0,   395,   394,   250,
     221,   222,   223,   224,   244,   243,   242,   241,   240,   239,
     238,     0,     0,   268,     0,   204,   330,     0,   202,   246,
     189,     0,     0,   268,   274,   287,   275,     0,   277,   345,
       0,    81,    80,   150,     0,   369,    41,     0,     0,    43,
       0,     0,     0,     0,   179,     0,     0,   245,   180,     0,
     145,     0,     0,   144,     0,     0,     0,     0,   368,     0,
      14,     0,   314,    45,   327,     0,   328,     0,     0,     0,
     300,   383,     0,   381,    33,     0,     0,    27,     0,     0,
      20,     0,    19,     0,     0,     0,   285,     0,   286,     0,
       0,     0,     0,   136,     0,    17,    82,    85,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,   203,   201,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   136,     0,     0,   353,     0,   363,   346,     0,
       0,     0,   270,     0,     0,     0,   270,     0,   136,   188,
       0,     0,   346,     0,     0,    49,     0,   374,     0,   320,
      42,     0,    44,     0,     0,     0,     0,    50,     0,   282,
       0,     0,   181,   183,   327,   328,     0,   146,   328,     0,
      48,    60,     0,     0,   399,     0,     0,   366,     0,   365,
     313,     4,    12,    11,   136,    46,    47,     0,   310,     0,
     299,   382,     0,     0,   380,   317,   379,     0,    59,     0,
       0,    66,    68,    22,     0,     0,    16,     0,     0,    34,
      26,    28,    29,    30,   234,   249,     0,   316,     6,     0,
       0,   135,   327,   328,     0,     0,    87,     0,    77,     0,
     132,   401,   340,   338,     0,   207,   209,   208,     0,     0,
     205,   206,   210,   212,   211,   226,   225,   228,   227,   229,
     231,   232,   230,   220,   219,   214,   215,   213,   216,   217,
     218,   233,     0,   185,   200,   199,   198,   197,   196,   195,
     194,   193,   192,   191,   190,     0,   402,   341,   360,     0,
     356,   337,   355,   359,   354,     0,     0,   396,   269,     0,
       0,   269,   340,     0,   341,   279,     0,     0,     0,     0,
       0,     0,   302,     0,   301,   151,   308,   148,   378,   329,
       0,   248,   321,   370,    25,     0,     0,     0,     0,   178,
     393,   283,   180,     0,     0,     0,     0,   143,    10,     0,
       0,   392,   368,   368,     0,   136,     0,     4,     0,   388,
       0,   386,   390,   389,   391,     0,   385,     0,     0,     0,
       0,     0,    21,    18,     0,     0,   352,   139,   259,     0,
       0,     0,     0,   271,    83,     0,    75,    86,    89,     0,
     132,   134,     0,   122,     0,   133,   136,   136,   339,   236,
       0,     0,   186,   266,   136,   136,     0,   136,   334,   353,
       0,   348,   349,   288,   276,   305,   306,   318,     0,   304,
       0,     0,     0,     0,   373,     0,   372,   101,     0,    27,
      99,    56,     0,     0,   182,    91,     0,    91,    93,   147,
      27,   114,   400,     0,   364,     0,     0,    15,     0,   261,
       0,   384,   107,   107,    40,     0,    67,    53,    23,    27,
     112,    37,     0,     0,   327,   328,    24,     0,   273,    88,
       0,     0,   153,     0,   253,   132,     0,   124,     0,     0,
     235,   287,     0,     0,   361,     0,   331,     0,     0,     0,
     278,   325,     0,   320,   303,   309,   149,   377,   376,     0,
       0,     0,     0,   180,     0,     0,    94,     0,   116,   118,
     367,   184,   260,    13,     0,   107,     0,   107,     0,     0,
       0,    31,   142,   272,   153,    90,   162,    73,     0,     0,
       0,   125,     0,   262,   263,   187,   264,   265,   336,     0,
     333,   357,   358,   280,     0,   307,   321,   319,     0,   371,
     102,     0,    38,     0,    92,     0,     0,   120,     0,     0,
      35,   387,     0,     0,     0,     0,     0,   103,     0,     0,
     162,   166,   167,   168,   171,   170,   169,     0,   161,    78,
     152,     0,     0,   160,   164,     0,     0,     0,    27,     0,
     128,     0,   127,   337,   324,   323,   375,   100,     0,    27,
      97,    55,    54,     0,     0,     0,     0,   119,     0,     0,
     110,   111,    27,   105,   104,     0,   113,    76,     0,   174,
       0,    71,   165,     0,   155,    27,     0,   257,     0,     0,
     129,     0,   126,   335,     0,    27,    95,    39,     0,     0,
      27,     0,     0,   106,    27,   109,     0,     0,     0,     0,
     154,     0,     0,     0,   258,     0,   254,   251,     0,   131,
     322,     0,     0,     0,   121,    36,     0,   108,    27,   177,
     175,   172,     0,     0,    74,     0,   255,   130,     0,    98,
       0,   115,     0,     0,   132,   176,   256,    96,    27,    62,
     173,     0,   117,     0,    58,    61,    63,   156,     0,    64,
       0,     0,    27,   158,   157,     0,     0,     0,   159,    27,
       0,    65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    79,    80,   477,   321,   201,   202,    81,
     204,   350,   351,    83,   814,   815,   816,   340,   341,   352,
     353,   219,    86,   706,    87,   590,   509,    88,   366,    89,
     368,   506,   507,   625,   557,   757,   721,   551,   294,   574,
     636,   732,   581,   629,   677,   680,   725,   512,   513,   514,
     360,   361,   172,   173,   154,   646,   700,   820,   824,   701,
     702,   703,   704,   740,   705,   163,   301,   302,    90,   113,
     649,   748,    92,    93,   515,   145,   146,   534,   610,   167,
     207,   279,    94,   445,   446,    95,   612,   453,   613,    96,
      97,   448,    98,    99,   606,   660,   528,   100,   101,   102,
     103,   104,   105,   106,   425,   421,   422,   423,   107,   318,
     319,   288,   289,   192,   193,   485,   108,   315,   109
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -507
static const yytype_int16 yypact[] =
{
    -507,    59,  1801,  -507,  6239,  6239,  -113,  6239,  6239,  6239,
    6239,  6239,  6239,  6239,  6239,  6239,  6239,  6239,  6239,  6239,
    6239,   262,   262,  6239,  6239,   365,    71,    83,    21,    53,
    4727,  -507,  -507,    92,  -507,  4853,    94,  -507,  -507,  4573,
    6239,   101,   111,  -507,   114,   129,  -507,  -507,   -57,   150,
     154,   162,  -507,  -507,   168,  -507,   176,  -507,  -507,   138,
    -507,   208,  4979,   264,   329,  -507,   211,  6239,   234,   236,
     105,  -507,   255,  -507,  6239,  -507,   294,   263,   319,   125,
    -507,    13,  -507,  -507,  -507,  -507,  -507,  -507,   305,   307,
    -507,   419,  -507,   322,  -507,  -507,  6538,  -507,   283,   920,
     302,  -507,   325,   330,  -507,   -20,  -507,    52,  -507,  -507,
    -507,   331,  -507,   419,  7420,  7420,  6239,  7420,  7420,  1278,
    -507,  -507,   415,  -507,  -507,  -507,  -507,  -507,  -507,  -507,
    -507,   339,   208,   -63,   335,  -507,  -507,   336,  -507,  -507,
    -507,   342,   208,   347,   343,   332,  -507,   354,   367,    11,
      52,  -507,  -507,   479,    16,  5105,  -507,  6579,   482,  -507,
    6624,   363,   353,    17,  7420,   262,  5231,  -507,  6239,  6239,
    -507,   145,    22,  -507,   355,   364,  6239,   262,   210,   208,
    -507,   -62,   207,  -507,   366,  7420,   357,   262,  6365,   131,
    -507,   -38,   265,  -507,  -507,  6239,  6665,  -507,   262,   208,
      82,    24,  -507,  6239,  1955,  6706,   -32,   371,   414,  6239,
     -32,   155,   381,  5357,   382,  -507,   421,   423,  -507,   -78,
     -21,  6239,  6239,  6239,  5483,  6239,  6239,  6239,  6239,  6239,
    6239,  6239,  6239,  6239,  6239,  6239,  6239,  6239,  6239,  6239,
    6239,  6239,  6239,  6239,  6239,  6239,   365,  -507,  -507,  -507,
    5609,  6239,  6239,  6239,  6239,  6239,  6239,  6239,  6239,  6239,
    6239,  6239,  5357,   267,   289,  6239,  6239,   263,    57,   386,
    6751,   208,   -28,   290,   306,   208,   347,   160,  5357,  -507,
     160,   289,   -30,   775,   392,  -507,   262,  1059,   387,   534,
    -507,   775,  -507,   530,    29,   393,  6239,  -507,   394,  -507,
    6792,   396,   543,  7420,   480,   699,  6239,  -507,  -507,   -57,
    -507,  -507,   400,  6834,  -507,    34,   404,  -507,    36,  -507,
     272,  -507,  -507,  -507,  5357,  -507,  -507,   408,   495,  7086,
    -507,  -507,   102,   425,  -507,  -507,  -507,  6877,  -507,  2109,
      38,  -507,  -507,   121,   426,   105,  -507,  6918,   422,  -507,
    -507,  -507,  -507,  -507,  -507,  -507,  7129,  -507,  -507,   262,
     407,   562,    39,    62,   559,    73,   457,    73,  -507,   430,
      85,   433,   434,   -30,    52,  7460,   971,  1278,  6239,  7379,
    1786,  1939,  1328,  1205,  1359,  1474,  1474,  1474,  1474,  1306,
    1341,  1341,  1341,   659,   659,    48,    48,    48,   415,   415,
     415,  -507,    96,  1278,  1278,  1278,  1278,  1278,  1278,  1278,
    1278,  1278,  1278,  1278,  1278,   424,   437,   438,  -507,  6239,
    -507,   440,   -22,  -507,  7420,   436,  7170,  -507,    64,   433,
     437,   347,  -507,   444,  -507,  -507,   775,   775,   454,   478,
     208,    37,   -71,   474,  -507,  -507,  -507,   596,  -507,  -507,
    5735,  -507,  5861,  -507,  -507,   775,   475,  3803,  6239,  7420,
    -507,  -507,  6239,  6239,   262,     2,  7212,  -507,  -507,  3957,
     262,  -507,   210,   210,   599,  5357,  1492,  -507,   461,  -507,
    6239,  -507,  -507,  -507,  -507,   460,  -507,    -6,   535,   262,
     465,   486,  -507,  -507,  4111,   473,  -507,  -507,  -507,  5987,
     775,   499,   208,   347,  -507,    73,  -507,   622,  -507,   483,
      85,  -507,   481,   627,    -9,  -507,  5357,  5357,   -30,  1633,
    6239,   365,  -507,  -507,  5357,  5357,  7253,  5357,  -507,  6239,
    6239,  -507,  -507,  -507,   507,  -507,  -507,   775,   208,   175,
     536,   504,   775,   262,  7420,   262,  7336,  -507,   628,  -507,
    -507,  -507,  6960,   491,  7420,   549,   262,   549,  -507,  -507,
    -507,  -507,  -507,    41,  -507,  6239,   494,  -507,  1647,  -507,
    1255,  -507,   496,   498,  -507,   503,  -507,  -507,  -507,  -507,
    -507,  -507,   502,   262,    44,    88,  -507,   208,   347,   622,
     509,    73,  -507,   512,   515,   171,   521,   655,   517,   519,
    1633,   332,   520,   524,  -507,   526,   550,   516,  7294,   289,
    -507,   587,   537,   678,   217,  -507,  -507,  -507,  -507,  6113,
     775,  2263,   538,  6239,     2,   540,  -507,   541,  3649,   320,
    -507,  1278,  -507,  -507,   544,  -507,   224,  -507,    75,    73,
    2417,  -507,  -507,   347,  -507,  -507,   254,  -507,   545,   548,
      -5,   674,   775,  -507,  -507,  -507,  -507,  -507,  -507,   289,
    -507,  -507,  -507,  -507,   775,  -507,   775,  -507,   262,  7420,
    -507,   546,  -507,   555,  -507,  4265,  4265,   337,   558,  4573,
    -507,  -507,   226,  6239,    -8,   572,   122,  -507,   565,   573,
     362,  -507,  -507,  -507,  -507,  -507,  -507,   592,  -507,  -507,
    -507,   586,   621,   531,  -507,    26,   585,    -4,  -507,   590,
     724,   775,  -507,   440,  -507,   643,  -507,  -507,  4419,  -507,
    -507,  -507,  -507,   589,   715,   677,  6239,  -507,   593,  6497,
    -507,  -507,  -507,  -507,  -507,   597,  -507,  -507,   732,   737,
      27,   419,  -507,   617,  -507,  -507,   608,  -507,    45,  2571,
     742,   775,  -507,  -507,   775,  -507,  -507,  -507,  2725,  6239,
    -507,   606,  7003,  -507,  -507,  3649,   611,   775,   775,   615,
    -507,   629,   751,  2879,  -507,     5,  -507,  -507,   775,  -507,
    -507,  3033,   613,  7044,  3649,  -507,  4573,  3649,  -507,  -507,
    -507,   754,   618,   775,  -507,   624,  -507,  -507,   623,  -507,
     748,  -507,  3187,   775,    85,  -507,  -507,  -507,  -507,   689,
    -507,   626,  3649,   630,  -507,   689,  -507,  -507,    73,  -507,
     -14,   637,  -507,  -507,  -507,   632,  3341,   641,  -507,  -507,
    3495,  -507
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -507,  -507,  -304,   -16,  -507,  -507,  -507,  -507,   441,  -507,
     -98,  -507,     9,  -507,  -507,  -507,   -40,  -507,   304,    12,
      14,  -112,  -507,  -507,  -507,  -507,  -507,  -507,  -507,  -507,
    -507,  -507,   286,   239,   173,  -507,   123,  -507,  -507,  -507,
    -419,    69,  -507,  -507,  -507,  -507,  -507,  -506,  -507,   206,
    -207,  -507,  -507,   500,  -507,   159,  -507,  -507,  -507,  -507,
    -507,  -507,   108,  -507,  -507,  -507,  -449,  -507,    70,    -2,
    -507,  -507,  -507,   370,  -355,  -231,  -507,  -507,  -507,  -507,
    -507,   203,    78,   128,  -507,  -507,  -507,   192,  -507,   957,
     642,  -356,   406,     7,  -507,  -507,    95,  -213,  -507,   868,
    -507,   -23,   -17,  -507,   285,  -262,  -507,  -507,    15,   340,
     346,  -507,  -507,    46,   471,  -507,  -507,  -507,  -507
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -343
static const yytype_int16 yytable[] =
{
      91,   269,   148,   497,   593,   133,   133,   372,   149,   143,
     504,    82,   508,   553,    84,   401,    85,   476,   730,   435,
     572,   214,   596,   332,   284,   296,   709,   746,   136,   136,
     309,   265,   345,   556,   743,   769,   795,   456,   116,   529,
     150,   265,   470,   181,   473,   182,   489,  -137,   162,   473,
     417,   420,  -140,   775,   200,   415,   187,   212,   369,     3,
     372,   417,  -268,   188,   432,   212,   212,   434,   420,   186,
    -138,   433,   265,   370,   110,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   322,   213,   170,
     268,   323,   333,   243,   244,   245,  -141,   246,   171,   339,
     212,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,  -342,   191,   371,   272,   478,   265,   266,
    -330,  -330,   208,   324,   211,    71,   276,   530,   131,   266,
     132,  -338,   184,   282,    77,   822,   540,   597,   112,   823,
     190,   710,   747,   573,  -342,   731,  -330,  -330,    71,   133,
     508,   796,   151,   683,   638,   133,   344,    77,   511,   521,
     266,   133,   133,   320,   152,   684,   215,   153,   110,   285,
     297,   133,   298,   568,   673,   310,   305,   346,   308,   744,
     770,   457,   133,   343,   314,   317,   471,   617,   474,   618,
     490,  -137,   212,   630,   327,   491,  -140,   776,    71,   501,
     683,   502,    91,   373,   155,   342,   266,   267,  -339,   112,
     212,   501,   684,   502,  -138,   475,   682,   110,   686,   187,
     363,   112,   131,   148,   132,   687,   188,   642,   158,   149,
     143,   482,   112,   199,   330,   374,   645,  -123,   483,   304,
    -141,   112,    71,   187,   511,   161,   373,   373,   484,   212,
     188,    77,   165,   212,   334,   428,   373,   373,  -268,   431,
     373,   150,   166,   373,   373,   168,   179,   442,   566,   363,
     133,   131,   734,   132,   112,   442,   213,   191,   374,   374,
     169,   112,   110,   362,   688,   363,   174,   180,   374,   374,
     601,    71,   374,   449,   306,   374,   374,   501,   811,   502,
      77,   191,   683,   212,   683,   175,    71,   112,  -270,   598,
     599,   357,   716,   176,   684,    77,   684,   602,   603,   177,
     605,   691,   692,   693,   694,   695,   696,   178,   685,   200,
     728,   363,   362,   316,   110,   212,   131,    91,   132,   697,
    -270,   248,   249,   133,   112,   212,   112,   663,   362,   503,
    -269,   503,   187,   187,   503,   194,    71,   518,   324,   188,
     188,   444,   195,   189,   334,    77,   449,   190,   335,   444,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   187,   197,   678,   679,   133,   198,   131,   188,
     132,   134,   134,   206,   362,   144,   420,   713,   112,   698,
     212,   723,   724,   416,   699,  -269,   203,   187,    71,   522,
     191,   191,   209,    71,   188,  -330,  -330,    77,   210,   454,
     442,   442,    77,   475,   539,   418,   429,   135,   138,   691,
     692,   693,   694,   695,   696,    71,    71,   110,   419,   442,
     191,   216,   430,   217,    77,    77,   420,   697,   133,   133,
     218,   621,    71,   262,   133,   220,   133,   133,   263,   179,
     264,    77,   628,   821,   246,   191,   550,   271,   273,   274,
     275,   555,   558,   133,    91,   212,   277,   562,   561,   317,
     317,   640,   363,   278,   442,    82,   588,   280,    84,   503,
      85,   141,   283,   142,   503,   291,   342,   281,   148,   293,
     295,   112,   187,   580,   149,   143,   585,   698,   311,   188,
     326,    71,   737,   334,   444,   444,   312,   358,   364,   325,
      77,   442,   614,   363,   363,   355,   442,   133,   365,   133,
     367,   363,   363,   444,   363,   134,   150,   370,   447,   451,
     133,   134,   452,   455,   458,   362,   460,   134,   134,   462,
     449,   463,   449,   468,   464,   472,   480,   134,   479,   498,
     191,   486,   492,   626,   535,   536,    91,   133,   134,   584,
     499,   643,   500,   495,   505,   503,   523,    82,   444,   503,
      84,   510,    85,   547,   516,   517,   362,   362,   524,   525,
     449,   527,   373,   531,   362,   362,   533,   362,   691,   692,
     693,   694,   695,   696,   442,   537,   538,   541,   133,   542,
     749,   548,   565,   569,   575,   444,   144,   571,   577,    91,
     444,   758,   578,   503,   374,   582,    91,   587,   586,   771,
     591,   558,   592,   594,   765,   595,   442,   609,    91,   330,
     615,   620,   373,  -163,   623,   624,   632,   773,   442,   635,
     442,   637,   133,   443,   639,   641,   134,   781,   644,   648,
     331,   443,   784,   336,   647,   611,   787,   651,   652,   653,
     616,   654,   656,   661,   374,   449,   657,   331,   658,   336,
     659,   331,   336,   664,   720,   720,   666,   711,   727,   665,
     802,   672,   675,   676,   681,   442,   707,   708,   444,   717,
     741,   240,   241,   242,   243,   244,   245,   718,   246,   726,
     812,   735,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   826,   733,   736,   756,   738,   134,
     444,   830,   739,    47,   745,   442,   750,   751,   442,   754,
     759,   760,   444,   761,   444,   767,   763,    91,   670,   766,
     768,   442,   442,   772,   774,   778,    91,  -330,  -330,   785,
     788,   791,   442,    91,   793,   792,   799,   803,   813,   804,
     806,    91,   134,   465,   808,   819,   807,   442,   817,    91,
     712,   818,    91,   825,   827,    91,   493,   442,   503,   444,
     829,   589,   714,   576,   715,   801,   627,   674,   764,   722,
      91,   650,   503,   690,   655,   667,   443,   443,   753,   467,
      91,   742,   563,   307,   607,     0,     0,   436,   437,   564,
       0,     0,     0,     0,    91,   443,     0,     0,    91,   444,
       0,     0,   444,     0,   134,   134,     0,     0,     0,   752,
     134,     0,   134,   134,     0,   444,   444,   110,   438,     0,
       0,     0,     0,     0,     0,     0,   444,    32,     0,   134,
       0,    34,     0,     0,     0,     0,    37,    38,     0,     0,
     443,   444,     0,     0,     0,     0,     0,     0,     0,   779,
       0,   444,   780,    43,     0,     0,    46,     0,     0,   137,
     137,   144,     0,   147,     0,   789,   790,    55,     0,    57,
      58,   439,    60,   440,     0,     0,   797,   443,     0,     0,
     441,   112,   443,   134,     0,   134,     0,     0,     0,     0,
       0,   805,     0,     0,     0,     0,   134,     0,     0,     0,
       0,   810,     0,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,     0,     0,     0,     0,     0,
       0,     0,     0,   134,     0,     0,     0,     0,     0,     0,
       0,   114,   115,     0,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,  -330,  -330,
     139,   140,   223,     0,     0,     0,     0,   157,     0,     0,
     443,     0,   160,     0,   134,     0,   224,   164,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   185,
     246,     0,   443,     0,   196,     0,     0,     0,     0,     0,
       0,   205,     0,   137,   443,     0,   443,     0,   134,   137,
       0,     0,     0,     0,     0,   137,   137,     0,     0,     0,
       0,     0,     0,     0,     0,   137,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   137,     0,   221,   222,
     223,     0,     0,   270,     0,     0,     0,     0,     0,     0,
       0,   443,     0,     0,   224,     0,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,     0,
       0,     0,   287,     0,   147,     0,     0,     0,     0,     0,
       0,   443,     0,   300,   443,   303,   185,     0,     0,     0,
       0,     0,     0,   313,     0,     0,     0,   443,   443,     0,
       0,     0,     0,     0,     0,   329,     0,     0,   443,     0,
       0,     0,   337,     0,   137,   450,     0,     0,     0,     0,
     347,     0,     0,   443,     0,     0,   356,     0,     0,     0,
     185,     0,     0,   443,     0,     0,     0,     0,   375,   376,
     377,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   390,   391,   392,   393,   394,   395,   396,   397,
     398,   399,   400,     0,     0,     0,     0,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   185,
       0,     0,   424,   426,     0,     0,     0,   137,     0,     0,
       0,     0,     0,     0,     0,   185,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   459,   246,     0,     0,     0,     0,     0,
       0,     0,     0,   466,   221,   222,   223,     0,     0,     0,
     137,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,   185,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   224,   246,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,     0,     0,
       0,     0,   137,   137,     0,   519,     0,     0,   137,     0,
     137,   137,  -343,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,     0,   137,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   526,   246,  -343,  -343,
    -343,   238,   239,   240,   241,   242,   243,   244,   245,   147,
     246,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   544,   246,   546,
       0,   137,   634,   137,     0,   552,     0,     0,     0,   303,
     554,     0,     0,     0,   137,     0,     0,     0,     0,     0,
       0,     0,   185,     0,     0,     0,     0,   570,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   137,     0,     0,     0,     0,   185,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   185,   185,     0,     0,   600,     0,     0,
       0,   185,   185,     0,   185,     0,   424,   608,     0,     0,
       0,     0,   137,     0,     0,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,     0,  -343,  -343,  -343,  -343,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   631,   246,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,   137,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,     0,     0,     0,     0,
       0,     0,    26,    27,    28,    29,     0,     0,    30,     0,
       0,     0,     0,    31,    32,     0,   669,    33,    34,    35,
     303,    36,     0,    37,    38,    39,     0,     0,     0,    40,
      41,     0,     0,     0,     0,     0,     0,     0,    42,     0,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
      52,     0,    53,    54,    55,    56,    57,    58,    59,    60,
      61,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,     0,     0,    68,    69,    70,     0,    71,    72,
     729,    73,   567,    74,     0,    75,    76,    77,    78,     0,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,   762,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,   783,    26,    27,    28,
      29,     0,     0,    30,     0,     0,     0,     0,    31,    32,
       0,     0,    33,    34,    35,     0,    36,     0,    37,    38,
      39,     0,     0,     0,    40,    41,     0,     0,     0,     0,
       0,     0,     0,    42,     0,    43,    44,    45,    46,    47,
      48,    49,    50,    51,     0,    52,     0,    53,    54,    55,
      56,    57,    58,    59,    60,    61,     0,     0,     0,     0,
       0,    62,    63,    64,    65,    66,    67,     0,     0,    68,
      69,    70,     0,    71,    72,     0,    73,   633,    74,     0,
      75,    76,    77,    78,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,    25,     0,     0,     0,     0,     0,
       0,    26,    27,    28,    29,     0,     0,    30,     0,     0,
       0,     0,    31,    32,     0,     0,    33,    34,    35,     0,
      36,     0,    37,    38,    39,     0,     0,     0,    40,    41,
       0,     0,     0,     0,     0,     0,     0,    42,     0,    43,
      44,    45,    46,    47,    48,    49,    50,    51,     0,    52,
       0,    53,    54,    55,    56,    57,    58,    59,    60,    61,
       0,     0,     0,     0,     0,    62,    63,    64,    65,    66,
      67,     0,     0,    68,    69,    70,     0,    71,    72,     0,
      73,     0,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,    26,    27,    28,    29,     0,
       0,    30,     0,     0,     0,     0,    31,    32,     0,     0,
       0,    34,    35,     0,    36,     0,    37,    38,    39,     0,
       0,     0,    40,    41,     0,     0,     0,     0,     0,     0,
       0,    42,     0,    43,    44,    45,    46,    47,    48,    49,
     348,    51,     0,    52,     0,    53,    54,    55,    56,    57,
      58,   111,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,     0,     0,    68,    69,     0,
       0,    71,    72,     0,    73,   349,    74,     0,    75,    76,
      77,    78,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,    25,     0,     0,     0,     0,     0,     0,    26,
      27,    28,    29,     0,     0,    30,     0,     0,     0,     0,
      31,    32,     0,     0,     0,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,    44,    45,
      46,    47,    48,    49,   348,    51,     0,    52,     0,    53,
      54,    55,    56,    57,    58,   111,    60,    61,     0,     0,
       0,     0,     0,    62,    63,    64,    65,    66,    67,     0,
       0,    68,    69,     0,     0,    71,    72,     0,    73,   488,
      74,     0,    75,    76,    77,    78,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,    25,     0,     0,     0,
       0,     0,     0,    26,    27,    28,    29,     0,     0,    30,
       0,     0,     0,     0,    31,    32,     0,     0,     0,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,   671,     0,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    49,   348,    51,
       0,    52,     0,    53,    54,    55,    56,    57,    58,   111,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,     0,     0,    68,    69,     0,     0,    71,
      72,     0,    73,     0,    74,     0,    75,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      29,     0,     0,    30,     0,     0,     0,     0,    31,    32,
       0,     0,     0,    34,    35,     0,    36,     0,    37,    38,
      39,     0,     0,     0,    40,    41,     0,     0,     0,     0,
       0,     0,   689,    42,     0,    43,    44,    45,    46,    47,
      48,    49,   348,    51,     0,    52,     0,    53,    54,    55,
      56,    57,    58,   111,    60,    61,     0,     0,     0,     0,
       0,    62,    63,    64,    65,    66,    67,     0,     0,    68,
      69,     0,     0,    71,    72,     0,    73,     0,    74,     0,
      75,    76,    77,    78,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,    25,     0,     0,     0,     0,     0,
       0,    26,    27,    28,    29,     0,     0,    30,     0,     0,
       0,     0,    31,    32,     0,     0,     0,    34,    35,     0,
      36,     0,    37,    38,    39,     0,     0,     0,    40,    41,
       0,     0,     0,     0,     0,     0,     0,    42,     0,    43,
      44,    45,    46,    47,    48,    49,   348,    51,     0,    52,
       0,    53,    54,    55,    56,    57,    58,   111,    60,    61,
       0,     0,     0,     0,     0,    62,    63,    64,    65,    66,
      67,     0,     0,    68,    69,     0,     0,    71,    72,     0,
      73,   777,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,    26,    27,    28,    29,     0,
       0,    30,     0,     0,     0,     0,    31,    32,     0,     0,
       0,    34,    35,     0,    36,     0,    37,    38,    39,     0,
       0,     0,    40,    41,     0,     0,     0,   782,     0,     0,
       0,    42,     0,    43,    44,    45,    46,    47,    48,    49,
     348,    51,     0,    52,     0,    53,    54,    55,    56,    57,
      58,   111,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,     0,     0,    68,    69,     0,
       0,    71,    72,     0,    73,     0,    74,     0,    75,    76,
      77,    78,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,    25,     0,     0,     0,     0,     0,     0,    26,
      27,    28,    29,     0,     0,    30,     0,     0,     0,     0,
      31,    32,     0,     0,     0,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,    44,    45,
      46,    47,    48,    49,   348,    51,     0,    52,     0,    53,
      54,    55,    56,    57,    58,   111,    60,    61,     0,     0,
       0,     0,     0,    62,    63,    64,    65,    66,    67,     0,
       0,    68,    69,     0,     0,    71,    72,     0,    73,   794,
      74,     0,    75,    76,    77,    78,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,    25,     0,     0,     0,
       0,     0,     0,    26,    27,    28,    29,     0,     0,    30,
       0,     0,     0,     0,    31,    32,     0,     0,     0,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,     0,   798,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    49,   348,    51,
       0,    52,     0,    53,    54,    55,    56,    57,    58,   111,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,     0,     0,    68,    69,     0,     0,    71,
      72,     0,    73,     0,    74,     0,    75,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,    26,    27,    28,
      29,     0,     0,    30,     0,     0,     0,     0,    31,    32,
       0,     0,     0,    34,    35,     0,    36,     0,    37,    38,
      39,     0,     0,     0,    40,    41,     0,     0,     0,     0,
       0,     0,     0,    42,     0,    43,    44,    45,    46,    47,
      48,    49,   348,    51,     0,    52,     0,    53,    54,    55,
      56,    57,    58,   111,    60,    61,     0,     0,     0,     0,
       0,    62,    63,    64,    65,    66,    67,     0,     0,    68,
      69,     0,     0,    71,    72,     0,    73,   809,    74,     0,
      75,    76,    77,    78,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,    25,     0,     0,     0,     0,     0,
       0,    26,    27,    28,    29,     0,     0,    30,     0,     0,
       0,     0,    31,    32,     0,     0,     0,    34,    35,     0,
      36,     0,    37,    38,    39,     0,     0,     0,    40,    41,
       0,     0,     0,     0,     0,     0,     0,    42,     0,    43,
      44,    45,    46,    47,    48,    49,   348,    51,     0,    52,
       0,    53,    54,    55,    56,    57,    58,   111,    60,    61,
       0,     0,     0,     0,     0,    62,    63,    64,    65,    66,
      67,     0,     0,    68,    69,     0,     0,    71,    72,     0,
      73,   828,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,    26,    27,    28,    29,     0,
       0,    30,     0,     0,     0,     0,    31,    32,     0,     0,
       0,    34,    35,     0,    36,     0,    37,    38,    39,     0,
       0,     0,    40,    41,     0,     0,     0,     0,     0,     0,
       0,    42,     0,    43,    44,    45,    46,    47,    48,    49,
     348,    51,     0,    52,     0,    53,    54,    55,    56,    57,
      58,   111,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,     0,     0,    68,    69,     0,
       0,    71,    72,     0,    73,   831,    74,     0,    75,    76,
      77,    78,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,    25,     0,     0,     0,     0,     0,     0,    26,
      27,    28,    29,     0,     0,    30,     0,     0,     0,     0,
      31,    32,     0,     0,     0,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,    44,    45,
      46,    47,    48,    49,   348,    51,     0,    52,     0,    53,
      54,    55,    56,    57,    58,   111,    60,    61,     0,     0,
       0,     0,     0,    62,    63,    64,    65,    66,    67,     0,
       0,    68,    69,     0,     0,    71,    72,     0,    73,     0,
      74,     0,    75,    76,    77,    78,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   549,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,    28,    29,     0,     0,    30,
       0,     0,     0,     0,     0,    32,     0,     0,     0,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    49,     0,    51,
       0,    52,     0,     0,    54,    55,    56,    57,    58,   111,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,     0,     0,    68,    69,     0,     0,    71,
      72,     0,    73,     0,    74,     0,    75,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   560,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,    28,
      29,     0,     0,    30,     0,     0,     0,     0,     0,    32,
       0,     0,     0,    34,    35,     0,    36,     0,    37,    38,
      39,     0,     0,     0,    40,    41,     0,     0,     0,     0,
       0,     0,     0,    42,     0,    43,    44,    45,    46,    47,
      48,    49,     0,    51,     0,    52,     0,     0,    54,    55,
      56,    57,    58,   111,    60,    61,     0,     0,     0,     0,
       0,    62,    63,    64,    65,    66,    67,     0,     0,    68,
      69,     0,     0,    71,    72,     0,    73,     0,    74,     0,
      75,    76,    77,    78,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   579,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,    28,    29,     0,     0,    30,     0,     0,
       0,     0,     0,    32,     0,     0,     0,    34,    35,     0,
      36,     0,    37,    38,    39,     0,     0,     0,    40,    41,
       0,     0,     0,     0,     0,     0,     0,    42,     0,    43,
      44,    45,    46,    47,    48,    49,     0,    51,     0,    52,
       0,     0,    54,    55,    56,    57,    58,   111,    60,    61,
       0,     0,     0,     0,     0,    62,    63,    64,    65,    66,
      67,     0,     0,    68,    69,     0,     0,    71,    72,     0,
      73,     0,    74,     0,    75,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   719,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,    28,    29,     0,
       0,    30,     0,     0,     0,     0,     0,    32,     0,     0,
       0,    34,    35,     0,    36,     0,    37,    38,    39,     0,
       0,     0,    40,    41,     0,     0,     0,     0,     0,     0,
       0,    42,     0,    43,    44,    45,    46,    47,    48,    49,
       0,    51,     0,    52,     0,     0,    54,    55,    56,    57,
      58,   111,    60,    61,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,     0,     0,    68,    69,     0,
       0,    71,    72,     0,    73,     0,    74,     0,    75,    76,
      77,    78,     4,     5,     6,     7,     8,     0,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   755,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,    28,    29,     0,     0,    30,     0,     0,     0,     0,
       0,    32,     0,     0,     0,    34,    35,     0,    36,     0,
      37,    38,    39,     0,     0,     0,    40,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,    44,    45,
      46,    47,    48,    49,     0,    51,     0,    52,     0,     0,
      54,    55,    56,    57,    58,   111,    60,    61,     0,     0,
       0,     0,     0,    62,    63,    64,    65,    66,    67,     0,
       0,    68,    69,     0,     0,    71,    72,     0,    73,     0,
      74,     0,    75,    76,    77,    78,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,    28,    29,     0,     0,    30,
       0,     0,     0,     0,     0,    32,     0,     0,     0,    34,
      35,     0,    36,     0,    37,    38,    39,     0,     0,     0,
      40,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,    44,    45,    46,    47,    48,    49,     0,    51,
       0,    52,     0,     0,    54,    55,    56,    57,    58,   111,
      60,    61,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,     0,     0,    68,    69,     0,     0,    71,
      72,     0,    73,     0,    74,     0,    75,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,   110,
      29,     0,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,     0,    34,     0,     0,     0,     0,    37,    38,
       0,     0,     0,     0,     0,    41,     0,     0,     0,     0,
       0,     0,     0,    42,     0,    43,     0,     0,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,    54,    55,
      56,    57,    58,   111,    60,    61,     4,     5,     6,     7,
       8,     0,    63,   112,    65,     9,     0,     0,     0,     0,
       0,     0,     0,    71,     0,     0,     0,     0,    74,     0,
     156,    76,    77,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,   110,    29,     0,     0,     0,
       0,     0,     0,     0,     0,    32,     0,     0,     0,    34,
       0,     0,     0,     0,    37,    38,     0,     0,     0,     0,
       0,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,     0,     0,    46,    47,     0,     0,     0,     0,
       0,     0,     0,     0,    54,    55,    56,    57,    58,   111,
      60,    61,     4,     5,     6,     7,     8,     0,    63,   112,
      65,     9,     0,     0,     0,     0,     0,     0,     0,    71,
       0,     0,     0,     0,    74,     0,   159,    76,    77,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,   110,    29,     0,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,    34,     0,     0,     0,     0,
      37,    38,     0,     0,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,     0,     0,
      46,    47,     0,     0,     0,     0,     0,     0,     0,     0,
      54,    55,    56,    57,    58,   111,    60,    61,     4,     5,
       6,     7,     8,     0,    63,   112,    65,     9,     0,     0,
       0,     0,     0,     0,     0,    71,     0,     0,     0,     0,
      74,     0,   183,    76,    77,    78,   286,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,   110,    29,     0,
       0,     0,     0,     0,     0,     0,     0,    32,     0,     0,
       0,    34,     0,     0,     0,     0,    37,    38,     0,     0,
       0,     0,     0,    41,     0,     0,     0,     0,     0,     0,
       0,    42,     0,    43,     0,     0,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,    54,    55,    56,    57,
      58,   111,    60,    61,     4,     5,     6,     7,     8,     0,
      63,   112,    65,     9,     0,     0,     0,     0,     0,     0,
       0,    71,     0,     0,     0,     0,    74,     0,     0,    76,
      77,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,   110,    29,     0,     0,     0,     0,     0,
       0,     0,     0,    32,     0,     0,     0,    34,     0,     0,
       0,     0,    37,    38,     0,     0,     0,     0,     0,    41,
       0,     0,     0,     0,     0,     0,     0,    42,     0,    43,
       0,     0,    46,    47,     0,     0,     0,     0,     0,     0,
       0,     0,    54,    55,    56,    57,    58,   111,    60,    61,
       4,     5,     6,     7,     8,     0,    63,   112,    65,     9,
       0,     0,     0,     0,     0,     0,     0,    71,     0,     0,
       0,     0,    74,   299,     0,    76,    77,    78,   359,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,   110,
      29,     0,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,     0,    34,     0,     0,     0,     0,    37,    38,
       0,     0,     0,     0,     0,    41,     0,     0,     0,     0,
       0,     0,     0,    42,     0,    43,     0,     0,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,    54,    55,
      56,    57,    58,   111,    60,    61,     4,     5,     6,     7,
       8,     0,    63,   112,    65,     9,     0,     0,     0,     0,
       0,     0,     0,    71,     0,     0,     0,     0,    74,   378,
       0,    76,    77,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,   110,    29,     0,     0,     0,
       0,     0,     0,     0,     0,    32,     0,     0,     0,    34,
       0,     0,     0,     0,    37,    38,     0,     0,     0,     0,
       0,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,     0,     0,    46,    47,     0,     0,     0,     0,
       0,     0,     0,     0,    54,    55,    56,    57,    58,   111,
      60,    61,     4,     5,     6,     7,     8,     0,    63,   112,
      65,     9,     0,     0,     0,     0,     0,     0,     0,    71,
       0,     0,     0,     0,    74,     0,     0,    76,    77,    78,
     402,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,   110,    29,     0,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,    34,     0,     0,     0,     0,
      37,    38,     0,     0,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,     0,     0,
      46,    47,     0,     0,     0,     0,     0,     0,     0,     0,
      54,    55,    56,    57,    58,   111,    60,    61,     4,     5,
       6,     7,     8,     0,    63,   112,    65,     9,     0,     0,
       0,     0,     0,     0,     0,    71,     0,     0,     0,     0,
      74,     0,     0,    76,    77,    78,   543,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,   110,    29,     0,
       0,     0,     0,     0,     0,     0,     0,    32,     0,     0,
       0,    34,     0,     0,     0,     0,    37,    38,     0,     0,
       0,     0,     0,    41,     0,     0,     0,     0,     0,     0,
       0,    42,     0,    43,     0,     0,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,    54,    55,    56,    57,
      58,   111,    60,    61,     4,     5,     6,     7,     8,     0,
      63,   112,    65,     9,     0,     0,     0,     0,     0,     0,
       0,    71,     0,     0,     0,     0,    74,     0,     0,    76,
      77,    78,   545,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,    25,     0,     0,     0,     0,     0,
       0,     0,     0,   110,    29,     0,     0,     0,     0,     0,
       0,     0,     0,    32,     0,     0,     0,    34,     0,     0,
       0,     0,    37,    38,     0,     0,     0,     0,     0,    41,
       0,     0,     0,     0,     0,     0,     0,    42,     0,    43,
       0,     0,    46,    47,     0,     0,     0,     0,     0,     0,
       0,     0,    54,    55,    56,    57,    58,   111,    60,    61,
       4,     5,     6,     7,     8,     0,    63,   112,    65,     9,
       0,     0,     0,     0,     0,     0,     0,    71,     0,     0,
       0,     0,    74,     0,     0,    76,    77,    78,   583,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,   110,
      29,     0,     0,     0,     0,     0,     0,     0,     0,    32,
       0,     0,     0,    34,     0,     0,     0,     0,    37,    38,
       0,     0,     0,     0,     0,    41,     0,     0,     0,     0,
       0,     0,     0,    42,     0,    43,     0,     0,    46,    47,
       0,     0,     0,     0,     0,     0,     0,     0,    54,    55,
      56,    57,    58,   111,    60,    61,     4,     5,     6,     7,
       8,     0,    63,   112,    65,     9,     0,     0,     0,     0,
       0,     0,     0,    71,     0,     0,     0,     0,    74,     0,
       0,    76,    77,    78,   668,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,   110,    29,     0,     0,     0,
       0,     0,     0,     0,     0,    32,     0,     0,     0,    34,
       0,     0,     0,     0,    37,    38,     0,     0,     0,     0,
       0,    41,     0,     0,     0,     0,     0,     0,     0,    42,
       0,    43,     0,     0,    46,    47,     0,     0,     0,     0,
       0,     0,     0,     0,    54,    55,    56,    57,    58,   111,
      60,    61,     4,     5,     6,     7,     8,     0,    63,   112,
      65,     9,     0,     0,     0,     0,     0,     0,     0,    71,
       0,     0,     0,     0,    74,     0,     0,    76,    77,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,    25,     0,     0,     0,     0,     0,     0,     0,
       0,   110,    29,     0,     0,     0,     0,     0,     0,     0,
       0,    32,     0,     0,     0,    34,     0,     0,     0,     0,
      37,    38,     0,     0,     0,     0,     0,    41,     0,     0,
       0,     0,     0,     0,     0,    42,     0,    43,     0,     0,
      46,    47,     0,     0,     0,     0,     0,     0,     0,     0,
      54,    55,    56,    57,    58,   111,    60,    61,     4,     5,
       6,     7,     8,     0,    63,   112,    65,     9,     0,     0,
       0,     0,     0,     0,     0,    71,     0,     0,     0,     0,
      74,     0,     0,    76,    77,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,   110,    29,     0,
       0,     0,     0,     0,     0,     0,     0,    32,     0,     0,
       0,    34,     0,     0,     0,     0,    37,    38,     0,     0,
       0,     0,     0,    41,     0,     0,     0,     0,     0,     0,
       0,    42,     0,    43,     0,     0,    46,    47,     0,     0,
       0,     0,     0,     0,     0,     0,    54,    55,    56,    57,
      58,   111,    60,    61,     0,     0,     0,     0,     0,     0,
      63,   112,   328,     0,     0,     0,   221,   222,   223,     0,
       0,    71,     0,     0,     0,     0,    74,     0,     0,    76,
      77,    78,   224,   730,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,   221,   222,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   224,     0,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,   221,   222,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,     0,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,     0,
       0,     0,     0,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   224,
     731,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,   221,   222,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,   247,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246,   221,   222,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   224,   290,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,     0,     0,     0,     0,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   224,   292,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,   221,   222,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   224,   338,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,     0,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   354,   224,
       0,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,     0,     0,   221,   222,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   224,   427,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,   221,   222,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   224,   461,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,     0,   221,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,   469,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
       0,     0,   221,   222,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   224,   487,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   224,
     494,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,     0,   221,   222,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   224,   622,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,     0,     0,   221,   222,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,   786,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,   221,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,   800,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
       0,   221,   222,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   481,   224,     0,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,   221,   222,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   224,   496,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   224,
     532,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,     0,   221,   222,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   224,   559,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,     0,     0,   221,   222,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   604,   224,   520,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,   221,
     222,   223,   619,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   662,   224,     0,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,     0,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246
};

static const yytype_int16 yycheck[] =
{
       2,   113,    25,   359,   510,    21,    22,   220,    25,    25,
     365,     2,   367,   462,     2,   246,     2,   321,    26,   281,
      26,     8,    31,    61,     8,     8,    31,    31,    21,    22,
       8,    61,     8,    31,     8,     8,    31,     8,   151,    61,
      25,    61,     8,    59,     8,    61,     8,     8,    39,     8,
     263,   264,     8,     8,    70,   262,    88,   128,   136,     0,
     273,   274,   133,    95,   277,   128,   128,   280,   281,    62,
       8,   278,    61,   151,    72,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   149,   151,   146,
     107,   153,   130,    45,    46,    47,     8,    49,   155,   197,
     128,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,   133,   146,   136,   132,   324,    61,   149,
      58,    59,    76,   151,    78,   146,   142,   149,   126,   149,
     128,   151,    62,   150,   155,   149,    99,   146,   136,   153,
     103,   146,   146,   149,   133,   153,    58,    59,   146,   165,
     505,   146,    81,    78,   573,   171,    74,   155,    73,    63,
     149,   177,   178,   179,    81,    90,   153,   146,    72,   153,
     153,   187,   165,   477,   623,   153,   169,   153,   171,   153,
     153,   152,   198,   199,   177,   178,   152,   543,   152,   545,
     152,   152,   128,   152,   187,    74,   152,   152,   146,   126,
      78,   128,   204,   220,   151,   198,   149,   155,   151,   136,
     128,   126,    90,   128,   152,   151,   635,    72,   637,    88,
     213,   136,   126,   246,   128,   150,    95,   583,   136,   246,
     246,   129,   136,   128,   103,   220,   591,   152,   136,   169,
     152,   136,   146,    88,    73,   151,   263,   264,   146,   128,
      95,   155,   151,   128,    99,   271,   273,   274,   133,   275,
     277,   246,   151,   280,   281,   151,   128,   283,   475,   262,
     286,   126,   150,   128,   136,   291,   151,   146,   263,   264,
     151,   136,    72,   213,   639,   278,   136,   149,   273,   274,
     521,   146,   277,   286,   149,   280,   281,   126,   804,   128,
     155,   146,    78,   128,    78,   151,   146,   136,   133,   516,
     517,   156,   668,   151,    90,   155,    90,   524,   525,   151,
     527,    67,    68,    69,    70,    71,    72,   151,   104,   345,
     104,   324,   262,   123,    72,   128,   126,   339,   128,    85,
     133,    58,    59,   359,   136,   128,   136,   609,   278,   365,
     133,   367,    88,    88,   370,    26,   146,   374,   151,    95,
      95,   283,   151,    99,    99,   155,   359,   103,   103,   291,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    88,   149,    64,    65,   402,   151,   126,    95,
     128,    21,    22,    99,   324,    25,   609,   659,   136,   145,
     128,    64,    65,   136,   150,   133,   151,    88,   146,   402,
     146,   146,   149,   146,    95,    58,    59,   155,    99,   291,
     436,   437,   155,   151,   440,   136,   136,    21,    22,    67,
      68,    69,    70,    71,    72,   146,   146,    72,   149,   455,
     146,   136,   136,   136,   155,   155,   659,    85,   464,   465,
      31,   549,   146,   151,   470,   133,   472,   473,   133,   128,
     130,   155,   560,   818,    49,   146,   457,   128,   133,   133,
     128,   464,   465,   489,   476,   128,   133,   470,   469,   472,
     473,   579,   475,   151,   500,   476,   502,   133,   476,   505,
     476,   126,    13,   128,   510,    13,   489,   130,   521,   136,
     147,   136,    88,   494,   521,   521,   499,   145,   153,    95,
     153,   146,   150,    99,   436,   437,   152,   136,   136,   153,
     155,   537,   538,   516,   517,   154,   542,   543,   107,   545,
     107,   524,   525,   455,   527,   165,   521,   151,   146,   152,
     556,   171,     8,    13,   151,   475,   152,   177,   178,   153,
     543,     8,   545,   153,    74,   151,    61,   187,   150,   152,
     146,   136,   136,   556,   436,   437,   568,   583,   198,   499,
       8,   587,    13,   151,   117,   591,   152,   568,   500,   595,
     568,   151,   568,   455,   151,   151,   516,   517,   151,   151,
     583,   151,   609,   157,   524,   525,   152,   527,    67,    68,
      69,    70,    71,    72,   620,   151,   128,   133,   624,    13,
     708,   136,    13,   152,    79,   537,   246,   157,   153,   621,
     542,   719,   136,   639,   609,   152,   628,   128,   500,   741,
       8,   624,   149,   152,   732,     8,   652,   130,   640,   103,
     136,    13,   659,   112,   153,    96,   152,   745,   664,   153,
     666,   153,   668,   283,   151,   153,   286,   755,   149,   144,
     189,   291,   760,   192,   152,   537,   764,   146,    13,   152,
     542,   152,   152,   157,   659,   668,   152,   206,   152,   208,
     130,   210,   211,    96,   675,   676,     8,    13,   679,   152,
     788,   153,   152,   152,   150,   711,   151,   149,   620,   153,
     702,    42,    43,    44,    45,    46,    47,   152,    49,   151,
     808,   146,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   822,   153,   153,   718,   136,   359,
     652,   829,   146,   112,   149,   751,   146,    13,   754,    96,
     151,    26,   664,    66,   666,    13,   153,   749,   620,   152,
      13,   767,   768,   136,   146,    13,   758,    58,    59,   153,
     149,   146,   778,   765,    13,   136,   153,    13,    79,   151,
     146,   773,   402,    74,    26,   815,   153,   793,   152,   781,
     652,   151,   784,   146,   152,   787,   345,   803,   804,   711,
     149,   505,   664,   489,   666,   786,   557,   624,   729,   676,
     802,   595,   818,   644,   601,   613,   436,   437,   713,   309,
     812,   703,   472,   171,   529,    -1,    -1,    42,    43,   473,
      -1,    -1,    -1,    -1,   826,   455,    -1,    -1,   830,   751,
      -1,    -1,   754,    -1,   464,   465,    -1,    -1,    -1,   711,
     470,    -1,   472,   473,    -1,   767,   768,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   778,    82,    -1,   489,
      -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,
     500,   793,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   751,
      -1,   803,   754,   108,    -1,    -1,   111,    -1,    -1,    21,
      22,   521,    -1,    25,    -1,   767,   768,   122,    -1,   124,
     125,   126,   127,   128,    -1,    -1,   778,   537,    -1,    -1,
     135,   136,   542,   543,    -1,   545,    -1,    -1,    -1,    -1,
      -1,   793,    -1,    -1,    -1,    -1,   556,    -1,    -1,    -1,
      -1,   803,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   583,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,     5,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    58,    59,
      23,    24,    11,    -1,    -1,    -1,    -1,    30,    -1,    -1,
     620,    -1,    35,    -1,   624,    -1,    25,    40,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    62,
      49,    -1,   652,    -1,    67,    -1,    -1,    -1,    -1,    -1,
      -1,    74,    -1,   165,   664,    -1,   666,    -1,   668,   171,
      -1,    -1,    -1,    -1,    -1,   177,   178,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   187,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   198,    -1,     9,    10,
      11,    -1,    -1,   116,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   711,    -1,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,   155,    -1,   246,    -1,    -1,    -1,    -1,    -1,
      -1,   751,    -1,   166,   754,   168,   169,    -1,    -1,    -1,
      -1,    -1,    -1,   176,    -1,    -1,    -1,   767,   768,    -1,
      -1,    -1,    -1,    -1,    -1,   188,    -1,    -1,   778,    -1,
      -1,    -1,   195,    -1,   286,    96,    -1,    -1,    -1,    -1,
     203,    -1,    -1,   793,    -1,    -1,   209,    -1,    -1,    -1,
     213,    -1,    -1,   803,    -1,    -1,    -1,    -1,   221,   222,
     223,   224,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,    -1,    -1,    -1,    -1,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
      -1,    -1,   265,   266,    -1,    -1,    -1,   359,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   278,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,   296,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   306,     9,    10,    11,    -1,    -1,    -1,
     402,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   324,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    25,    49,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,    -1,
      -1,    -1,   464,   465,    -1,   378,    -1,    -1,   470,    -1,
     472,   473,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,   489,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,   419,    49,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,   521,
      49,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,   450,    49,   452,
      -1,   543,   157,   545,    -1,   458,    -1,    -1,    -1,   462,
     463,    -1,    -1,    -1,   556,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   475,    -1,    -1,    -1,    -1,   480,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   583,    -1,    -1,    -1,    -1,   499,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   516,   517,    -1,    -1,   520,    -1,    -1,
      -1,   524,   525,    -1,   527,    -1,   529,   530,    -1,    -1,
      -1,    -1,   624,    -1,    -1,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,   565,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,   668,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,
      -1,    -1,    -1,    81,    82,    -1,   619,    85,    86,    87,
     623,    89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
     108,   109,   110,   111,   112,   113,   114,   115,   116,    -1,
     118,    -1,   120,   121,   122,   123,   124,   125,   126,   127,
     128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,
     138,   139,    -1,    -1,   142,   143,   144,    -1,   146,   147,
     683,   149,   150,   151,    -1,   153,   154,   155,   156,    -1,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,   726,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,   759,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    85,    86,    87,    -1,    89,    -1,    91,    92,
      93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    -1,   118,    -1,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,   139,    -1,    -1,   142,
     143,   144,    -1,   146,   147,    -1,   149,   150,   151,    -1,
     153,   154,   155,   156,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    85,    86,    87,    -1,
      89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,   118,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
     139,    -1,    -1,   142,   143,   144,    -1,   146,   147,    -1,
     149,    -1,   151,    -1,   153,   154,   155,   156,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,   118,    -1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,    -1,
      -1,   146,   147,    -1,   149,   150,   151,    -1,   153,   154,
     155,   156,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,    -1,
      -1,   142,   143,    -1,    -1,   146,   147,    -1,   149,   150,
     151,    -1,   153,   154,   155,   156,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    86,
      87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,
      97,    98,    -1,   100,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      -1,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,   139,    -1,    -1,   142,   143,    -1,    -1,   146,
     147,    -1,   149,    -1,   151,    -1,   153,   154,   155,   156,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,
      93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,   105,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    -1,   118,    -1,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,   139,    -1,    -1,   142,
     143,    -1,    -1,   146,   147,    -1,   149,    -1,   151,    -1,
     153,   154,   155,   156,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,
      89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,   118,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
     139,    -1,    -1,   142,   143,    -1,    -1,   146,   147,    -1,
     149,   150,   151,    -1,   153,   154,   155,   156,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,   102,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,   118,    -1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,    -1,
      -1,   146,   147,    -1,   149,    -1,   151,    -1,   153,   154,
     155,   156,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,    -1,
      -1,   142,   143,    -1,    -1,   146,   147,    -1,   149,   150,
     151,    -1,   153,   154,   155,   156,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    70,    71,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    86,
      87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,
      97,    98,    -1,    -1,   101,    -1,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      -1,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,   139,    -1,    -1,   142,   143,    -1,    -1,   146,
     147,    -1,   149,    -1,   151,    -1,   153,   154,   155,   156,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    81,    82,
      -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,
      93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    -1,   118,    -1,   120,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,   139,    -1,    -1,   142,
     143,    -1,    -1,   146,   147,    -1,   149,   150,   151,    -1,
     153,   154,   155,   156,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    70,    71,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    81,    82,    -1,    -1,    -1,    86,    87,    -1,
      89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,   118,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
     139,    -1,    -1,   142,   143,    -1,    -1,   146,   147,    -1,
     149,   150,   151,    -1,   153,   154,   155,   156,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    81,    82,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
     115,   116,    -1,   118,    -1,   120,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,    -1,
      -1,   146,   147,    -1,   149,   150,   151,    -1,   153,   154,
     155,   156,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      81,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,   115,   116,    -1,   118,    -1,   120,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,    -1,
      -1,   142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,
     151,    -1,   153,   154,   155,   156,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,    -1,   116,
      -1,   118,    -1,    -1,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,   139,    -1,    -1,   142,   143,    -1,    -1,   146,
     147,    -1,   149,    -1,   151,    -1,   153,   154,   155,   156,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      73,    -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    82,
      -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,    92,
      93,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,   108,   109,   110,   111,   112,
     113,   114,    -1,   116,    -1,   118,    -1,    -1,   121,   122,
     123,   124,   125,   126,   127,   128,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,   137,   138,   139,    -1,    -1,   142,
     143,    -1,    -1,   146,   147,    -1,   149,    -1,   151,    -1,
     153,   154,   155,   156,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    73,    -1,    -1,    76,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    -1,    -1,    86,    87,    -1,
      89,    -1,    91,    92,    93,    -1,    -1,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,   108,
     109,   110,   111,   112,   113,   114,    -1,   116,    -1,   118,
      -1,    -1,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,    -1,    -1,    -1,    -1,   134,   135,   136,   137,   138,
     139,    -1,    -1,   142,   143,    -1,    -1,   146,   147,    -1,
     149,    -1,   151,    -1,   153,   154,   155,   156,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    76,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    87,    -1,    89,    -1,    91,    92,    93,    -1,
      -1,    -1,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,   109,   110,   111,   112,   113,   114,
      -1,   116,    -1,   118,    -1,    -1,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,   134,
     135,   136,   137,   138,   139,    -1,    -1,   142,   143,    -1,
      -1,   146,   147,    -1,   149,    -1,   151,    -1,   153,   154,
     155,   156,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    73,    -1,    -1,    76,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,
      91,    92,    93,    -1,    -1,    -1,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   106,    -1,   108,   109,   110,
     111,   112,   113,   114,    -1,   116,    -1,   118,    -1,    -1,
     121,   122,   123,   124,   125,   126,   127,   128,    -1,    -1,
      -1,    -1,    -1,   134,   135,   136,   137,   138,   139,    -1,
      -1,   142,   143,    -1,    -1,   146,   147,    -1,   149,    -1,
     151,    -1,   153,   154,   155,   156,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    -1,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    86,
      87,    -1,    89,    -1,    91,    92,    93,    -1,    -1,    -1,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
      -1,   108,   109,   110,   111,   112,   113,   114,    -1,   116,
      -1,   118,    -1,    -1,   121,   122,   123,   124,   125,   126,
     127,   128,    -1,    -1,    -1,    -1,    -1,   134,   135,   136,
     137,   138,   139,    -1,    -1,   142,   143,    -1,    -1,   146,
     147,    -1,   149,    -1,   151,    -1,   153,   154,   155,   156,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     153,   154,   155,   156,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,   151,    -1,   153,   154,   155,   156,
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
     151,    -1,   153,   154,   155,   156,    31,    -1,    -1,    -1,
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
      -1,    -1,   151,   152,    -1,   154,   155,   156,    31,    -1,
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
      -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,   151,    26,
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
     151,    -1,    -1,   154,   155,   156,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    73,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    -1,    -1,    -1,    -1,    91,    92,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    -1,   108,    -1,    -1,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,
     125,   126,   127,   128,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,    -1,    -1,    -1,     9,    10,    11,    -1,
      -1,   146,    -1,    -1,    -1,    -1,   151,    -1,    -1,   154,
     155,   156,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     153,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   153,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   153,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   153,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   153,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
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
      -1,    -1,    -1,    -1,    -1,    25,   152,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   152,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     152,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   152,    27,    28,    29,    30,    31,    32,    33,
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
      -1,    -1,    -1,    -1,    -1,    -1,   150,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   150,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     150,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   150,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   150,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   150,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      57,    58,    59,    60,    62,    63,    70,    71,    72,    73,
      76,    81,    82,    85,    86,    87,    89,    91,    92,    93,
      97,    98,   106,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   118,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   134,   135,   136,   137,   138,   139,   142,   143,
     144,   146,   147,   149,   151,   153,   154,   155,   156,   161,
     162,   167,   170,   171,   177,   178,   180,   182,   185,   187,
     226,   227,   230,   231,   240,   243,   247,   248,   250,   251,
     255,   256,   257,   258,   259,   260,   261,   266,   274,   276,
      72,   126,   136,   227,   247,   247,   151,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   126,   128,   161,   231,   250,   251,   257,   250,   247,
     247,   126,   128,   161,   231,   233,   234,   257,   259,   260,
     266,    81,    81,   146,   212,   151,   153,   247,   136,   153,
     247,   151,   170,   223,   247,   151,   151,   237,   151,   151,
     146,   155,   210,   211,   136,   151,   151,   151,   151,   128,
     149,   161,   161,   153,   226,   247,   251,    88,    95,    99,
     103,   146,   271,   272,    26,   151,   247,   149,   151,   128,
     161,   165,   166,   151,   168,   247,    99,   238,   271,   149,
      99,   271,   128,   151,     8,   153,   136,   136,    31,   179,
     133,     9,    10,    11,    25,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    49,   153,    58,    59,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   151,   133,   130,    61,   149,   155,   260,   179,
     247,   128,   161,   133,   133,   128,   161,   133,   151,   239,
     133,   130,   260,    13,     8,   153,    31,   247,   269,   270,
     153,    13,   153,   136,   196,   147,     8,   153,   251,   152,
     247,   224,   225,   247,   226,   251,   149,   248,   251,     8,
     153,   153,   152,   247,   251,   275,   123,   251,   267,   268,
     161,   164,   149,   153,   151,   153,   153,   251,   137,   247,
     103,   272,    61,   130,    99,   103,   272,   247,   153,   168,
     175,   176,   251,   161,    74,     8,   153,   247,   115,   150,
     169,   170,   177,   178,   152,   154,   247,   156,   136,    31,
     208,   209,   226,   251,   136,   107,   186,   107,   188,   136,
     151,   136,   255,   260,   266,   247,   247,   247,    26,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   247,
     247,   233,    31,   247,   247,   247,   247,   247,   247,   247,
     247,   247,   247,   247,   247,   208,   136,   255,   136,   149,
     255,   263,   264,   265,   247,   262,   247,   152,   161,   136,
     136,   161,   255,   208,   255,   263,    42,    43,    73,   126,
     128,   135,   161,   231,   240,   241,   242,   146,   249,   251,
      96,   152,     8,   245,   241,    13,     8,   152,   151,   247,
     152,   152,   153,     8,    74,    74,   247,   211,   153,   152,
       8,   152,   151,     8,   152,   151,   160,   163,   208,   150,
      61,   150,   129,   136,   146,   273,   136,   152,   150,     8,
     152,    74,   136,   166,   152,   151,   150,   249,   152,     8,
      13,   126,   128,   161,   232,   117,   189,   190,   232,   184,
     151,    73,   205,   206,   207,   232,   151,   151,   260,   247,
      26,    63,   251,   152,   151,   151,   247,   151,   254,    61,
     149,   157,   150,   152,   235,   241,   241,   151,   128,   161,
      99,   133,    13,    31,   247,    31,   247,   241,   136,    26,
     170,   195,   247,   224,   247,   251,    31,   192,   251,   150,
      26,   170,   251,   267,   268,    13,   208,   150,   160,   152,
     247,   157,    26,   149,   197,    79,   176,   153,   136,    26,
     170,   200,   152,    31,   226,   251,   241,   128,   161,   190,
     183,     8,   149,   205,   152,     8,    31,   146,   208,   208,
     247,   233,   208,   208,   150,   208,   252,   262,   247,   130,
     236,   241,   244,   246,   161,   136,   241,   249,   249,    96,
      13,   168,   152,   153,    96,   191,   251,   191,   168,   201,
     152,   247,   152,   150,   157,   153,   198,   153,   198,   151,
     168,   153,   249,   161,   149,   232,   213,   152,   144,   228,
     207,   146,    13,   152,   152,   239,   152,   152,   152,   130,
     253,   157,   150,   263,    96,   152,     8,   245,    31,   247,
     241,   100,   153,   224,   192,   152,   152,   202,    64,    65,
     203,   150,   198,    78,    90,   104,   198,   150,   232,   105,
     213,    67,    68,    69,    70,    71,    72,    85,   145,   150,
     214,   217,   218,   219,   220,   222,   181,   151,   149,    31,
     146,    13,   241,   263,   241,   241,   249,   153,   152,    26,
     170,   194,   194,    64,    65,   204,   151,   170,   104,   247,
      26,   153,   199,   153,   150,   146,   153,   150,   136,   146,
     221,   227,   220,     8,   153,   149,    31,   146,   229,   168,
     146,    13,   241,   254,    96,    26,   170,   193,   168,   151,
      26,    66,   247,   153,   199,   168,   152,    13,    13,     8,
     153,   179,   136,   168,   146,     8,   152,   150,    13,   241,
     241,   168,   102,   247,   168,   153,   152,   168,   149,   241,
     241,   146,   136,    13,   150,    31,   146,   241,   101,   153,
     152,   170,   168,    13,   151,   241,   146,   153,    26,   150,
     241,   205,   168,    79,   172,   173,   174,   152,   151,   174,
     215,   232,   149,   153,   216,   146,   168,   152,   150,   149,
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
#line 352 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { observers.MakeAst((yyvsp[(1) - (1)].statementList)); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 356 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList)->PushAll((yyvsp[(2) - (2)].statementList)); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 357 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 361 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.qualifiedName), pelet::QualifiedNameClass, (yyvsp[(1) - (1)].lexeme)); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 362 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (3)].qualifiedName)->AddName((yyvsp[(3) - (3)].lexeme)); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 366 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 367 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 368 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 369 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 370 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::NamespaceDeclarationClass* decl;
												  AST_INIT_ARGS(decl, pelet::NamespaceDeclarationClass, (yyvsp[(2) - (3)].qualifiedName), (yyvsp[(1) - (3)].token));  
												  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, decl);
												  observers.SetCurrentNamespace((yyvsp[(2) - (3)].qualifiedName)); 
												;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 375 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { observers.SetCurrentNamespace((yyvsp[(2) - (3)].qualifiedName)); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 376 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::NamespaceDeclarationClass* decl;
												  AST_INIT_ARGS(decl, pelet::NamespaceDeclarationClass, (yyvsp[(2) - (6)].qualifiedName), (yyvsp[(1) - (6)].token));
												  (yyval.statementList) = (yyvsp[(5) - (6)].statementList)->PushFront(decl);
												;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 380 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { observers.SetCurrentNamespace(NULL); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 381 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { 
												  pelet::NamespaceDeclarationClass* decl;
												  AST_INIT_ARGS(decl, pelet::NamespaceDeclarationClass, (yyvsp[(1) - (5)].token));
												  (yyval.statementList) = (yyvsp[(4) - (5)].statementList)->PushFront(decl);
												;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 386 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = pelet::NamespaceUseClass::SetStartingPos((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].token)); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 387 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (2)].statementList)); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 392 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].namespaceUse)); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 393 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].namespaceUse)); ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 397 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(1) - (1)].qualifiedName), NULL, false); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 400 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].lexeme), false); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 403 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(2) - (2)].qualifiedName), NULL, true); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 406 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.namespaceUse), pelet::NamespaceUseClass, (yyvsp[(2) - (4)].qualifiedName), (yyvsp[(4) - (4)].lexeme), true); 
																  observers.NamespaceUseAddScope((yyval.namespaceUse));
																;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 412 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::ConstantStatementClass* constStmt;
																  AST_INIT_ARGS(constStmt, pelet::ConstantStatementClass, 
																	(yyvsp[(3) - (5)].lexeme), analyzer.GetLineNumber(), 
																	observers.GetCurrentNamespace());
																  (yyval.statementList) = (yyvsp[(1) - (5)].statementList)->Push(constStmt);
																;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 418 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::ConstantStatementClass* constStmt;
																  AST_INIT_ARGS(constStmt, pelet::ConstantStatementClass, 
																    (yyvsp[(2) - (4)].lexeme), analyzer.GetLineNumber(),
																    observers.GetCurrentNamespace());
																  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, constStmt);																	
																;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 427 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList)->PushAll((yyvsp[(2) - (2)].statementList)); ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 428 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 435 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 439 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 440 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 444 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 445 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(5) - (7)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(6) - (7)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(7) - (7)].statementList));
																									;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 449 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(6) - (10)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(7) - (10)].statementList));
																									  (yyval.statementList)->PushAll((yyvsp[(8) - (10)].statementList));
																									;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 453 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(5) - (5)].statementList); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 454 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(2) - (7)].statementList); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 463 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(9) - (9)].statementList); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 464 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(5) - (5)].statementList); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 465 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 466 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 467 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 468 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 469 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 470 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 471 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 472 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 473 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 474 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 475 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 476 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (2)].statement)); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 477 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 480 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(8) - (8)].statementList); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 483 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(8) - (8)].statementList); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 484 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 485 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 489 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_PUSH_ALL_MERGE((yyval.statementList), (yyvsp[(3) - (13)].statementList), (yyvsp[(11) - (13)].statementList));
																									  AST_PUSH_ALL_MERGE((yyval.statementList), (yyval.statementList), (yyvsp[(13) - (13)].statementList));
																									;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 492 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(2) - (3)].statement)); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 493 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 497 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 498 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 502 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 503 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_PUSH_ALL_MERGE((yyval.statementList), (yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 508 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) =  (yyvsp[(7) - (8)].statementList); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 512 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 513 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 517 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 529 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.isReference) = false; ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 530 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.isReference) = true; ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 535 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { observers.SetCurrentClassName(NULL); observers.SetCurrentMemberName((yyvsp[(3) - (6)].lexeme)); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 536 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
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
#line 548 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (4)].lexeme)); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 549 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::ClassSymbolClass* clazz;
											  AST_INIT(clazz, pelet::ClassSymbolClass);
											  clazz->SetAll((yyvsp[(2) - (8)].lexeme), (yyvsp[(1) - (8)].classSymbol), (yyvsp[(3) - (8)].classSymbol), (yyvsp[(4) - (8)].classSymbol), (yyvsp[(8) - (8)].token), observers.GetCurrentNamespace());
											  (yyval.statementList) = (yyvsp[(7) - (8)].statementList)->PushFront(clazz);											  
											  observers.SetCurrentClassName(NULL);
											;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 556 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { observers.SetCurrentClassName((yyvsp[(2) - (3)].lexeme)); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 557 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::ClassSymbolClass* clazz;
											  AST_INIT(clazz, pelet::ClassSymbolClass);
											  clazz->SetAll((yyvsp[(2) - (7)].lexeme), (yyvsp[(1) - (7)].classSymbol), NULL, (yyvsp[(3) - (7)].classSymbol), (yyvsp[(7) - (7)].token), observers.GetCurrentNamespace());
											  (yyval.statementList) = (yyvsp[(6) - (7)].statementList)->PushFront(clazz);
											  observers.SetCurrentClassName(NULL);
											;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 566 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (1)].lexeme), false, false, false, false); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 567 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (2)].lexeme), true, false, false, false); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 568 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (2)].lexeme), false, true, false, false); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 572 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.classSymbol) = 0; ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 574 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass);
										  (yyval.classSymbol)->SetExtends((yyvsp[(2) - (2)].qualifiedName), observers.GetScope(), observers.GetCurrentNamespace()); 
										;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 580 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags((yyvsp[(1) - (1)].lexeme), false, false, true, false); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 584 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.classSymbol) = 0; ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 586 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.classSymbol) = (yyvsp[(2) - (2)].classSymbol); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 590 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); (yyval.classSymbol)->SetFlags(NULL, false, false, false, false); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 592 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.classSymbol) = (yyvsp[(2) - (2)].classSymbol); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 596 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.classSymbol), pelet::ClassSymbolClass); 
															  (yyval.classSymbol)->AddToImplements((yyvsp[(1) - (1)].qualifiedName), observers.GetScope(), observers.GetCurrentNamespace()); 
															;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 599 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.classSymbol) = (yyvsp[(1) - (3)].classSymbol)->AddToImplements((yyvsp[(3) - (3)].qualifiedName), observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 603 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 604 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 608 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 609 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = (yyvsp[(2) - (2)].statement); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 613 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 614 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 618 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 619 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 623 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 624 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 628 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 629 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 633 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(2) - (3)].statementList); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 634 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(3) - (4)].statementList); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 635 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 636 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(3) - (5)].statementList); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 640 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 641 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(5) - (5)].statementList); ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 642 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(4) - (4)].statementList); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 646 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 647 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 651 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 652 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(2) - (4)].statementList); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 656 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 657 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass);
															  (yyval.statementList)->PushAll((yyvsp[(1) - (6)].statementList))->Push((yyvsp[(4) - (6)].statement))->PushAll((yyvsp[(6) - (6)].statementList));
															;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 663 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 664 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass);
																				  (yyval.statementList)->PushAll((yyvsp[(1) - (7)].statementList))->Push((yyvsp[(4) - (7)].statement))->PushAll((yyvsp[(7) - (7)].statementList));
																			  	;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 670 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 671 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(2) - (2)].statementList); ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 675 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 676 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(3) - (3)].statementList); ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 680 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.parametersList) = (yyvsp[(1) - (1)].parametersList); ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 681 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.parametersList) = 0; ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 685 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (2)].qualifiedName), (yyvsp[(2) - (2)].lexeme), false, observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 686 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (3)].qualifiedName), (yyvsp[(3) - (3)].lexeme), true, observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 687 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (5)].qualifiedName), (yyvsp[(3) - (5)].lexeme), true, observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 688 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.parametersList), pelet::ParametersListClass, (yyvsp[(1) - (4)].qualifiedName), (yyvsp[(2) - (4)].lexeme), false, observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 689 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.parametersList) = (yyvsp[(1) - (4)].parametersList)->Append((yyvsp[(3) - (4)].qualifiedName), (yyvsp[(4) - (4)].lexeme), false, observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 690 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.parametersList) = (yyvsp[(1) - (5)].parametersList)->Append((yyvsp[(3) - (5)].qualifiedName), (yyvsp[(5) - (5)].lexeme), true, observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 691 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.parametersList) = (yyvsp[(1) - (7)].parametersList)->Append((yyvsp[(3) - (7)].qualifiedName), (yyvsp[(5) - (7)].lexeme), true, observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 692 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.parametersList) = (yyvsp[(1) - (6)].parametersList)->Append((yyvsp[(3) - (6)].qualifiedName), (yyvsp[(4) - (6)].lexeme), false, observers.GetScope(), observers.GetCurrentNamespace()); ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 696 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.qualifiedName) = 0; ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 697 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 698 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.qualifiedName), pelet::QualifiedNameClass, UNICODE_STRING_SIMPLE("array")); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 702 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 703 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) =  0; ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 707 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement)); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 708 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement)); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 709 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(2) - (2)].statement)); ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 710 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)); ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 711 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 712 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (4)].statementList)->Push((yyvsp[(4) - (4)].statement)); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 721 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 722 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 723 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 727 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 728 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 729 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 730 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 734 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_PUSH_ALL_MERGE((yyval.statementList), (yyvsp[(1) - (2)].statementList), (yyvsp[(2) - (2)].statementList)); ;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 735 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.statementList), pelet::StatementListClass); ;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 739 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = pelet::ClassMemberSymbolClass::MakeVariables((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].classMemberSymbol)); ;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 740 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (2)].statementList); ;}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 742 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { observers.SetCurrentMemberName((yyvsp[(4) - (7)].lexeme)); ;}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 743 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
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
#line 753 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->MakeBody(0, (yyvsp[(1) - (1)].token), (yyvsp[(1) - (1)].token)); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 754 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->MakeBody((yyvsp[(2) - (3)].statementList), (yyvsp[(1) - (3)].token), (yyvsp[(3) - (3)].token)); ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 758 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 759 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass);
										  (yyval.classMemberSymbol)->MakeAsPublicVariable((yyvsp[(1) - (1)].lexeme)); 
										;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 765 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->Make(NULL); ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 766 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (1)].classMemberSymbol); ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 770 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT((yyval.classMemberSymbol), pelet::ClassMemberSymbolClass); (yyval.classMemberSymbol)->Make((yyvsp[(1) - (1)].lexeme)); ;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 771 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.classMemberSymbol) = (yyvsp[(1) - (2)].classMemberSymbol)->SetModifier((yyvsp[(2) - (2)].lexeme)); ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 778 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.lexeme) = (yyvsp[(1) - (1)].lexeme); ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 784 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(3) - (3)].lexeme), (yyvsp[(3) - (3)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetCurrentNamespace());
																		  (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push(memberSymbol);
																		;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 790 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(3) - (5)].lexeme), (yyvsp[(3) - (5)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetCurrentNamespace());
																		  (yyval.statementList) = (yyvsp[(1) - (5)].statementList)->Push(memberSymbol);
																		;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 796 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(1) - (1)].lexeme), (yyvsp[(1) - (1)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetCurrentNamespace());
																		  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, memberSymbol);
																		;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 802 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
																		  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
																		  memberSymbol->MakeVariable((yyvsp[(1) - (3)].lexeme), (yyvsp[(1) - (3)].lexeme), false, analyzer.GetLineNumber(),
																			observers.GetScope(), observers.GetCurrentNamespace());
																		  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, memberSymbol);
																		;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 812 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
											  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
											  memberSymbol->MakeVariable((yyvsp[(3) - (5)].lexeme), (yyvsp[(3) - (5)].lexeme), true, analyzer.GetLineNumber(),
												observers.GetScope(), observers.GetCurrentNamespace());
											  (yyval.statementList) = (yyvsp[(1) - (5)].statementList)->Push(memberSymbol);
											;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 818 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { pelet::ClassMemberSymbolClass* memberSymbol;
											  AST_INIT(memberSymbol, pelet::ClassMemberSymbolClass);
											  memberSymbol->MakeVariable((yyvsp[(2) - (4)].lexeme), (yyvsp[(1) - (4)].lexeme), true, analyzer.GetLineNumber(),
												observers.GetScope(), observers.GetCurrentNamespace());
											  AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, memberSymbol);
											;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 827 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)); ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 828 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement)); ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 832 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 833 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (1)].statementList); ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 837 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = (yyvsp[(1) - (3)].statementList)->Push((yyvsp[(3) - (3)].statement)); ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 838 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { AST_INIT_ARGS((yyval.statementList), pelet::StatementListClass, (yyvsp[(1) - (1)].statement)); ;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 842 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = (yyvsp[(6) - (6)].statement); ;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 843 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = (yyvsp[(3) - (3)].statement); ;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 844 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 845 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 846 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 847 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 848 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 849 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 850 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 851 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 852 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 853 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 854 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 855 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 856 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 857 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 858 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 859 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 860 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 861 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 862 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 863 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 864 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 865 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 866 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 867 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 868 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 869 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 870 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 871 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 872 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 873 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 874 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 875 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 876 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 877 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 878 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 879 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 880 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 881 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 882 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 883 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 884 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 885 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 886 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 887 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 888 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 889 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 890 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 891 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 892 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 895 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 897 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 898 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 899 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 900 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 901 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 902 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 903 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 904 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 905 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 906 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 907 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 908 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 909 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 910 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 911 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 913 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 921 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 922 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 926 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 927 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 928 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 929 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 934 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = observers.VariableMakeFunctionCall((yyvsp[(1) - (4)].qualifiedName), (yyvsp[(3) - (4)].statementList), analyzer.GetLineNumber()); ;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 937 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 939 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = observers.VariableMakeFunctionCallFromAbsoluteNamespace((yyvsp[(2) - (5)].qualifiedName), (yyvsp[(4) - (5)].statementList), analyzer.GetLineNumber()); ;}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 941 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 943 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 945 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 947 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 949 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 953 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.qualifiedName) = 0; ;}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 954 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 955 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.qualifiedName) = (yyvsp[(3) - (3)].qualifiedName)->MakeFromCurrentNamespace(&observers.GetCurrentNamespace()); ;}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 956 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.qualifiedName) = (yyvsp[(2) - (2)].qualifiedName)->MakeAbsolute(); ;}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 960 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 961 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.qualifiedName) = (yyvsp[(3) - (3)].qualifiedName)->MakeFromCurrentNamespace(&observers.GetCurrentNamespace()); ;}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 962 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.qualifiedName) = (yyvsp[(2) - (2)].qualifiedName)->MakeAbsolute(); ;}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 966 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 967 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.qualifiedName) = (yyvsp[(1) - (1)].qualifiedName); ;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 972 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.qualifiedName) = 0; ;}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 973 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.qualifiedName) = 0; ;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 978 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 979 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 983 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 987 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 988 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 989 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 993 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 994 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 995 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1000 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 1001 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 1006 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1007 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1008 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 1009 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1010 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 1011 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1012 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1013 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1014 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 1015 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1016 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1017 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 1023 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 1024 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1025 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 1026 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1027 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 1028 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 1029 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 1033 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 1037 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 1038 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1039 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1040 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 1041 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1042 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 1043 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 1044 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 1049 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1050 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1054 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.isComma) = 0; ;}
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 1055 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.isComma) = 0; ;}
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 1066 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 1067 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 1088 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 1089 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1093 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1094 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1099 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 1103 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 1104 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 1113 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 1114 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 1123 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = 0; ;}
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 1124 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statement) = (yyvsp[(1) - (1)].statement); ;}
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 1141 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 1142 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 1146 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 1147 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 1163 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 1164 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 1168 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 1169 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 1179 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 1180 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 1181 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 1185 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 1186 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 1190 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 1191 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 1192 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 1193 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 1194 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 1195 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 1196 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 1197 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.statementList) = 0; ;}
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 1201 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 1202 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 1203 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 1204 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 1208 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 1209 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 1210 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 1211 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 1212 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 1213 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 1217 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 1218 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 1219 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 1223 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 1224 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 1225 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 1226 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 1227 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 1228 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 1229 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 1233 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 1234 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 1238 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 1239 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"
    { (yyval.unused) = 0; ;}
    break;



/* Line 1455 of yacc.c  */
#line 6336 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.cpp"
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
#line 1242 "C:\\Users\\rperpuly\\Documents\\mvc-editor\\lib\\pelet\\src\\Php53ResourceParserImpl.y"


