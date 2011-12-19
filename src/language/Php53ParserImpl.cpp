
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
#define yyparse         php53parse
#define yylex           php53lex
#define yyerror         php53error
#define yylval          php53lval
#define yychar          php53char
#define yydebug         php53debug
#define yynerrs         php53nerrs


/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "src/language/Php53ParserImpl.y"

	
/**
 * This software is released under the terms of the MIT License
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to th	`e following conditions:
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
 * @copyright  2009-2011 Roberto Perpuly
 * @license    http://www.opensource.org/licenses/mit-license.php The MIT License
 */	
#include <language/UCharBufferedFileClass.h>
#include <language/LexicalAnalyzerClass.h>
#include <language/ParserObserverClass.h>
#include <unicode/unistr.h>
#include <string>

#if defined(_MSC_VER)
	#pragma warning(disable:4065) // Bison generates a switch statement without a case
#endif


#define YYSTYPE mvceditor::SemanticValueClass
 
int php53lex(YYSTYPE* value, mvceditor::LexicalAnalyzerClass &analyzer);
void php53error(mvceditor::LexicalAnalyzerClass &analyzer, mvceditor::ObserverQuadClass& observers, std::string msg);



/* Line 189 of yacc.c  */
#line 126 "src/language/Php53ParserImpl.cpp"

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
     T_END_OF_FILE = 0,
     T_REQUIRE_ONCE = 258,
     T_REQUIRE = 259,
     T_EVAL = 260,
     T_INCLUDE_ONCE = 261,
     T_INCLUDE = 262,
     T_LOGICAL_OR = 263,
     T_LOGICAL_XOR = 264,
     T_LOGICAL_AND = 265,
     T_PRINT = 266,
     T_SR_EQUAL = 267,
     T_SL_EQUAL = 268,
     T_XOR_EQUAL = 269,
     T_OR_EQUAL = 270,
     T_AND_EQUAL = 271,
     T_MOD_EQUAL = 272,
     T_CONCAT_EQUAL = 273,
     T_DIV_EQUAL = 274,
     T_MUL_EQUAL = 275,
     T_MINUS_EQUAL = 276,
     T_PLUS_EQUAL = 277,
     T_BOOLEAN_OR = 278,
     T_BOOLEAN_AND = 279,
     T_IS_NOT_IDENTICAL = 280,
     T_IS_IDENTICAL = 281,
     T_IS_NOT_EQUAL = 282,
     T_IS_EQUAL = 283,
     T_IS_GREATER_OR_EQUAL = 284,
     T_IS_SMALLER_OR_EQUAL = 285,
     T_SR = 286,
     T_SL = 287,
     T_INSTANCEOF = 288,
     T_UNSET_CAST = 289,
     T_BOOL_CAST = 290,
     T_OBJECT_CAST = 291,
     T_ARRAY_CAST = 292,
     T_STRING_CAST = 293,
     T_DOUBLE_CAST = 294,
     T_INT_CAST = 295,
     T_DEC = 296,
     T_INC = 297,
     T_CLONE = 298,
     T_NEW = 299,
     T_EXIT = 300,
     T_IF = 301,
     T_ELSEIF = 302,
     T_ELSE = 303,
     T_ENDIF = 304,
     T_LNUMBER = 305,
     T_DNUMBER = 306,
     T_STRING = 307,
     T_STRING_VARNAME = 308,
     T_VARIABLE = 309,
     T_NUM_STRING = 310,
     T_INLINE_HTML = 311,
     T_CHARACTER = 312,
     T_BAD_CHARACTER = 313,
     T_ENCAPSED_AND_WHITESPACE = 314,
     T_CONSTANT_ENCAPSED_STRING = 315,
     T_ECHO = 316,
     T_DO = 317,
     T_WHILE = 318,
     T_ENDWHILE = 319,
     T_FOR = 320,
     T_ENDFOR = 321,
     T_FOREACH = 322,
     T_ENDFOREACH = 323,
     T_DECLARE = 324,
     T_ENDDECLARE = 325,
     T_AS = 326,
     T_SWITCH = 327,
     T_ENDSWITCH = 328,
     T_CASE = 329,
     T_DEFAULT = 330,
     T_BREAK = 331,
     T_CONTINUE = 332,
     T_GOTO = 333,
     T_FUNCTION = 334,
     T_CONST = 335,
     T_RETURN = 336,
     T_TRY = 337,
     T_CATCH = 338,
     T_THROW = 339,
     T_USE = 340,
     T_GLOBAL = 341,
     T_PUBLIC = 342,
     T_PROTECTED = 343,
     T_PRIVATE = 344,
     T_FINAL = 345,
     T_ABSTRACT = 346,
     T_STATIC = 347,
     T_VAR = 348,
     T_UNSET = 349,
     T_ISSET = 350,
     T_EMPTY = 351,
     T_HALT_COMPILER = 352,
     T_CLASS = 353,
     T_INTERFACE = 354,
     T_EXTENDS = 355,
     T_IMPLEMENTS = 356,
     T_OBJECT_OPERATOR = 357,
     T_DOUBLE_ARROW = 358,
     T_LIST = 359,
     T_ARRAY = 360,
     T_CLASS_C = 361,
     T_METHOD_C = 362,
     T_FUNC_C = 363,
     T_LINE = 364,
     T_FILE = 365,
     T_COMMENT = 366,
     T_DOC_COMMENT = 367,
     T_OPEN_TAG = 368,
     T_OPEN_TAG_WITH_ECHO = 369,
     T_CLOSE_TAG = 370,
     T_WHITESPACE = 371,
     T_START_HEREDOC = 372,
     T_END_HEREDOC = 373,
     T_DOLLAR_OPEN_CURLY_BRACES = 374,
     T_CURLY_OPEN = 375,
     T_PAAMAYIM_NEKUDOTAYIM = 376,
     T_NAMESPACE = 377,
     T_NS_C = 378,
     T_DIR = 379,
     T_NS_SEPARATOR = 380,
     T_ERROR_UNTERMINATED_COMMENT = 381,
     T_ERROR_UNTERMINATED_STRING = 382,
     T_ERROR_UNTERMINATED_BACKTICK = 383
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 297 "src/language/Php53ParserImpl.cpp"

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
#define YYLAST   5379

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  157
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  188
/* YYNRULES -- Number of rules.  */
#define YYNRULES  471
/* YYNRULES -- Number of states.  */
#define YYNSTATES  901

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   383

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,   155,     2,   153,    47,    31,     2,
     148,   149,    45,    42,     8,    43,    44,    46,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    26,   150,
      36,    13,    37,    25,    51,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    61,     2,   156,    30,     2,   154,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   151,    29,   152,    50,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     9,    10,    11,    12,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    27,    28,
      32,    33,    34,    35,    38,    39,    40,    41,    49,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,    10,    11,    13,    17,    19,
      21,    23,    28,    32,    33,    40,    41,    47,    51,    54,
      58,    60,    62,    66,    69,    74,    80,    85,    86,    90,
      91,    93,    95,    97,   102,   104,   107,   111,   112,   113,
     123,   124,   125,   138,   139,   140,   148,   149,   150,   160,
     161,   162,   163,   176,   177,   184,   187,   191,   194,   198,
     201,   205,   209,   213,   217,   221,   223,   226,   232,   233,
     234,   245,   246,   247,   258,   259,   266,   268,   269,   270,
     271,   272,   273,   292,   296,   300,   302,   303,   305,   308,
     309,   310,   321,   323,   327,   329,   331,   333,   334,   336,
     337,   338,   350,   351,   352,   353,   364,   365,   366,   375,
     377,   380,   383,   384,   385,   389,   391,   392,   393,   397,
     398,   399,   403,   405,   406,   411,   412,   415,   417,   420,
     422,   427,   429,   434,   436,   441,   445,   451,   455,   460,
     465,   471,   472,   473,   480,   481,   487,   489,   491,   493,
     498,   499,   500,   508,   509,   510,   519,   520,   523,   524,
     528,   530,   531,   534,   538,   544,   549,   554,   560,   568,
     575,   576,   578,   580,   582,   583,   585,   587,   590,   594,
     598,   603,   607,   609,   611,   614,   619,   623,   629,   631,
     635,   638,   639,   643,   646,   647,   648,   649,   661,   663,
     667,   669,   671,   672,   674,   676,   679,   681,   683,   685,
     687,   689,   691,   695,   701,   703,   707,   713,   718,   722,
     724,   725,   727,   728,   733,   735,   736,   744,   748,   753,
     754,   762,   763,   768,   771,   775,   779,   783,   787,   791,
     795,   799,   803,   807,   811,   815,   818,   821,   824,   827,
     828,   833,   834,   839,   840,   845,   846,   851,   855,   859,
     863,   867,   871,   875,   879,   883,   887,   891,   895,   899,
     902,   905,   908,   911,   915,   919,   923,   927,   931,   935,
     939,   943,   947,   951,   952,   953,   961,   962,   968,   970,
     973,   976,   979,   982,   985,   988,   991,   994,   995,   999,
    1001,  1006,  1010,  1013,  1014,  1025,  1027,  1028,  1033,  1037,
    1042,  1044,  1047,  1048,  1054,  1055,  1063,  1064,  1071,  1072,
    1080,  1081,  1089,  1090,  1098,  1099,  1107,  1108,  1114,  1116,
    1118,  1122,  1125,  1127,  1131,  1134,  1136,  1138,  1139,  1140,
    1147,  1149,  1152,  1153,  1156,  1157,  1160,  1164,  1165,  1167,
    1169,  1170,  1174,  1176,  1178,  1180,  1182,  1184,  1186,  1188,
    1190,  1192,  1194,  1198,  1201,  1203,  1205,  1209,  1212,  1215,
    1218,  1223,  1225,  1229,  1231,  1233,  1235,  1239,  1242,  1244,
    1248,  1252,  1253,  1256,  1257,  1259,  1265,  1269,  1273,  1275,
    1277,  1279,  1281,  1283,  1285,  1286,  1293,  1295,  1298,  1299,
    1303,  1304,  1309,  1310,  1312,  1315,  1319,  1323,  1325,  1327,
    1329,  1331,  1334,  1336,  1341,  1346,  1348,  1350,  1355,  1356,
    1358,  1360,  1361,  1364,  1369,  1374,  1376,  1378,  1382,  1384,
    1387,  1391,  1393,  1395,  1396,  1402,  1403,  1404,  1407,  1413,
    1417,  1421,  1423,  1430,  1435,  1440,  1443,  1446,  1449,  1451,
    1454,  1456,  1457,  1463,  1467,  1471,  1478,  1482,  1484,  1486,
    1488,  1493,  1498,  1501,  1504,  1509,  1512,  1515,  1517,  1518,
    1523,  1527
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     158,     0,    -1,   159,    -1,    -1,   159,   160,   162,    -1,
      -1,    71,    -1,   161,   144,    71,    -1,   171,    -1,   202,
      -1,   203,    -1,   116,   148,   149,   150,    -1,   141,   161,
     150,    -1,    -1,   141,   161,   151,   163,   159,   152,    -1,
      -1,   141,   151,   164,   159,   152,    -1,   104,   165,   150,
      -1,   167,   150,    -1,   165,     8,   166,    -1,   166,    -1,
     161,    -1,   161,    90,    71,    -1,   144,   161,    -1,   144,
     161,    90,    71,    -1,   167,     8,    71,    13,   303,    -1,
      99,    71,    13,   303,    -1,    -1,   168,   169,   170,    -1,
      -1,   171,    -1,   202,    -1,   203,    -1,   116,   148,   149,
     150,    -1,   172,    -1,    71,    26,    -1,   151,   168,   152,
      -1,    -1,    -1,    65,   148,   309,   149,   173,   171,   174,
     236,   240,    -1,    -1,    -1,    65,   148,   309,   149,    26,
     175,   168,   176,   238,   241,    68,   150,    -1,    -1,    -1,
      82,   148,   177,   309,   149,   178,   235,    -1,    -1,    -1,
      81,   179,   171,    82,   148,   180,   309,   149,   150,    -1,
      -1,    -1,    -1,    84,   148,   263,   150,   181,   263,   150,
     182,   263,   149,   183,   226,    -1,    -1,    91,   148,   309,
     149,   184,   230,    -1,    95,   150,    -1,    95,   309,   150,
      -1,    96,   150,    -1,    96,   309,   150,    -1,   100,   150,
      -1,   100,   266,   150,    -1,   100,   313,   150,    -1,   105,
     247,   150,    -1,   111,   249,   150,    -1,    80,   262,   150,
      -1,    75,    -1,   309,   150,    -1,   113,   148,   200,   149,
     150,    -1,    -1,    -1,    86,   148,   313,    90,   185,   225,
     224,   149,   186,   227,    -1,    -1,    -1,    86,   148,   266,
      90,   187,   313,   224,   149,   188,   227,    -1,    -1,    88,
     189,   148,   229,   149,   228,    -1,   150,    -1,    -1,    -1,
      -1,    -1,    -1,   101,   190,   151,   168,   152,   102,   148,
     191,   292,   192,    73,   149,   193,   151,   168,   152,   194,
     195,    -1,   103,   309,   150,    -1,    97,    71,   150,    -1,
     196,    -1,    -1,   197,    -1,   196,   197,    -1,    -1,    -1,
     102,   148,   292,   198,    73,   149,   199,   151,   168,   152,
      -1,   201,    -1,   200,     8,   201,    -1,   313,    -1,   205,
      -1,   208,    -1,    -1,    31,    -1,    -1,    -1,   279,   204,
      71,   206,   148,   242,   149,   207,   151,   168,   152,    -1,
      -1,    -1,    -1,   214,    71,   209,   215,   210,   220,   211,
     151,   250,   152,    -1,    -1,    -1,   217,    71,   212,   218,
     213,   151,   250,   152,    -1,   117,    -1,   110,   117,    -1,
     109,   117,    -1,    -1,    -1,   119,   216,   292,    -1,   118,
      -1,    -1,    -1,   119,   219,   222,    -1,    -1,    -1,   120,
     221,   222,    -1,   292,    -1,    -1,   222,     8,   223,   292,
      -1,    -1,   122,   225,    -1,   313,    -1,    31,   313,    -1,
     171,    -1,    26,   168,    85,   150,    -1,   171,    -1,    26,
     168,    87,   150,    -1,   171,    -1,    26,   168,    89,   150,
      -1,    71,    13,   303,    -1,   229,     8,    71,    13,   303,
      -1,   151,   231,   152,    -1,   151,   150,   231,   152,    -1,
      26,   231,    92,   150,    -1,    26,   150,   231,    92,   150,
      -1,    -1,    -1,   231,    93,   309,   234,   232,   168,    -1,
      -1,   231,    94,   234,   233,   168,    -1,    26,    -1,   150,
      -1,   171,    -1,    26,   168,    83,   150,    -1,    -1,    -1,
     236,    66,   148,   309,   149,   237,   171,    -1,    -1,    -1,
     238,    66,   148,   309,   149,    26,   239,   168,    -1,    -1,
      67,   171,    -1,    -1,    67,    26,   168,    -1,   243,    -1,
      -1,   244,    73,    -1,   244,    31,    73,    -1,   244,    31,
      73,    13,   303,    -1,   244,    73,    13,   303,    -1,   243,
       8,   244,    73,    -1,   243,     8,   244,    31,    73,    -1,
     243,     8,   244,    31,    73,    13,   303,    -1,   243,     8,
     244,    73,    13,   303,    -1,    -1,   292,    -1,   124,    -1,
     246,    -1,    -1,   266,    -1,   313,    -1,    31,   311,    -1,
     246,     8,   266,    -1,   246,     8,   313,    -1,   246,     8,
      31,   311,    -1,   247,     8,   248,    -1,   248,    -1,    73,
      -1,   153,   310,    -1,   153,   151,   309,   152,    -1,   249,
       8,    73,    -1,   249,     8,    73,    13,   303,    -1,    73,
      -1,    73,    13,   303,    -1,   250,   251,    -1,    -1,   256,
     260,   150,    -1,   261,   150,    -1,    -1,    -1,    -1,   257,
     279,   204,    71,   252,   148,   253,   242,   149,   254,   255,
      -1,   150,    -1,   151,   168,   152,    -1,   258,    -1,   112,
      -1,    -1,   258,    -1,   259,    -1,   258,   259,    -1,   106,
      -1,   107,    -1,   108,    -1,   111,    -1,   110,    -1,   109,
      -1,   260,     8,    73,    -1,   260,     8,    73,    13,   303,
      -1,    73,    -1,    73,    13,   303,    -1,   261,     8,    71,
      13,   303,    -1,    99,    71,    13,   303,    -1,   262,     8,
     309,    -1,   309,    -1,    -1,   264,    -1,    -1,   264,     8,
     265,   309,    -1,   309,    -1,    -1,   123,   148,   267,   332,
     149,    13,   309,    -1,   313,    13,   309,    -1,   313,    13,
      31,   313,    -1,    -1,   313,    13,    31,    63,   293,   268,
     301,    -1,    -1,    63,   293,   269,   301,    -1,    62,   309,
      -1,   313,    24,   309,    -1,   313,    23,   309,    -1,   313,
      22,   309,    -1,   313,    21,   309,    -1,   313,    20,   309,
      -1,   313,    19,   309,    -1,   313,    18,   309,    -1,   313,
      17,   309,    -1,   313,    16,   309,    -1,   313,    15,   309,
      -1,   313,    14,   309,    -1,   312,    60,    -1,    60,   312,
      -1,   312,    59,    -1,    59,   312,    -1,    -1,   309,    27,
     270,   309,    -1,    -1,   309,    28,   271,   309,    -1,    -1,
     309,     9,   272,   309,    -1,    -1,   309,    11,   273,   309,
      -1,   309,    10,   309,    -1,   309,    29,   309,    -1,   309,
      31,   309,    -1,   309,    30,   309,    -1,   309,    44,   309,
      -1,   309,    42,   309,    -1,   309,    43,   309,    -1,   309,
      45,   309,    -1,   309,    46,   309,    -1,   309,    47,   309,
      -1,   309,    41,   309,    -1,   309,    40,   309,    -1,    42,
     309,    -1,    43,   309,    -1,    48,   309,    -1,    50,   309,
      -1,   309,    33,   309,    -1,   309,    32,   309,    -1,   309,
      35,   309,    -1,   309,    34,   309,    -1,   309,    36,   309,
      -1,   309,    39,   309,    -1,   309,    37,   309,    -1,   309,
      38,   309,    -1,   309,    49,   293,    -1,   148,   309,   149,
      -1,    -1,    -1,   309,    25,   274,   309,    26,   275,   309,
      -1,    -1,   309,    25,    26,   276,   309,    -1,   341,    -1,
      58,   309,    -1,    57,   309,    -1,    56,   309,    -1,    55,
     309,    -1,    54,   309,    -1,    53,   309,    -1,    52,   309,
      -1,    64,   299,    -1,    -1,    51,   277,   309,    -1,   305,
      -1,   124,   148,   335,   149,    -1,   154,   300,   154,    -1,
      12,   309,    -1,    -1,   279,   204,   148,   278,   242,   149,
     280,   151,   168,   152,    -1,    98,    -1,    -1,   104,   148,
     281,   149,    -1,   281,     8,    73,    -1,   281,     8,    31,
      73,    -1,    73,    -1,    31,    73,    -1,    -1,   161,   148,
     283,   245,   149,    -1,    -1,   141,   144,   161,   148,   284,
     245,   149,    -1,    -1,   144,   161,   148,   285,   245,   149,
      -1,    -1,   291,   140,    71,   148,   286,   245,   149,    -1,
      -1,   291,   140,   319,   148,   287,   245,   149,    -1,    -1,
     321,   140,    71,   148,   288,   245,   149,    -1,    -1,   321,
     140,   319,   148,   289,   245,   149,    -1,    -1,   319,   148,
     290,   245,   149,    -1,   111,    -1,   161,    -1,   141,   144,
     161,    -1,   144,   161,    -1,   161,    -1,   141,   144,   161,
      -1,   144,   161,    -1,   291,    -1,   294,    -1,    -1,    -1,
     323,   121,   295,   327,   296,   297,    -1,   323,    -1,   297,
     298,    -1,    -1,   121,   327,    -1,    -1,   148,   149,    -1,
     148,   309,   149,    -1,    -1,    78,    -1,   337,    -1,    -1,
     148,   245,   149,    -1,    69,    -1,    70,    -1,    79,    -1,
     128,    -1,   129,    -1,   143,    -1,   125,    -1,   126,    -1,
     127,    -1,   142,    -1,   136,    78,   137,    -1,   136,   137,
      -1,   302,    -1,   161,    -1,   141,   144,   161,    -1,   144,
     161,    -1,    42,   303,    -1,    43,   303,    -1,   124,   148,
     306,   149,    -1,   304,    -1,   291,   140,    71,    -1,    72,
      -1,   344,    -1,   161,    -1,   141,   144,   161,    -1,   144,
     161,    -1,   302,    -1,   155,   337,   155,    -1,   136,   337,
     137,    -1,    -1,   308,   307,    -1,    -1,     8,    -1,   308,
       8,   303,   122,   303,    -1,   308,     8,   303,    -1,   303,
     122,   303,    -1,   303,    -1,   310,    -1,   266,    -1,   313,
      -1,   313,    -1,   313,    -1,    -1,   322,   121,   327,   317,
     314,   315,    -1,   322,    -1,   315,   316,    -1,    -1,   121,
     327,   317,    -1,    -1,   148,   318,   245,   149,    -1,    -1,
     324,    -1,   331,   324,    -1,   291,   140,   319,    -1,   321,
     140,   319,    -1,   324,    -1,   323,    -1,   282,    -1,   324,
      -1,   331,   324,    -1,   320,    -1,   324,    61,   326,   156,
      -1,   324,   151,   309,   152,    -1,   325,    -1,    73,    -1,
     153,   151,   309,   152,    -1,    -1,   309,    -1,   329,    -1,
      -1,   319,   328,    -1,   329,    61,   326,   156,    -1,   329,
     151,   309,   152,    -1,   330,    -1,    71,    -1,   151,   309,
     152,    -1,   153,    -1,   331,   153,    -1,   332,     8,   333,
      -1,   333,    -1,   313,    -1,    -1,   123,   148,   334,   332,
     149,    -1,    -1,    -1,   336,   307,    -1,   336,     8,   309,
     122,   309,    -1,   336,     8,   309,    -1,   309,   122,   309,
      -1,   309,    -1,   336,     8,   309,   122,    31,   311,    -1,
     336,     8,    31,   311,    -1,   309,   122,    31,   311,    -1,
      31,   311,    -1,   337,   338,    -1,   337,    78,    -1,   338,
      -1,    78,   338,    -1,    73,    -1,    -1,    73,    61,   339,
     340,   156,    -1,    73,   121,    71,    -1,   138,   309,   152,
      -1,   138,    72,    61,   309,   156,   152,    -1,   139,   313,
     152,    -1,    71,    -1,    74,    -1,    73,    -1,   114,   148,
     342,   149,    -1,   115,   148,   313,   149,    -1,     7,   309,
      -1,     6,   309,    -1,     5,   148,   309,   149,    -1,     4,
     309,    -1,     3,   309,    -1,   313,    -1,    -1,   342,     8,
     343,   313,    -1,   291,   140,    71,    -1,   321,   140,    71,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   185,   185,   189,   189,   190,   194,   195,   199,   200,
     201,   202,   203,   204,   204,   206,   206,   208,   209,   213,
     214,   218,   219,   220,   221,   225,   226,   230,   230,   231,
     236,   237,   238,   239,   244,   245,   249,   250,   250,   250,
     251,   251,   251,   252,   252,   252,   253,   253,   253,   257,
     259,   261,   254,   263,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,   278,   279,
     277,   282,   283,   281,   285,   285,   286,   287,   288,   289,
     290,   291,   287,   293,   294,   299,   300,   304,   305,   310,
     310,   310,   315,   316,   320,   324,   328,   333,   334,   340,
     351,   339,   364,   369,   372,   362,   382,   387,   381,   400,
     401,   402,   406,   408,   407,   419,   422,   425,   424,   435,
     438,   437,   448,   454,   453,   463,   464,   469,   470,   474,
     475,   480,   481,   486,   487,   492,   493,   498,   499,   500,
     501,   506,   507,   507,   508,   508,   513,   514,   519,   520,
     525,   527,   527,   531,   533,   533,   537,   539,   543,   545,
     550,   551,   556,   557,   558,   559,   560,   561,   562,   563,
     569,   572,   577,   586,   587,   592,   593,   594,   595,   596,
     597,   601,   602,   607,   608,   609,   614,   615,   616,   617,
     623,   624,   629,   633,   638,   647,   652,   637,   664,   665,
     669,   670,   674,   675,   679,   680,   684,   685,   686,   687,
     688,   689,   693,   698,   703,   712,   723,   732,   748,   749,
     754,   755,   759,   759,   760,   764,   764,   765,   766,   767,
     767,   768,   768,   772,   773,   774,   775,   776,   777,   778,
     779,   780,   781,   782,   783,   784,   785,   786,   787,   788,
     788,   789,   789,   790,   790,   791,   791,   792,   793,   794,
     795,   796,   797,   798,   799,   800,   801,   802,   803,   804,
     805,   806,   807,   808,   809,   810,   811,   812,   813,   814,
     815,   816,   817,   818,   819,   818,   821,   821,   823,   824,
     825,   826,   827,   828,   829,   830,   831,   832,   832,   833,
     834,   835,   836,   837,   837,   842,   845,   847,   851,   852,
     853,   854,   859,   858,   872,   872,   875,   875,   878,   878,
     881,   881,   884,   884,   887,   887,   890,   890,   896,   897,
     898,   899,   903,   904,   905,   911,   912,   917,   918,   917,
     920,   925,   926,   931,   935,   936,   937,   941,   942,   943,
     948,   949,   954,   955,   956,   957,   958,   959,   960,   961,
     962,   963,   964,   965,   970,   971,   972,   973,   974,   975,
     976,   977,   981,   985,   986,   987,   988,   989,   990,   991,
     992,   997,   998,  1001,  1003,  1007,  1008,  1009,  1010,  1014,
    1015,  1020,  1025,  1029,  1037,  1033,  1044,  1050,  1051,  1056,
    1065,  1065,  1068,  1072,  1073,  1077,  1078,  1083,  1087,  1088,
    1093,  1094,  1095,  1099,  1100,  1101,  1106,  1107,  1111,  1112,
    1117,  1118,  1118,  1122,  1123,  1124,  1128,  1129,  1133,  1134,
    1138,  1139,  1144,  1145,  1145,  1146,  1151,  1152,  1156,  1157,
    1158,  1159,  1160,  1161,  1162,  1163,  1167,  1168,  1169,  1170,
    1176,  1177,  1177,  1178,  1179,  1180,  1181,  1186,  1187,  1188,
    1193,  1194,  1195,  1196,  1197,  1198,  1199,  1203,  1204,  1204,
    1208,  1209
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "T_END_OF_FILE", "error", "$undefined", "T_REQUIRE_ONCE", "T_REQUIRE",
  "T_EVAL", "T_INCLUDE_ONCE", "T_INCLUDE", "','", "T_LOGICAL_OR",
  "T_LOGICAL_XOR", "T_LOGICAL_AND", "T_PRINT", "'='", "T_SR_EQUAL",
  "T_SL_EQUAL", "T_XOR_EQUAL", "T_OR_EQUAL", "T_AND_EQUAL", "T_MOD_EQUAL",
  "T_CONCAT_EQUAL", "T_DIV_EQUAL", "T_MUL_EQUAL", "T_MINUS_EQUAL",
  "T_PLUS_EQUAL", "'?'", "':'", "T_BOOLEAN_OR", "T_BOOLEAN_AND", "'|'",
  "'^'", "'&'", "T_IS_NOT_IDENTICAL", "T_IS_IDENTICAL", "T_IS_NOT_EQUAL",
  "T_IS_EQUAL", "'<'", "'>'", "T_IS_GREATER_OR_EQUAL",
  "T_IS_SMALLER_OR_EQUAL", "T_SR", "T_SL", "'+'", "'-'", "'.'", "'*'",
  "'/'", "'%'", "'!'", "T_INSTANCEOF", "'~'", "'@'", "T_UNSET_CAST",
  "T_BOOL_CAST", "T_OBJECT_CAST", "T_ARRAY_CAST", "T_STRING_CAST",
  "T_DOUBLE_CAST", "T_INT_CAST", "T_DEC", "T_INC", "'['", "T_CLONE",
  "T_NEW", "T_EXIT", "T_IF", "T_ELSEIF", "T_ELSE", "T_ENDIF", "T_LNUMBER",
  "T_DNUMBER", "T_STRING", "T_STRING_VARNAME", "T_VARIABLE",
  "T_NUM_STRING", "T_INLINE_HTML", "T_CHARACTER", "T_BAD_CHARACTER",
  "T_ENCAPSED_AND_WHITESPACE", "T_CONSTANT_ENCAPSED_STRING", "T_ECHO",
  "T_DO", "T_WHILE", "T_ENDWHILE", "T_FOR", "T_ENDFOR", "T_FOREACH",
  "T_ENDFOREACH", "T_DECLARE", "T_ENDDECLARE", "T_AS", "T_SWITCH",
  "T_ENDSWITCH", "T_CASE", "T_DEFAULT", "T_BREAK", "T_CONTINUE", "T_GOTO",
  "T_FUNCTION", "T_CONST", "T_RETURN", "T_TRY", "T_CATCH", "T_THROW",
  "T_USE", "T_GLOBAL", "T_PUBLIC", "T_PROTECTED", "T_PRIVATE", "T_FINAL",
  "T_ABSTRACT", "T_STATIC", "T_VAR", "T_UNSET", "T_ISSET", "T_EMPTY",
  "T_HALT_COMPILER", "T_CLASS", "T_INTERFACE", "T_EXTENDS", "T_IMPLEMENTS",
  "T_OBJECT_OPERATOR", "T_DOUBLE_ARROW", "T_LIST", "T_ARRAY", "T_CLASS_C",
  "T_METHOD_C", "T_FUNC_C", "T_LINE", "T_FILE", "T_COMMENT",
  "T_DOC_COMMENT", "T_OPEN_TAG", "T_OPEN_TAG_WITH_ECHO", "T_CLOSE_TAG",
  "T_WHITESPACE", "T_START_HEREDOC", "T_END_HEREDOC",
  "T_DOLLAR_OPEN_CURLY_BRACES", "T_CURLY_OPEN", "T_PAAMAYIM_NEKUDOTAYIM",
  "T_NAMESPACE", "T_NS_C", "T_DIR", "T_NS_SEPARATOR",
  "T_ERROR_UNTERMINATED_COMMENT", "T_ERROR_UNTERMINATED_STRING",
  "T_ERROR_UNTERMINATED_BACKTICK", "'('", "')'", "';'", "'{'", "'}'",
  "'$'", "'`'", "'\"'", "']'", "$accept", "start", "top_statement_list",
  "$@1", "namespace_name", "top_statement", "$@2", "$@3",
  "use_declarations", "use_declaration", "constant_declaration",
  "inner_statement_list", "$@4", "inner_statement", "statement",
  "unticked_statement", "$@5", "$@6", "$@7", "$@8", "$@9", "$@10", "$@11",
  "$@12", "$@13", "$@14", "$@15", "$@16", "$@17", "$@18", "$@19", "$@20",
  "$@21", "$@22", "$@23", "$@24", "$@25", "$@26", "additional_catches",
  "non_empty_additional_catches", "additional_catch", "$@27", "$@28",
  "unset_variables", "unset_variable", "function_declaration_statement",
  "class_declaration_statement", "is_reference",
  "unticked_function_declaration_statement", "$@29", "$@30",
  "unticked_class_declaration_statement", "$@31", "$@32", "$@33", "$@34",
  "$@35", "class_entry_type", "extends_from", "$@36", "interface_entry",
  "interface_extends_list", "$@37", "implements_list", "$@38",
  "interface_list", "$@39", "foreach_optional_arg", "foreach_variable",
  "for_statement", "foreach_statement", "declare_statement",
  "declare_list", "switch_case_list", "case_list", "$@40", "$@41",
  "case_separator", "while_statement", "elseif_list", "$@42",
  "new_elseif_list", "$@43", "else_single", "new_else_single",
  "parameter_list", "non_empty_parameter_list", "optional_class_type",
  "function_call_parameter_list", "non_empty_function_call_parameter_list",
  "global_var_list", "global_var", "static_var_list",
  "class_statement_list", "class_statement", "$@44", "$@45", "$@46",
  "method_body", "variable_modifiers", "method_modifiers",
  "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "echo_expr_list", "for_expr", "non_empty_for_expr", "$@47",
  "expr_without_variable", "$@48", "$@49", "$@50", "$@51", "$@52", "$@53",
  "$@54", "$@55", "$@56", "$@57", "$@58", "$@59", "function",
  "lexical_vars", "lexical_var_list", "function_call", "$@60", "$@61",
  "$@62", "$@63", "$@64", "$@65", "$@66", "$@67", "class_name",
  "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "$@68", "$@69",
  "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable", "$@70",
  "variable_properties", "variable_property", "method_or_not", "$@71",
  "variable_without_objects", "static_member", "variable_class_name",
  "base_variable_with_function_calls", "base_variable",
  "reference_variable", "compound_variable", "dim_offset",
  "object_property", "$@72", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "$@73", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var", "$@74",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "$@75", "class_constant", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,    44,   263,
     264,   265,   266,    61,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,    63,    58,   278,   279,   124,
      94,    38,   280,   281,   282,   283,    60,    62,   284,   285,
     286,   287,    43,    45,    46,    42,    47,    37,    33,   288,
     126,    64,   289,   290,   291,   292,   293,   294,   295,   296,
     297,    91,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,    40,    41,
      59,   123,   125,    36,    96,    34,    93
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   157,   158,   160,   159,   159,   161,   161,   162,   162,
     162,   162,   162,   163,   162,   164,   162,   162,   162,   165,
     165,   166,   166,   166,   166,   167,   167,   169,   168,   168,
     170,   170,   170,   170,   171,   171,   172,   173,   174,   172,
     175,   176,   172,   177,   178,   172,   179,   180,   172,   181,
     182,   183,   172,   184,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   172,   172,   172,   185,   186,
     172,   187,   188,   172,   189,   172,   172,   190,   191,   192,
     193,   194,   172,   172,   172,   195,   195,   196,   196,   198,
     199,   197,   200,   200,   201,   202,   203,   204,   204,   206,
     207,   205,   209,   210,   211,   208,   212,   213,   208,   214,
     214,   214,   215,   216,   215,   217,   218,   219,   218,   220,
     221,   220,   222,   223,   222,   224,   224,   225,   225,   226,
     226,   227,   227,   228,   228,   229,   229,   230,   230,   230,
     230,   231,   232,   231,   233,   231,   234,   234,   235,   235,
     236,   237,   236,   238,   239,   238,   240,   240,   241,   241,
     242,   242,   243,   243,   243,   243,   243,   243,   243,   243,
     244,   244,   244,   245,   245,   246,   246,   246,   246,   246,
     246,   247,   247,   248,   248,   248,   249,   249,   249,   249,
     250,   250,   251,   251,   252,   253,   254,   251,   255,   255,
     256,   256,   257,   257,   258,   258,   259,   259,   259,   259,
     259,   259,   260,   260,   260,   260,   261,   261,   262,   262,
     263,   263,   265,   264,   264,   267,   266,   266,   266,   268,
     266,   269,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   270,
     266,   271,   266,   272,   266,   273,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   274,   275,   266,   276,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   277,   266,   266,
     266,   266,   266,   278,   266,   279,   280,   280,   281,   281,
     281,   281,   283,   282,   284,   282,   285,   282,   286,   282,
     287,   282,   288,   282,   289,   282,   290,   282,   291,   291,
     291,   291,   292,   292,   292,   293,   293,   295,   296,   294,
     294,   297,   297,   298,   299,   299,   299,   300,   300,   300,
     301,   301,   302,   302,   302,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   303,   303,   303,   303,   303,   303,
     303,   303,   304,   305,   305,   305,   305,   305,   305,   305,
     305,   306,   306,   307,   307,   308,   308,   308,   308,   309,
     309,   310,   311,   312,   314,   313,   313,   315,   315,   316,
     318,   317,   317,   319,   319,   320,   320,   321,   322,   322,
     323,   323,   323,   324,   324,   324,   325,   325,   326,   326,
     327,   328,   327,   329,   329,   329,   330,   330,   331,   331,
     332,   332,   333,   334,   333,   333,   335,   335,   336,   336,
     336,   336,   336,   336,   336,   336,   337,   337,   337,   337,
     338,   339,   338,   338,   338,   338,   338,   340,   340,   340,
     341,   341,   341,   341,   341,   341,   341,   342,   343,   342,
     344,   344
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     3,     0,     1,     3,     1,     1,
       1,     4,     3,     0,     6,     0,     5,     3,     2,     3,
       1,     1,     3,     2,     4,     5,     4,     0,     3,     0,
       1,     1,     1,     4,     1,     2,     3,     0,     0,     9,
       0,     0,    12,     0,     0,     7,     0,     0,     9,     0,
       0,     0,    12,     0,     6,     2,     3,     2,     3,     2,
       3,     3,     3,     3,     3,     1,     2,     5,     0,     0,
      10,     0,     0,    10,     0,     6,     1,     0,     0,     0,
       0,     0,    18,     3,     3,     1,     0,     1,     2,     0,
       0,    10,     1,     3,     1,     1,     1,     0,     1,     0,
       0,    11,     0,     0,     0,    10,     0,     0,     8,     1,
       2,     2,     0,     0,     3,     1,     0,     0,     3,     0,
       0,     3,     1,     0,     4,     0,     2,     1,     2,     1,
       4,     1,     4,     1,     4,     3,     5,     3,     4,     4,
       5,     0,     0,     6,     0,     5,     1,     1,     1,     4,
       0,     0,     7,     0,     0,     8,     0,     2,     0,     3,
       1,     0,     2,     3,     5,     4,     4,     5,     7,     6,
       0,     1,     1,     1,     0,     1,     1,     2,     3,     3,
       4,     3,     1,     1,     2,     4,     3,     5,     1,     3,
       2,     0,     3,     2,     0,     0,     0,    11,     1,     3,
       1,     1,     0,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     3,     5,     1,     3,     5,     4,     3,     1,
       0,     1,     0,     4,     1,     0,     7,     3,     4,     0,
       7,     0,     4,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     0,
       4,     0,     4,     0,     4,     0,     4,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     0,     0,     7,     0,     5,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     0,     3,     1,
       4,     3,     2,     0,    10,     1,     0,     4,     3,     4,
       1,     2,     0,     5,     0,     7,     0,     6,     0,     7,
       0,     7,     0,     7,     0,     7,     0,     5,     1,     1,
       3,     2,     1,     3,     2,     1,     1,     0,     0,     6,
       1,     2,     0,     2,     0,     2,     3,     0,     1,     1,
       0,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     2,     1,     1,     3,     2,     2,     2,
       4,     1,     3,     1,     1,     1,     3,     2,     1,     3,
       3,     0,     2,     0,     1,     5,     3,     3,     1,     1,
       1,     1,     1,     1,     0,     6,     1,     2,     0,     3,
       0,     4,     0,     1,     2,     3,     3,     1,     1,     1,
       1,     2,     1,     4,     4,     1,     1,     4,     0,     1,
       1,     0,     2,     4,     4,     1,     1,     3,     1,     2,
       3,     1,     1,     0,     5,     0,     0,     2,     5,     3,
       3,     1,     6,     4,     4,     2,     2,     2,     1,     2,
       1,     0,     5,     3,     3,     6,     3,     1,     1,     1,
       4,     4,     2,     2,     4,     2,     2,     1,     0,     4,
       3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   297,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   344,     0,   352,
     353,     6,   373,   416,    65,   354,     0,    46,     0,     0,
       0,    74,     0,     0,     0,     0,   305,     0,     0,    77,
       0,     0,     0,     0,     0,   328,     0,     0,     0,     0,
     109,   115,     0,     0,   358,   359,   360,   355,   356,     0,
       0,   361,   357,     0,     0,    76,    29,   428,   347,     0,
     375,     4,     0,     8,    34,     9,    10,    95,    96,     0,
       0,   390,    97,   409,     0,   378,   299,     0,   389,     0,
     391,     0,   412,     0,   396,   408,   410,   415,     0,   288,
     374,     6,   328,     0,    97,   466,   465,     0,   463,   462,
     302,   269,   270,   271,   272,     0,   295,   294,   293,   292,
     291,   290,   289,     0,     0,   329,     0,   248,   393,     0,
     246,   233,     0,     0,   329,   335,   231,   336,     0,   340,
     410,     0,     0,   296,     0,    35,     0,   219,     0,    43,
     220,     0,     0,     0,    55,     0,    57,     0,     0,     0,
      59,   390,     0,   391,     0,     0,     0,    21,     0,    20,
     183,     0,     0,   182,   111,   110,   188,     0,     0,     0,
       0,     0,   225,   436,   450,     0,   363,     0,     0,     0,
     448,     0,    15,     0,   377,     0,    27,     0,   348,     0,
     349,     0,     0,     0,   312,     0,    18,   102,   106,    98,
       0,     0,   253,     0,   255,   283,   249,   251,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    66,   247,
     245,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   326,     0,     0,   418,     0,   429,   411,
       0,     0,   298,     0,   331,     0,     0,     0,   331,     0,
     350,     0,   337,   411,   345,     0,     0,     0,    64,     0,
       0,     0,   221,   224,   390,   391,     0,     0,    56,    58,
      84,     0,    60,    61,    29,    83,    23,     0,     0,    17,
       0,   184,   391,     0,    62,     0,     0,    63,     0,    92,
      94,   467,     0,     0,     0,   435,     0,   441,     0,   383,
     451,     0,   362,   449,   373,     0,     0,   447,   380,   446,
     376,     5,    12,    13,   316,   282,    36,     0,     0,   301,
     379,     7,   174,     0,   112,   116,    99,   303,   470,   405,
     403,     0,     0,   257,     0,   286,     0,     0,     0,   258,
     260,   259,   274,   273,   276,   275,   277,   279,   280,   278,
     268,   267,   262,   263,   261,   264,   265,   266,   281,     0,
     227,   244,   243,   242,   241,   240,   239,   238,   237,   236,
     235,   234,   174,   471,   406,   426,     0,   421,   402,   420,
     425,   419,     0,     0,   464,   330,     0,     0,   330,   405,
     174,   232,   406,     0,   346,    37,   218,     0,     0,    49,
     222,    71,    68,     0,     0,    53,     0,     0,     0,     0,
       0,     0,   365,     0,   364,    26,   371,    27,     0,    22,
      19,     0,   181,   189,   186,     0,     0,   468,   460,   461,
      11,     0,   432,     0,   431,   445,   392,     0,   300,   384,
     437,     0,   453,     0,   454,   456,   314,     3,     5,   174,
       0,    28,    30,    31,    32,   417,     0,     0,   173,   390,
     391,     0,   113,   103,   117,   107,     0,   170,   318,   320,
     404,   254,   256,     0,     0,   250,   252,     0,   228,     0,
     322,   324,     0,   422,   400,   394,   418,     0,   413,   414,
       0,   338,    40,     0,    47,    44,   220,     0,     0,     0,
       0,     0,     0,     0,   368,   369,   381,     0,     0,   367,
       0,     0,    24,   185,     0,    93,    67,     0,   433,   435,
       0,     0,   440,     0,   439,   457,   459,   458,     0,     0,
     174,    16,     3,     0,     0,   177,   313,     0,    25,     0,
     119,     0,     0,   170,   172,     0,     0,   332,     0,   160,
       0,   171,   174,   174,   287,   284,   229,   327,   174,   174,
     427,   174,   398,     0,     0,   351,   342,    29,    38,     0,
       0,     0,   223,   125,     0,   125,   127,   135,     0,    29,
     133,    75,   141,   141,    54,   388,     0,   383,   366,   372,
       0,   187,   469,   435,   430,     0,   444,   443,     0,   452,
       0,     0,    14,   317,     0,     0,   390,   391,   114,   120,
     104,   118,   122,   191,     0,     0,   334,   306,   170,     0,
     162,     0,     0,     0,   350,     0,     0,     0,   395,   423,
     424,   339,    27,   150,     0,    29,   148,    45,    50,     0,
       0,   128,     0,     0,    27,   141,     0,   141,     0,     0,
     370,   384,   382,    78,     0,   226,     0,   438,   455,   315,
      33,   180,     0,     0,   123,   202,   100,   333,     0,     0,
       0,   163,     0,   319,   321,   285,   230,   323,   325,   401,
       0,   397,     0,   341,   153,   156,     0,    27,   220,   126,
      72,    69,   136,     0,     0,     0,     0,     0,     0,   137,
     387,   386,     0,   434,   442,   121,   191,     0,     0,   206,
     207,   208,   211,   210,   209,   201,   108,   190,     0,     0,
     200,   204,     0,     0,     0,    29,     0,   166,     0,   165,
     402,   343,   158,     0,     0,    39,    48,     0,     0,     0,
       0,   134,     0,   139,     0,   146,   147,   144,   138,     0,
      79,   202,   124,     0,   214,     0,    97,   205,     0,   193,
      29,     0,   310,     0,    27,   167,     0,   164,   399,     0,
       0,     0,     0,   157,   149,    51,    29,   131,    73,    70,
     140,   142,    29,   385,     0,   105,     0,     0,     0,   192,
       0,     0,    27,   311,     0,   307,   304,     0,   169,     0,
      29,     0,     0,     0,    27,    29,    27,     0,   217,   215,
     212,   194,     0,   101,     0,   308,   168,     0,    27,    42,
     151,    29,   129,    52,     0,    27,    80,     0,     0,   216,
     309,     0,     0,    27,   132,     0,   213,   195,   154,   152,
       0,    29,   170,    29,   130,    27,     0,    27,    81,   196,
      86,     0,     0,    82,    85,    87,   198,    29,   197,     0,
      88,    27,    89,   199,     0,     0,    90,     0,    29,    27,
      91
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    80,    81,   478,   341,   178,   179,
      82,   206,   347,   481,   807,    84,   523,   663,   597,   714,
     290,   600,   158,   599,   526,   718,   833,   533,   529,   770,
     528,   769,   162,   174,   732,   814,   865,   880,   883,   884,
     885,   894,   897,   318,   319,    85,    86,   220,    87,   496,
     753,    88,   354,   570,   693,   355,   572,    89,   493,   569,
      90,   495,   571,   640,   692,   641,   737,   670,   605,   853,
     808,   611,   434,   614,   676,   835,   812,   777,   667,   715,
     862,   762,   873,   765,   801,   578,   579,   580,   487,   488,
     182,   183,   187,   695,   747,   858,   872,   881,   888,   748,
     749,   750,   751,   785,   752,   156,   291,   292,   527,    91,
     325,   654,   280,   367,   368,   362,   364,   366,   653,   503,
     125,   497,   114,   699,   793,    93,   352,   560,   479,   582,
     583,   588,   589,   402,    94,   581,   146,   147,   423,   596,
     661,   713,   153,   209,   421,    95,   445,   446,    96,   616,
     470,   617,   172,    98,   465,    99,   100,   592,   658,   711,
     515,   591,   101,   102,   103,   104,   105,   106,   107,   412,
     408,   513,   409,   410,   108,   463,   464,   623,   328,   329,
     199,   200,   471,   558,   109,   322,   547,   110
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -577
static const yytype_int16 yypact[] =
{
    -577,    55,    60,  -577,  1535,  3925,  3925,   -90,  3925,  3925,
    3925,  3925,  3925,  3925,  3925,  -577,  3925,  3925,  3925,  3925,
    3925,  3925,  3925,   245,   245,  3925,   286,   -83,   -80,  -577,
    -577,    62,  -577,  -577,  -577,  -577,  3925,  -577,   -58,   -55,
     -50,  -577,   -48,  2528,  2655,    34,  -577,    37,  2782,  -577,
    3925,   111,   -39,   104,   106,    46,    85,    92,   103,   123,
    -577,  -577,   129,   140,  -577,  -577,  -577,  -577,  -577,   265,
     -26,  -577,  -577,   222,  3925,  -577,  -577,   149,   252,   290,
     312,  -577,     7,  -577,  -577,  -577,  -577,  -577,  -577,   251,
     261,  -577,   303,  -577,   204,  -577,  -577,  4528,  -577,   295,
     761,   246,  -577,   272,   280,  -577,   -36,  -577,    53,  -577,
    -577,  -577,  -577,   275,   303,  5204,  5204,  3925,  5204,  5204,
    5264,  -577,  -577,   372,  -577,  3925,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,   282,   222,   -78,   318,  -577,  -577,   327,
    -577,  -577,   325,   222,   329,   331,  -577,  -577,   336,   362,
     -38,    53,  2909,  -577,  3925,  -577,    10,  5204,  2401,  -577,
    3925,  3925,   351,  3925,  -577,  4570,  -577,  4611,   347,   491,
    -577,   364,  5204,   179,   374,  4652,   222,   -41,    11,  -577,
    -577,   226,    12,  -577,  -577,  -577,   510,    13,   245,   245,
     245,   378,  -577,  3036,    -4,   208,  -577,  4052,   245,   298,
    -577,   222,  -577,   214,   317,  4694,   385,  3925,   170,   386,
     315,   170,   110,   470,  -577,   471,  -577,  -577,  -577,  -577,
     -27,     2,  -577,  3925,  -577,   518,  -577,  -577,  3925,  3925,
    3925,  3925,  3925,  3925,  3925,  3925,  3925,  3925,  3925,  3925,
    3925,  3925,  3925,  3925,  3925,  3925,  3925,   286,  -577,  -577,
    -577,  3163,  3925,  3925,  3925,  3925,  3925,  3925,  3925,  3925,
    3925,  3925,  3925,  -577,    36,    81,  3925,  3925,   149,   -19,
     399,  4735,  -577,   222,   -53,    57,   158,   222,   329,   117,
     403,   117,  -577,   -18,  -577,  4776,  4817,  3925,  -577,   463,
    3925,   402,   546,  5204,   466,   427,   489,  4858,  -577,  -577,
    -577,   281,  -577,  -577,  -577,  -577,   -28,   490,   111,  -577,
    3925,  -577,  -577,   -39,  -577,   281,   484,  -577,    21,  -577,
    -577,  -577,    22,   413,   416,   145,   245,  5063,   419,   555,
    -577,   498,  -577,  -577,   511,  4229,   421,  -577,  -577,  -577,
     348,  -577,  -577,  -577,  -577,  -577,  -577,  1662,  4270,  -577,
    -577,  -577,  3290,   558,   455,   457,  -577,  -577,   431,   432,
     -18,    53,  3925,  5241,  3925,  -577,  3925,  3925,  3925,  2578,
    1325,  1388,  2703,  2703,  2703,  2703,   722,   722,   722,   722,
     338,   338,   486,   486,   486,   372,   372,   372,  -577,   -17,
    5264,  5264,  5264,  5264,  5264,  5264,  5264,  5264,  5264,  5264,
    5264,  5264,  3290,   436,   440,  -577,  3925,  -577,   441,   -13,
    -577,  5204,   422,  4318,  -577,    82,   431,   436,   329,  -577,
    3290,  -577,  -577,    81,  -577,   564,  5204,   444,  4899,  -577,
    -577,  -577,  -577,   588,    23,  -577,   281,   281,   456,   -40,
     459,   222,   101,   465,  -577,  -577,  -577,   458,   538,  -577,
    -577,  4359,  -577,  -577,   598,   245,   464,  -577,  -577,  -577,
    -577,   467,  -577,    24,  -577,  -577,  -577,  3417,  -577,  3544,
    -577,   187,  -577,  3925,  -577,  -577,  -577,   461,  -577,  3290,
     468,  -577,  -577,  -577,  -577,  -577,   245,   472,   609,    27,
      63,   281,  -577,  -577,  -577,  -577,   475,   171,  -577,  -577,
     -18,  1180,  5264,  3925,  5163,  5309,  5330,   286,  -577,   492,
    -577,  -577,  4400,  -577,  -577,  -577,  3925,  3925,  -577,  -577,
     493,  -577,  -577,  2401,  -577,  -577,  3925,  3925,   245,   173,
     281,   549,  1815,    33,  -577,  -577,   281,   497,   222,   143,
     553,   533,  -577,  -577,   281,  -577,  -577,   245,  -577,   145,
     623,   245,  5204,   245,  5104,  -577,  -577,  -577,   481,  4188,
    3290,  -577,   495,   494,   496,  -577,  -577,  3671,  -577,   166,
     524,   166,   500,   171,  -577,   505,   222,   329,   503,   630,
      58,  -577,  3290,  3290,  5287,  -577,  -577,  -577,  3290,  3290,
    -577,  3290,  -577,   499,  4444,  -577,  -577,  -577,  -577,  3925,
    1968,   504,  5204,   531,   245,   531,  -577,  -577,   627,  -577,
    -577,  -577,   507,   509,  -577,   539,   513,   652,   255,  -577,
     516,  -577,  -577,   145,  -577,  3925,  -577,  -577,  3798,  -577,
     514,   519,  -577,  -577,   515,   245,    28,   127,  -577,  -577,
    -577,   659,  -577,  -577,   521,   222,   329,   567,   195,   600,
     662,   547,   550,  3925,   403,   552,   554,   556,   566,  -577,
    -577,   574,   414,  -577,  4940,  -577,  -577,  -577,  -577,   173,
     557,  -577,   561,   281,   613,  -577,   397,  -577,   268,   281,
    -577,   281,  -577,  -577,    31,  5264,   245,  5204,  -577,  -577,
    -577,  -577,   166,   560,  -577,   487,  -577,   329,   565,   568,
     174,   691,   281,  -577,  -577,  5287,  -577,  -577,  -577,  -577,
      81,  -577,    81,  -577,  -577,   308,   562,   624,  3925,  -577,
    -577,  -577,  -577,   571,   409,   573,  3925,    35,   279,  -577,
    -577,   595,   166,  -577,  -577,   659,  -577,   166,   647,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,   651,   628,
     622,  -577,    18,   583,   184,  -577,   663,   724,   281,  -577,
     441,  -577,   349,   590,  2401,  -577,  -577,   589,   592,  2121,
    2121,  -577,   593,  -577,  4487,  -577,  -577,  -577,  -577,   281,
    -577,   520,  -577,   729,   731,    19,   303,  -577,   674,  -577,
    -577,   678,  -577,    32,   601,   739,   281,  -577,  -577,   606,
     746,   687,  3925,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,   713,  -577,   281,   281,   714,  -577,
     717,   777,   639,  -577,   186,  -577,  -577,   281,  -577,  3925,
    -577,   642,  4981,  2274,   708,  -577,   181,   649,  -577,  -577,
     783,  -577,   281,  -577,   726,  -577,  -577,  5022,   733,  -577,
    -577,  -577,  -577,  -577,   657,   248,  -577,   281,   660,  -577,
    -577,   784,  2401,   727,  -577,   658,  -577,  -577,  -577,  -577,
     661,  -577,   171,  -577,  -577,   664,   665,   452,  -577,  -577,
     711,   283,   667,  -577,   711,  -577,  -577,  -577,  -577,   166,
    -577,   666,  -577,  -577,   744,   673,  -577,   676,  -577,   671,
    -577
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -577,  -577,  -319,  -577,   -23,  -577,  -577,  -577,  -577,   517,
    -577,  -296,  -577,  -577,     6,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
     -56,  -577,  -577,  -577,   376,   482,   501,  -112,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,   141,  -577,   231,   168,  -577,
      68,  -577,  -577,  -577,  -576,  -577,  -577,    66,  -577,  -577,
    -577,  -577,  -577,  -577,  -577,  -567,  -577,   193,  -369,  -577,
    -577,   529,  -577,   107,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,    94,  -577,  -577,  -577,  -510,  -577,  -577,   -24,
    -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,     1,  -577,  -577,  -577,  -577,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,   559,  -558,  -235,  -577,  -577,  -577,
    -577,  -577,  -577,  -577,   191,  -209,   485,  -577,  -577,  -577,
     229,  -577,   672,   669,  -479,   488,   932,  -577,  -577,  -577,
      87,  -577,  -212,  -577,   779,  -577,   -22,   -12,  -577,   335,
    -406,  -577,  -577,  -577,    15,   230,   305,  -577,  -577,  -577,
     430,   267,  -577,  -577,  -577,  -577,  -577,  -577
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -408
static const yytype_int16 yytable[] =
{
     135,   135,   270,   144,   149,    92,   644,   565,   447,   359,
      83,   638,   388,   642,   150,   215,   601,   521,   287,   308,
     313,   316,   477,   266,   171,   266,   788,   818,   177,   455,
     457,   531,   549,   509,   180,  -175,  -178,   678,   537,   549,
     824,   151,   266,   266,   356,   111,   507,   203,   516,   307,
     204,   520,   404,   407,   111,     3,    33,   330,   117,   612,
      -2,   775,   448,   359,   404,   152,   213,   419,   154,   422,
     214,  -176,   626,   358,   627,    33,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   155,   649,
     159,   213,   444,   160,   112,   344,   269,   196,   161,   724,
     163,   728,  -407,   213,  -407,   168,   444,   403,   169,    33,
     563,   274,  -403,   267,   181,   267,   213,   331,   201,   186,
     278,   357,  -393,  -393,   133,   202,    33,   134,   416,  -404,
      33,   650,   267,   267,   642,  -179,    77,   294,   517,   283,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   405,   306,    33,    77,   691,   216,   135,   562,
     288,   309,   314,   317,   289,   135,   135,   135,   789,   819,
     456,   458,   532,   550,   780,   135,  -175,  -178,   340,   782,
     733,   825,   111,   194,   613,   776,  -393,  -393,   337,    77,
      33,   631,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   604,   756,   268,   734,   768,   360,
      77,   407,  -176,   651,   652,   791,   111,   844,    33,   655,
     656,   184,   657,   185,   144,   149,   213,   444,   444,   417,
     476,    33,   406,   188,    77,   150,   361,   111,  -393,  -393,
     189,  -329,   111,   194,   111,   213,    33,   757,   197,   198,
     415,   190,   360,   360,   418,   176,   112,   792,   555,   845,
     556,   557,   151,   360,   360,   350,   111,   360,   461,   360,
      77,   191,   586,  -145,  -145,  -145,  -179,   192,   442,   361,
     361,   194,   444,  -331,   112,   177,   133,   213,   193,   134,
     361,   361,   442,   111,   361,   574,   361,   111,    77,    33,
     207,   662,   135,   135,   760,   876,   761,   575,   197,   198,
     576,    77,   575,   674,   133,   576,   111,   134,    33,   574,
    -161,   444,   217,   436,   437,   194,    77,   444,   489,   303,
     208,   892,   218,  -145,   219,   444,   575,   112,   194,   576,
    -143,  -143,  -143,   195,   221,   332,   197,   198,    92,   500,
      29,    30,   111,   482,   249,   250,   112,   111,   213,    33,
      35,   726,   727,   194,   342,   343,   135,   133,   211,   717,
     134,   194,   726,   727,   763,   764,   337,   310,   489,    77,
     241,   242,   243,   244,   245,   246,   133,   247,   194,   134,
     197,   198,   112,   337,   263,  -330,   489,   112,    77,   213,
    -143,   265,   196,   197,   198,   438,    64,    65,    66,    67,
      68,   360,   264,   442,   442,   799,   800,   439,   539,   201,
     729,   247,   440,    71,    72,   441,   273,   142,   197,   198,
     143,   778,   135,   886,   887,   338,   197,   198,   361,    77,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,  -329,   197,   198,   489,   213,  -331,   275,   794,
     214,   213,   333,   135,   444,   344,   339,   276,   442,   277,
     444,   279,   444,   213,   577,   333,   281,   339,   333,   339,
     -41,   -41,   -41,   282,   144,   149,  -393,  -393,  -330,   725,
     726,   727,   213,   444,   822,   150,   476,   300,   407,   296,
     407,   772,   726,   727,   301,   135,   135,   442,   210,   212,
     834,   137,   140,   442,   302,   618,   836,   432,  -155,  -155,
    -155,   442,   151,   315,   135,   304,   135,   324,   135,   598,
     135,   244,   245,   246,   848,   247,   489,   346,   610,   855,
     349,   351,   353,   636,   365,   427,   577,   357,   577,   444,
     577,   420,   429,   646,   430,   863,   431,   454,   489,   489,
     433,   449,   459,   469,   489,   489,   460,   489,   468,   472,
     444,   491,   473,   475,   492,   875,   494,   877,   518,   498,
     499,   135,   136,   136,   510,   145,   738,   444,   511,   514,
     522,   891,   524,   739,   740,   741,   742,   743,   744,   745,
     135,   530,   899,   538,   536,   540,   666,   444,   444,   542,
     541,   544,   135,   561,   546,   548,   564,   567,   444,   738,
     608,   566,   697,   573,   619,   577,   739,   740,   741,   742,
     743,   744,   745,   444,   332,   620,   625,   629,   648,   746,
     673,   587,   595,   633,   639,   634,   135,   632,   444,   645,
     442,   643,   647,   669,   668,   659,   442,   675,   442,   677,
     681,   679,   680,   135,   683,   690,   688,   694,   689,   577,
     696,   698,   815,   701,   820,   702,    97,   115,   116,   442,
     118,   119,   120,   121,   122,   123,   124,   710,   126,   127,
     128,   129,   130,   131,   132,   712,   703,   141,   360,   704,
     360,   707,   723,   708,   758,   709,   720,   767,   157,   577,
     721,   736,   766,   754,   577,   165,   167,   779,   783,   755,
    -203,   771,   175,   773,   784,   361,    46,   361,   739,   740,
     741,   742,   743,   744,   790,   442,   795,   796,   802,   804,
     136,   805,   816,   810,   817,   821,   205,   136,   136,   136,
     786,   823,   827,   826,   829,   831,   442,   136,  -408,  -408,
    -408,  -408,   239,   240,   241,   242,   243,   244,   245,   246,
     803,   247,   830,   442,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   837,   840,   841,   271,
     842,   843,   849,   442,   442,   854,   857,   272,   856,   860,
     453,  -159,   139,   139,   442,   148,   145,   864,   867,   871,
     868,   874,   870,   882,   879,   889,   878,   895,   893,   442,
    -393,  -393,   896,   900,   285,   450,   286,   898,   890,   483,
      97,   545,   293,   735,   442,   297,   672,   719,   809,   852,
     811,   700,   452,   781,   787,   706,   682,   798,   484,   577,
     311,   593,     0,   684,   624,     0,     0,     0,     0,     0,
     443,     0,     0,     0,     0,   327,   577,     0,   869,   335,
       0,     0,     0,     0,   443,     0,     0,     0,     0,   348,
       0,     0,     0,     0,   136,   136,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   363,     0,     0,     0,     0,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,   384,   385,   386,   387,     0,
       0,   534,   535,   390,   391,   392,   393,   394,   395,   396,
     397,   398,   399,   400,   401,     0,     0,     0,   411,   413,
       0,     0,     0,     0,     0,     0,     0,     0,   136,     0,
       0,     0,     0,     0,     0,   138,   138,     0,     0,   426,
     139,     0,   428,     0,     0,     0,     0,   139,   139,   139,
       0,     0,     0,     0,     0,     0,   568,   139,     0,     0,
     173,     0,   451,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   443,   443,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   136,   607,     0,     0,     0,    97,
       0,   615,     0,     0,     0,     0,   148,     0,     0,   621,
       0,     0,     0,     0,   501,     0,   502,     0,   504,   505,
     506,     0,     0,     0,     0,   136,     0,     0,     0,     0,
     443,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   145,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   512,     0,
       0,     0,     0,     0,     0,     0,     0,   136,   136,   443,
       0,     0,     0,   295,     0,   443,     0,     0,     0,     0,
       0,     0,     0,   443,   139,   139,   136,     0,   136,     0,
     136,     0,   136,   312,     0,     0,     0,     0,     0,     0,
     320,   321,   323,     0,     0,     0,     0,     0,     0,     0,
     336,     0,     0,     0,     0,     0,     0,     0,     0,   552,
       0,   554,     0,     0,     0,   559,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   722,     0,
       0,     0,     0,   136,   730,     0,   731,     0,   139,     0,
       0,     0,     0,     0,     0,   584,     0,     0,     0,     0,
       0,     0,   136,     0,     0,     0,     0,   759,   411,   594,
     223,   224,     0,     0,   136,    97,     0,     0,   293,   602,
       0,     0,     0,     0,    97,   225,     0,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,   136,   247,
       0,     0,   443,     0,   139,     0,     0,     0,   443,     0,
     443,     0,     0,   797,     0,   136,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   462,   466,     0,
       0,   443,     0,     0,   813,   139,     0,     0,     0,     0,
       0,   664,    97,     0,     0,     0,     0,     0,     0,     0,
       0,   828,     0,     0,   490,     0,   148,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   685,     0,     0,
     687,   838,   839,     0,     0,     0,     0,   139,   139,     0,
       0,     0,   846,     0,     0,     0,     0,   443,     0,     0,
       0,   508,     0,     0,     0,   705,   139,   859,   139,     0,
     139,     0,   139,     0,   490,     0,     0,     0,   443,     0,
       0,     0,   866,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   490,     0,     0,   443,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,     0,   247,   443,   443,     0,     0,     0,
       0,     0,     0,   139,     0,     0,   443,   320,     0,     0,
     293,     0,     0,     0,     0,     0,     0,     0,   774,     0,
       0,   443,   139,     0,     0,     0,     0,     0,     0,     0,
       0,   490,     0,     0,   139,     0,   443,     0,   466,     0,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,    97,   247,     0,     0,
       0,    97,    97,     0,     0,     0,     0,     0,   139,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     603,   606,     0,     0,     0,   139,     0,     0,     0,     0,
       0,     0,     0,     0,   832,     0,     0,     0,     0,   622,
       0,   462,     0,   466,     0,   466,     0,     0,     0,     0,
       0,     0,   490,     0,     0,     0,     0,     0,     0,   637,
       0,   847,     0,     0,     0,    97,     0,     0,     0,     0,
       0,     0,     0,     0,   490,   490,     0,     0,     0,     0,
     490,   490,     0,   490,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    97,     0,   671,     0,     5,     6,
       7,     8,     9,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,   462,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   466,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
      28,   606,     0,     0,    29,    30,    31,    32,    33,     0,
      34,     0,     0,     0,    35,    36,    37,    38,   466,    39,
       0,    40,     0,    41,     0,     0,    42,     0,     0,     0,
      43,    44,    45,    46,    47,    48,    49,     0,    50,    51,
      52,     0,     0,     0,    53,    54,    55,     0,    56,    57,
      58,    59,    60,    61,     0,     0,     0,     0,    62,    63,
      64,    65,    66,    67,    68,     5,     6,     7,     8,     9,
       0,    69,     0,     0,    10,     0,    70,    71,    72,    73,
       0,     0,     0,    74,     0,    75,    76,     0,    77,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,    28,     0,     0,
       0,    29,    30,    31,    32,    33,     0,    34,     0,     0,
       0,    35,    36,    37,    38,     0,    39,     0,    40,     0,
      41,     0,     0,    42,     0,     0,     0,    43,    44,    45,
      46,     0,    48,    49,     0,    50,     0,    52,     0,     0,
       0,    53,    54,    55,     0,    56,    57,    58,   480,    60,
      61,     0,     0,     0,     0,    62,    63,    64,    65,    66,
      67,    68,     0,     0,     0,     0,     0,     0,    69,     0,
       0,     0,     0,   113,    71,    72,    73,     0,     0,     0,
      74,     0,    75,    76,     0,    77,    78,    79,     5,     6,
       7,     8,     9,     0,     0,     0,     0,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   609,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
      28,     0,     0,     0,    29,    30,    31,    32,    33,     0,
      34,     0,     0,     0,    35,    36,    37,    38,     0,    39,
       0,    40,     0,    41,     0,     0,    42,     0,     0,     0,
      43,    44,    45,    46,     0,    48,    49,     0,    50,     0,
      52,     0,     0,     0,     0,     0,    55,     0,    56,    57,
      58,     0,     0,     0,     0,     0,     0,     0,    62,    63,
      64,    65,    66,    67,    68,     0,     0,     0,     0,     0,
       0,    69,     0,     0,     0,     0,   113,    71,    72,    73,
       0,     0,     0,    74,     0,    75,    76,     0,    77,    78,
      79,     5,     6,     7,     8,     9,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   665,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,    27,    28,     0,     0,     0,    29,    30,    31,
      32,    33,     0,    34,     0,     0,     0,    35,    36,    37,
      38,     0,    39,     0,    40,     0,    41,     0,     0,    42,
       0,     0,     0,    43,    44,    45,    46,     0,    48,    49,
       0,    50,     0,    52,     0,     0,     0,     0,     0,    55,
       0,    56,    57,    58,     0,     0,     0,     0,     0,     0,
       0,    62,    63,    64,    65,    66,    67,    68,     0,     0,
       0,     0,     0,     0,    69,     0,     0,     0,     0,   113,
      71,    72,    73,     0,     0,     0,    74,     0,    75,    76,
       0,    77,    78,    79,     5,     6,     7,     8,     9,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   806,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,    28,     0,     0,     0,
      29,    30,    31,    32,    33,     0,    34,     0,     0,     0,
      35,    36,    37,    38,     0,    39,     0,    40,     0,    41,
       0,     0,    42,     0,     0,     0,    43,    44,    45,    46,
       0,    48,    49,     0,    50,     0,    52,     0,     0,     0,
       0,     0,    55,     0,    56,    57,    58,     0,     0,     0,
       0,     0,     0,     0,    62,    63,    64,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,    69,     0,     0,
       0,     0,   113,    71,    72,    73,     0,     0,     0,    74,
       0,    75,    76,     0,    77,    78,    79,     5,     6,     7,
       8,     9,     0,     0,     0,     0,    10,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     851,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,    25,    26,    27,    28,
       0,     0,     0,    29,    30,    31,    32,    33,     0,    34,
       0,     0,     0,    35,    36,    37,    38,     0,    39,     0,
      40,     0,    41,     0,     0,    42,     0,     0,     0,    43,
      44,    45,    46,     0,    48,    49,     0,    50,     0,    52,
       0,     0,     0,     0,     0,    55,     0,    56,    57,    58,
       0,     0,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,     5,     6,     7,     8,     9,     0,
      69,     0,     0,    10,     0,   113,    71,    72,    73,     0,
       0,     0,    74,     0,    75,    76,     0,    77,    78,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,    28,     0,     0,     0,
      29,    30,    31,    32,    33,     0,    34,     0,     0,     0,
      35,    36,    37,    38,     0,    39,     0,    40,     0,    41,
       0,     0,    42,     0,     0,     0,    43,    44,    45,    46,
       0,    48,    49,     0,    50,     0,    52,     0,     0,     0,
       0,     0,    55,     0,    56,    57,    58,     0,     0,     0,
       0,     0,     0,     0,    62,    63,    64,    65,    66,    67,
      68,     5,     6,     7,     8,     9,     0,    69,     0,     0,
      10,     0,   113,    71,    72,    73,     0,     0,     0,    74,
       0,    75,    76,     0,    77,    78,    79,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,    27,     0,     0,     0,     0,    29,    30,   111,
      32,    33,     0,     0,     0,     0,     0,    35,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,    46,   247,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   112,
       0,     0,    57,    58,     0,     0,     0,     0,     0,     0,
       0,    62,    63,    64,    65,    66,    67,    68,     5,     6,
       7,     8,     9,     0,    69,     0,     0,    10,     0,   113,
      71,    72,    73,     0,     0,     0,    74,     0,   164,     0,
       0,    77,    78,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
       0,     0,     0,     0,    29,    30,   111,    32,    33,     0,
       0,     0,     0,     0,    35,  -408,  -408,  -408,  -408,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,     0,   247,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   112,     0,     0,    57,
      58,     0,     0,     0,     0,     0,     0,     0,    62,    63,
      64,    65,    66,    67,    68,     5,     6,     7,     8,     9,
       0,    69,     0,     0,    10,     0,   113,    71,    72,    73,
       0,     0,     0,    74,     0,   166,     0,     0,    77,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,     0,     0,     0,
       0,    29,    30,   111,    32,    33,     0,     0,     0,     0,
       0,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   112,     0,     0,    57,    58,     0,     0,
       0,     0,     0,     0,     0,    62,    63,    64,    65,    66,
      67,    68,     5,     6,     7,     8,     9,     0,    69,     0,
       0,    10,     0,   113,    71,    72,    73,     0,     0,     0,
      74,     0,   170,     0,     0,    77,    78,    79,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,     0,     0,     0,     0,    29,    30,
     111,    32,    33,     0,     0,     0,     0,     0,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    46,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     112,     0,     0,    57,    58,     0,     0,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,     5,
       6,     7,     8,     9,     0,    69,     0,     0,    10,     0,
     113,    71,    72,    73,     0,     0,     0,    74,   284,     0,
       0,     0,    77,    78,    79,     0,     0,   326,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
      27,     0,     0,     0,     0,    29,    30,   111,    32,    33,
       0,     0,     0,     0,     0,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   112,     0,     0,
      57,    58,     0,     0,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,     5,     6,     7,     8,
       9,     0,    69,     0,     0,    10,     0,   113,    71,    72,
      73,     0,     0,     0,    74,     0,     0,     0,     0,    77,
      78,    79,     0,     0,   389,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,     0,     0,
       0,     0,    29,    30,   111,    32,    33,     0,     0,     0,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   112,     0,     0,    57,    58,     0,
       0,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,     5,     6,     7,     8,     9,     0,    69,
       0,     0,    10,     0,   113,    71,    72,    73,     0,     0,
       0,    74,     0,     0,     0,     0,    77,    78,    79,     0,
       0,   486,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    25,    26,    27,     0,     0,     0,     0,    29,
      30,   111,    32,    33,     0,     0,     0,     0,     0,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,     0,     0,    57,    58,     0,     0,     0,     0,
       0,     0,     0,    62,    63,    64,    65,    66,    67,    68,
       5,     6,     7,     8,     9,     0,    69,     0,     0,    10,
       0,   113,    71,    72,    73,     0,     0,     0,    74,     0,
       0,     0,     0,    77,    78,    79,     0,     0,   551,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,     0,     0,     0,     0,    29,    30,   111,    32,
      33,     0,     0,     0,     0,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,     0,
       0,    57,    58,     0,     0,     0,     0,     0,     0,     0,
      62,    63,    64,    65,    66,    67,    68,     5,     6,     7,
       8,     9,     0,    69,     0,     0,    10,     0,   113,    71,
      72,    73,     0,     0,     0,    74,     0,     0,     0,     0,
      77,    78,    79,     0,     0,   553,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,    25,    26,    27,     0,
       0,     0,     0,    29,    30,   111,    32,    33,     0,     0,
       0,     0,     0,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    46,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   112,     0,     0,    57,    58,
       0,     0,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,     5,     6,     7,     8,     9,     0,
      69,     0,     0,    10,     0,   113,    71,    72,    73,     0,
       0,     0,    74,     0,     0,     0,     0,    77,    78,    79,
       0,     0,   635,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    11,    12,     0,     0,     0,     0,    13,
       0,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    25,    26,    27,     0,     0,     0,     0,
      29,    30,   111,    32,    33,     0,     0,     0,     0,     0,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    46,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   112,     0,     0,    57,    58,     0,     0,     0,
       0,     0,     0,     0,    62,    63,    64,    65,    66,    67,
      68,     5,     6,     7,     8,     9,     0,    69,     0,     0,
      10,     0,   113,    71,    72,    73,     0,     0,     0,    74,
       0,     0,     0,     0,    77,    78,    79,     0,     0,   686,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      11,    12,     0,     0,     0,     0,    13,     0,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,     0,
      25,    26,    27,     0,     0,     0,     0,    29,    30,   111,
      32,    33,     0,     0,     0,     0,     0,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   112,
       0,     0,    57,    58,     0,     0,     0,     0,     0,     0,
       0,    62,    63,    64,    65,    66,    67,    68,     5,     6,
       7,     8,     9,     0,    69,     0,     0,    10,     0,   113,
      71,    72,    73,     0,     0,     0,    74,     0,     0,     0,
       0,    77,    78,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    11,    12,     0,
       0,     0,     0,    13,     0,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,    25,    26,    27,
       0,     0,     0,     0,    29,    30,   111,    32,    33,     0,
       0,     0,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    46,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   112,     0,     0,    57,
      58,     0,     0,     0,     0,     0,     0,     0,    62,    63,
      64,    65,    66,    67,    68,     5,     6,     7,     8,     9,
       0,    69,     0,     0,    10,     0,   113,    71,    72,    73,
       0,     0,     0,    74,     0,     0,     0,     0,    77,    78,
      79,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,    12,     0,     0,     0,     0,
      13,     0,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     0,    25,    26,    27,     0,     0,     0,
       0,    29,    30,   111,   334,    33,     0,     0,     0,     0,
       0,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      46,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   112,     0,     0,    57,    58,     0,     0,
       0,     0,     0,     0,     0,    62,    63,    64,    65,    66,
      67,    68,     0,     0,     0,     0,     0,     0,    69,     0,
       0,     0,     0,   113,    71,    72,    73,   222,   223,   224,
      74,     0,     0,     0,     0,    77,    78,    79,     0,     0,
       0,     0,     0,   225,     0,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,     0,   247,   222,   223,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,     0,   247,   222,
     223,   224,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   225,     0,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,     0,   247,
       0,     0,     0,     0,     0,     0,     0,   222,   223,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   225,   630,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,     0,   247,   222,   223,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   474,     0,     0,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,     0,   247,   222,
     223,   224,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   485,     0,     0,   225,     0,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,     0,   247,
       0,     0,     0,   222,   223,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   225,
     519,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,     0,   247,     0,     0,   222,   223,   224,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   543,   225,   775,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,     0,   247,   222,   223,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   590,   225,     0,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,     0,   247,     0,   222,
     223,   224,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   225,   660,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,     0,   247,
     222,   223,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   225,   776,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,     0,
     247,   222,   223,   224,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   225,   248,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
       0,   247,     0,   222,   223,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   225,
     298,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,     0,   247,   222,   223,   224,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     225,   299,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,     0,   247,   222,   223,   224,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,   305,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,     0,   247,   222,   223,   224,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   225,   345,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,     0,   247,   222,   223,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   225,   414,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,     0,   247,   222,   223,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   225,   424,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,     0,   247,   222,
     223,   224,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   225,   425,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,     0,   247,
     222,   223,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   225,   435,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,     0,
     247,   222,   223,   224,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   225,   525,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
       0,   247,   222,   223,   224,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   225,   716,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,     0,   247,   222,   223,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   225,
     850,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,     0,   247,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   861,   222,   223,   224,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   467,     0,     0,   225,   585,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,     0,   247,   222,   223,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   628,     0,     0,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   224,   247,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   225,     0,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   225,
     247,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,     0,   247,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,     0,   247,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,     0,   247,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,     0,   247
};

static const yytype_int16 yycheck[] =
{
      23,    24,   114,    26,    26,     4,   573,   486,   304,   221,
       4,   569,   247,   571,    26,     8,   526,   423,     8,     8,
       8,     8,   341,    61,    48,    61,     8,     8,    51,     8,
       8,     8,     8,   402,    73,     8,     8,   613,    78,     8,
       8,    26,    61,    61,    71,    71,    63,    70,    61,    90,
      73,   420,   264,   265,    71,     0,    73,    61,   148,    26,
       0,    26,    90,   275,   276,   148,   144,   279,   148,   281,
     148,     8,   551,    71,   553,    73,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    26,    31,
     148,   144,   301,   148,   111,   148,   108,   137,   148,   675,
     148,   677,   140,   144,   140,    71,   315,    71,    71,    73,
     479,   134,   148,   151,   153,   151,   144,   121,   144,    73,
     143,   148,    59,    60,   141,   151,    73,   144,    71,   148,
      73,    73,   151,   151,   692,     8,   153,   161,   151,   151,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    71,   176,    73,   153,   635,   150,   181,   478,
     150,   150,   150,   150,   158,   188,   189,   190,   150,   150,
     149,   149,   149,   149,   732,   198,   149,   149,   201,   737,
     149,   149,    71,    73,   151,   150,    59,    60,    78,   153,
      73,   560,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    31,    31,   153,   686,   718,   221,
     153,   423,   149,   582,   583,    31,    71,    31,    73,   588,
     589,   117,   591,   117,   247,   247,   144,   436,   437,    71,
     148,    73,   151,   148,   153,   247,   221,    71,    59,    60,
     148,   140,    71,    73,    71,   144,    73,    73,   138,   139,
     273,   148,   264,   265,   277,   144,   111,    73,    71,    73,
      73,    74,   247,   275,   276,   155,    71,   279,   123,   281,
     153,   148,   507,    92,    93,    94,   149,   148,   301,   264,
     265,    73,   491,   140,   111,   308,   141,   144,   148,   144,
     275,   276,   315,    71,   279,   124,   281,    71,   153,    73,
     151,   597,   325,   326,   710,   872,   712,   141,   138,   139,
     144,   153,   141,   609,   141,   144,    71,   144,    73,   124,
     149,   530,    71,    42,    43,    73,   153,   536,   352,   150,
      78,   889,    71,   152,    31,   544,   141,   111,    73,   144,
      92,    93,    94,    78,   140,   137,   138,   139,   347,   361,
      69,    70,    71,   347,    59,    60,   111,    71,   144,    73,
      79,    93,    94,    73,   150,   151,   389,   141,    78,   665,
     144,    73,    93,    94,    66,    67,    78,   151,   402,   153,
      42,    43,    44,    45,    46,    47,   141,    49,    73,   144,
     138,   139,   111,    78,   148,   140,   420,   111,   153,   144,
     152,   121,   137,   138,   139,   124,   125,   126,   127,   128,
     129,   423,   140,   436,   437,    66,    67,   136,   441,   144,
     152,    49,   141,   142,   143,   144,   144,   141,   138,   139,
     144,   152,   455,   150,   151,   137,   138,   139,   423,   153,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   140,   138,   139,   479,   144,   140,   140,   755,
     148,   144,   195,   486,   673,   148,   199,   140,   491,   144,
     679,   140,   681,   144,   497,   208,   140,   210,   211,   212,
      66,    67,    68,   121,   507,   507,    59,    60,   140,    92,
      93,    94,   144,   702,   790,   507,   148,   150,   710,   148,
     712,    92,    93,    94,    13,   528,   529,   530,    78,    79,
     806,    23,    24,   536,   150,   538,   812,    90,    66,    67,
      68,   544,   507,    13,   547,   151,   549,   149,   551,   523,
     553,    45,    46,    47,   830,    49,   560,   152,   532,   835,
     154,    71,    71,   567,    26,    82,   569,   148,   571,   758,
     573,   148,   150,   576,     8,   851,    90,    73,   582,   583,
      71,    71,   149,     8,   588,   589,   150,   591,   149,    71,
     779,    13,    61,   152,   119,   871,   119,   873,   156,   148,
     148,   604,    23,    24,   148,    26,    99,   796,   148,   148,
      26,   887,   148,   106,   107,   108,   109,   110,   111,   112,
     623,    13,   898,   144,   148,   140,   600,   816,   817,    71,
     152,    13,   635,   152,   150,   148,   148,     8,   827,    99,
      71,   149,   645,   148,    71,   648,   106,   107,   108,   109,
     110,   111,   112,   842,   137,   102,    13,   156,     8,   152,
      13,   149,   149,   149,   120,   149,   669,   152,   857,   144,
     673,   151,   149,   122,   150,   156,   679,   150,   681,   150,
       8,   122,   149,   686,   148,   150,   152,     8,   149,   692,
     149,   104,   152,    73,   786,    13,     4,     5,     6,   702,
       8,     9,    10,    11,    12,    13,    14,   121,    16,    17,
      18,    19,    20,    21,    22,   121,   149,    25,   710,   149,
     712,   149,    89,   149,    13,   149,   149,    83,    36,   732,
     149,   151,   150,   148,   737,    43,    44,   122,    71,   151,
      98,   150,    50,   150,    73,   710,    98,   712,   106,   107,
     108,   109,   110,   111,   151,   758,    73,    13,   148,   150,
     181,   149,    13,   150,    13,    71,    74,   188,   189,   190,
     749,    73,    13,   152,   148,    68,   779,   198,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
     764,    49,    26,   796,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    73,    73,    71,   117,
      13,   152,   150,   816,   817,    87,    13,   125,   149,    73,
     315,    68,    23,    24,   827,    26,   247,   150,   148,   151,
      26,   150,    85,   102,   149,   148,   152,    73,   152,   842,
      59,    60,   149,   152,   152,   308,   154,   151,   884,   347,
     158,   455,   160,   692,   857,   163,   605,   669,   770,   833,
     774,   648,   313,   736,   750,   654,   617,   760,   347,   872,
     181,   516,    -1,   623,   549,    -1,    -1,    -1,    -1,    -1,
     301,    -1,    -1,    -1,    -1,   193,   889,    -1,   862,   197,
      -1,    -1,    -1,    -1,   315,    -1,    -1,    -1,    -1,   207,
      -1,    -1,    -1,    -1,   325,   326,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   223,    -1,    -1,    -1,    -1,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,    -1,
      -1,   436,   437,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,   262,    -1,    -1,    -1,   266,   267,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   389,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    -1,    -1,   287,
     181,    -1,   290,    -1,    -1,    -1,    -1,   188,   189,   190,
      -1,    -1,    -1,    -1,    -1,    -1,   491,   198,    -1,    -1,
      48,    -1,   310,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   436,   437,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   455,   530,    -1,    -1,    -1,   347,
      -1,   536,    -1,    -1,    -1,    -1,   247,    -1,    -1,   544,
      -1,    -1,    -1,    -1,   362,    -1,   364,    -1,   366,   367,
     368,    -1,    -1,    -1,    -1,   486,    -1,    -1,    -1,    -1,
     491,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   507,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   406,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   528,   529,   530,
      -1,    -1,    -1,   161,    -1,   536,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   544,   325,   326,   547,    -1,   549,    -1,
     551,    -1,   553,   181,    -1,    -1,    -1,    -1,    -1,    -1,
     188,   189,   190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     198,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   467,
      -1,   469,    -1,    -1,    -1,   473,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   673,    -1,
      -1,    -1,    -1,   604,   679,    -1,   681,    -1,   389,    -1,
      -1,    -1,    -1,    -1,    -1,   503,    -1,    -1,    -1,    -1,
      -1,    -1,   623,    -1,    -1,    -1,    -1,   702,   516,   517,
      10,    11,    -1,    -1,   635,   523,    -1,    -1,   526,   527,
      -1,    -1,    -1,    -1,   532,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,   669,    49,
      -1,    -1,   673,    -1,   455,    -1,    -1,    -1,   679,    -1,
     681,    -1,    -1,   758,    -1,   686,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   325,   326,    -1,
      -1,   702,    -1,    -1,   779,   486,    -1,    -1,    -1,    -1,
      -1,   599,   600,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   796,    -1,    -1,   352,    -1,   507,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   625,    -1,    -1,
     628,   816,   817,    -1,    -1,    -1,    -1,   528,   529,    -1,
      -1,    -1,   827,    -1,    -1,    -1,    -1,   758,    -1,    -1,
      -1,   389,    -1,    -1,    -1,   653,   547,   842,   549,    -1,
     551,    -1,   553,    -1,   402,    -1,    -1,    -1,   779,    -1,
      -1,    -1,   857,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   420,    -1,    -1,   796,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,   816,   817,    -1,    -1,    -1,
      -1,    -1,    -1,   604,    -1,    -1,   827,   455,    -1,    -1,
     718,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   726,    -1,
      -1,   842,   623,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   479,    -1,    -1,   635,    -1,   857,    -1,   486,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,   764,    49,    -1,    -1,
      -1,   769,   770,    -1,    -1,    -1,    -1,    -1,   669,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     528,   529,    -1,    -1,    -1,   686,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   802,    -1,    -1,    -1,    -1,   547,
      -1,   549,    -1,   551,    -1,   553,    -1,    -1,    -1,    -1,
      -1,    -1,   560,    -1,    -1,    -1,    -1,    -1,    -1,   567,
      -1,   829,    -1,    -1,    -1,   833,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   582,   583,    -1,    -1,    -1,    -1,
     588,   589,    -1,   591,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   862,    -1,   604,    -1,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   623,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   635,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      65,   669,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      75,    -1,    -1,    -1,    79,    80,    81,    82,   686,    84,
      -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    99,   100,   101,    -1,   103,   104,
     105,    -1,    -1,    -1,   109,   110,   111,    -1,   113,   114,
     115,   116,   117,   118,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,     3,     4,     5,     6,     7,
      -1,   136,    -1,    -1,    12,    -1,   141,   142,   143,   144,
      -1,    -1,    -1,   148,    -1,   150,   151,    -1,   153,   154,
     155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,    65,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    75,    -1,    -1,
      -1,    79,    80,    81,    82,    -1,    84,    -1,    86,    -1,
      88,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,
      98,    -1,   100,   101,    -1,   103,    -1,   105,    -1,    -1,
      -1,   109,   110,   111,    -1,   113,   114,   115,   116,   117,
     118,    -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,
     128,   129,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,    -1,    -1,    -1,
     148,    -1,   150,   151,    -1,   153,   154,   155,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      65,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,
      -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    -1,   100,   101,    -1,   103,    -1,
     105,    -1,    -1,    -1,    -1,    -1,   111,    -1,   113,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
      -1,   136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
      -1,    -1,    -1,   148,    -1,   150,   151,    -1,   153,   154,
     155,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    65,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,
      -1,    -1,    -1,    95,    96,    97,    98,    -1,   100,   101,
      -1,   103,    -1,   105,    -1,    -1,    -1,    -1,    -1,   111,
      -1,   113,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,   124,   125,   126,   127,   128,   129,    -1,    -1,
      -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,   141,
     142,   143,   144,    -1,    -1,    -1,   148,    -1,   150,   151,
      -1,   153,   154,   155,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    84,    -1,    86,    -1,    88,
      -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,
      -1,   100,   101,    -1,   103,    -1,   105,    -1,    -1,    -1,
      -1,    -1,   111,    -1,   113,   114,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,
      -1,    -1,   141,   142,   143,   144,    -1,    -1,    -1,   148,
      -1,   150,   151,    -1,   153,   154,   155,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,    65,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    75,
      -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,    -1,
      86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,
      96,    97,    98,    -1,   100,   101,    -1,   103,    -1,   105,
      -1,    -1,    -1,    -1,    -1,   111,    -1,   113,   114,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,
     126,   127,   128,   129,     3,     4,     5,     6,     7,    -1,
     136,    -1,    -1,    12,    -1,   141,   142,   143,   144,    -1,
      -1,    -1,   148,    -1,   150,   151,    -1,   153,   154,   155,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    84,    -1,    86,    -1,    88,
      -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,
      -1,   100,   101,    -1,   103,    -1,   105,    -1,    -1,    -1,
      -1,    -1,   111,    -1,   113,   114,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,     3,     4,     5,     6,     7,    -1,   136,    -1,    -1,
      12,    -1,   141,   142,   143,   144,    -1,    -1,    -1,   148,
      -1,   150,   151,    -1,   153,   154,   155,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    79,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    98,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
      -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,   124,   125,   126,   127,   128,   129,     3,     4,
       5,     6,     7,    -1,   136,    -1,    -1,    12,    -1,   141,
     142,   143,   144,    -1,    -1,    -1,   148,    -1,   150,    -1,
      -1,   153,   154,   155,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    79,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,     3,     4,     5,     6,     7,
      -1,   136,    -1,    -1,    12,    -1,   141,   142,   143,   144,
      -1,    -1,    -1,   148,    -1,   150,    -1,    -1,   153,   154,
     155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,
     128,   129,     3,     4,     5,     6,     7,    -1,   136,    -1,
      -1,    12,    -1,   141,   142,   143,   144,    -1,    -1,    -1,
     148,    -1,   150,    -1,    -1,   153,   154,   155,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,     3,
       4,     5,     6,     7,    -1,   136,    -1,    -1,    12,    -1,
     141,   142,   143,   144,    -1,    -1,    -1,   148,   149,    -1,
      -1,    -1,   153,   154,   155,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,
     114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
     124,   125,   126,   127,   128,   129,     3,     4,     5,     6,
       7,    -1,   136,    -1,    -1,    12,    -1,   141,   142,   143,
     144,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,   153,
     154,   155,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,     3,     4,     5,     6,     7,    -1,   136,
      -1,    -1,    12,    -1,   141,   142,   143,   144,    -1,    -1,
      -1,   148,    -1,    -1,    -1,    -1,   153,   154,   155,    -1,
      -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,   124,   125,   126,   127,   128,   129,
       3,     4,     5,     6,     7,    -1,   136,    -1,    -1,    12,
      -1,   141,   142,   143,   144,    -1,    -1,    -1,   148,    -1,
      -1,    -1,    -1,   153,   154,   155,    -1,    -1,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,
      -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,     3,     4,     5,
       6,     7,    -1,   136,    -1,    -1,    12,    -1,   141,   142,
     143,   144,    -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,
     153,   154,   155,    -1,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,
     126,   127,   128,   129,     3,     4,     5,     6,     7,    -1,
     136,    -1,    -1,    12,    -1,   141,   142,   143,   144,    -1,
      -1,    -1,   148,    -1,    -1,    -1,    -1,   153,   154,   155,
      -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,     3,     4,     5,     6,     7,    -1,   136,    -1,    -1,
      12,    -1,   141,   142,   143,   144,    -1,    -1,    -1,   148,
      -1,    -1,    -1,    -1,   153,   154,   155,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
      -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,   124,   125,   126,   127,   128,   129,     3,     4,
       5,     6,     7,    -1,   136,    -1,    -1,    12,    -1,   141,
     142,   143,   144,    -1,    -1,    -1,   148,    -1,    -1,    -1,
      -1,   153,   154,   155,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,     3,     4,     5,     6,     7,
      -1,   136,    -1,    -1,    12,    -1,   141,   142,   143,   144,
      -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,   153,   154,
     155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,
      48,    -1,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,    -1,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,
     128,   129,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,
      -1,    -1,    -1,   141,   142,   143,   144,     9,    10,    11,
     148,    -1,    -1,    -1,    -1,   153,   154,   155,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   156,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   152,    -1,    -1,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   152,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,    -1,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     152,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   152,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   152,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   152,    27,    28,    29,
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
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   150,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   150,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   149,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   149,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   149,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   149,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   149,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   149,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   149,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
     149,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   149,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    11,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    25,
      49,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   158,   159,     0,   160,     3,     4,     5,     6,     7,
      12,    42,    43,    48,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    62,    63,    64,    65,    69,
      70,    71,    72,    73,    75,    79,    80,    81,    82,    84,
      86,    88,    91,    95,    96,    97,    98,    99,   100,   101,
     103,   104,   105,   109,   110,   111,   113,   114,   115,   116,
     117,   118,   123,   124,   125,   126,   127,   128,   129,   136,
     141,   142,   143,   144,   148,   150,   151,   153,   154,   155,
     161,   162,   167,   171,   172,   202,   203,   205,   208,   214,
     217,   266,   279,   282,   291,   302,   305,   309,   310,   312,
     313,   319,   320,   321,   322,   323,   324,   325,   331,   341,
     344,    71,   111,   141,   279,   309,   309,   148,   309,   309,
     309,   309,   309,   309,   309,   277,   309,   309,   309,   309,
     309,   309,   309,   141,   144,   161,   291,   312,   313,   321,
     312,   309,   141,   144,   161,   291,   293,   294,   321,   323,
     324,   331,   148,   299,   148,    26,   262,   309,   179,   148,
     148,   148,   189,   148,   150,   309,   150,   309,    71,    71,
     150,   266,   309,   313,   190,   309,   144,   161,   165,   166,
      73,   153,   247,   248,   117,   117,    73,   249,   148,   148,
     148,   148,   148,   148,    73,    78,   137,   138,   139,   337,
     338,   144,   151,   161,   161,   309,   168,   151,    78,   300,
     337,    78,   337,   144,   148,     8,   150,    71,    71,    31,
     204,   140,     9,    10,    11,    25,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    49,   150,    59,
      60,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,   148,   140,   121,    61,   151,   153,   324,
     204,   309,   309,   144,   161,   140,   140,   144,   161,   140,
     269,   140,   121,   324,   149,   309,   309,     8,   150,   171,
     177,   263,   264,   309,   266,   313,   148,   309,   150,   150,
     150,    13,   150,   150,   151,   150,   161,    90,     8,   150,
     151,   310,   313,     8,   150,    13,     8,   150,   200,   201,
     313,   313,   342,   313,   149,   267,    31,   309,   335,   336,
      61,   121,   137,   338,    72,   309,   313,    78,   137,   338,
     161,   164,   150,   151,   148,   149,   152,   169,   309,   154,
     155,    71,   283,    71,   209,   212,    71,   148,    71,   319,
     324,   331,   272,   309,   273,    26,   274,   270,   271,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   309,   293,    31,
     309,   309,   309,   309,   309,   309,   309,   309,   309,   309,
     309,   309,   290,    71,   319,    71,   151,   319,   327,   329,
     330,   309,   326,   309,   149,   161,    71,    71,   161,   319,
     148,   301,   319,   295,   149,   149,   309,    82,   309,   150,
       8,    90,    90,    71,   229,   149,    42,    43,   124,   136,
     141,   144,   161,   291,   302,   303,   304,   168,    90,    71,
     166,   309,   248,   303,    73,     8,   149,     8,   149,   149,
     150,   123,   313,   332,   333,   311,   313,   122,   149,     8,
     307,   339,    71,    61,   152,   152,   148,   159,   163,   285,
     116,   170,   171,   202,   203,   152,    31,   245,   246,   266,
     313,    13,   119,   215,   119,   218,   206,   278,   148,   148,
     324,   309,   309,   276,   309,   309,   309,    63,   313,   245,
     148,   148,   309,   328,   148,   317,    61,   151,   156,   152,
     245,   327,    26,   173,   148,   149,   181,   265,   187,   185,
      13,     8,   149,   184,   303,   303,   148,    78,   144,   161,
     140,   152,    71,   152,    13,   201,   150,   343,   148,     8,
     149,    31,   309,    31,   309,    71,    73,    74,   340,   309,
     284,   152,   159,   245,   148,   311,   149,     8,   303,   216,
     210,   219,   213,   148,   124,   141,   144,   161,   242,   243,
     244,   292,   286,   287,   309,    26,   293,   149,   288,   289,
     152,   318,   314,   326,   309,   149,   296,   175,   171,   180,
     178,   263,   309,   313,    31,   225,   313,   303,    71,    26,
     171,   228,    26,   151,   230,   303,   306,   308,   161,    71,
     102,   303,   313,   334,   333,    13,   311,   311,   122,   156,
     156,   245,   152,   149,   149,    31,   266,   313,   292,   120,
     220,   222,   292,   151,   242,   144,   161,   149,     8,    31,
      73,   245,   245,   275,   268,   245,   245,   245,   315,   156,
     152,   297,   168,   174,   309,    26,   171,   235,   150,   122,
     224,   313,   224,    13,   168,   150,   231,   150,   231,   122,
     149,     8,   307,   148,   332,   309,    31,   309,   152,   149,
     150,   311,   221,   211,     8,   250,   149,   161,   104,   280,
     244,    73,    13,   149,   149,   309,   301,   149,   149,   149,
     121,   316,   121,   298,   176,   236,   149,   168,   182,   225,
     149,   149,   303,    89,   231,    92,    93,    94,   231,   152,
     303,   303,   191,   149,   311,   222,   151,   223,    99,   106,
     107,   108,   109,   110,   111,   112,   152,   251,   256,   257,
     258,   259,   261,   207,   148,   151,    31,    73,    13,   303,
     327,   327,   238,    66,    67,   240,   150,    83,   263,   188,
     186,   150,    92,   150,   309,    26,   150,   234,   152,   122,
     292,   250,   292,    71,    73,   260,   279,   259,     8,   150,
     151,    31,    73,   281,   168,    73,    13,   303,   317,    66,
      67,   241,   148,   171,   150,   149,    26,   171,   227,   227,
     150,   234,   233,   303,   192,   152,    13,    13,     8,   150,
     204,    71,   168,    73,     8,   149,   152,    13,   303,   148,
      26,    68,   309,   183,   168,   232,   168,    73,   303,   303,
      73,    71,    13,   152,    31,    73,   303,   309,   168,   150,
     149,    26,   171,   226,    87,   168,   149,    13,   252,   303,
      73,   149,   237,   168,   150,   193,   303,   148,    26,   171,
      85,   151,   253,   239,   150,   168,   242,   168,   152,   149,
     194,   254,   102,   195,   196,   197,   150,   151,   255,   148,
     197,   168,   292,   152,   198,    73,   149,   199,   151,   168,
     152
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, mvceditor::LexicalAnalyzerClass &analyzer, mvceditor::ObserverQuadClass& observers)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, analyzer, observers)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    mvceditor::LexicalAnalyzerClass &analyzer;
    mvceditor::ObserverQuadClass& observers;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, mvceditor::LexicalAnalyzerClass &analyzer, mvceditor::ObserverQuadClass& observers)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, analyzer, observers)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    mvceditor::LexicalAnalyzerClass &analyzer;
    mvceditor::ObserverQuadClass& observers;
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, mvceditor::LexicalAnalyzerClass &analyzer, mvceditor::ObserverQuadClass& observers)
#else
static void
yy_reduce_print (yyvsp, yyrule, analyzer, observers)
    YYSTYPE *yyvsp;
    int yyrule;
    mvceditor::LexicalAnalyzerClass &analyzer;
    mvceditor::ObserverQuadClass& observers;
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, mvceditor::LexicalAnalyzerClass &analyzer, mvceditor::ObserverQuadClass& observers)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, analyzer, observers)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    mvceditor::LexicalAnalyzerClass &analyzer;
    mvceditor::ObserverQuadClass& observers;
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
int yyparse (mvceditor::LexicalAnalyzerClass &analyzer, mvceditor::ObserverQuadClass& observers);
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
yyparse (mvceditor::LexicalAnalyzerClass &analyzer, mvceditor::ObserverQuadClass& observers)
#else
int
yyparse (analyzer, observers)
    mvceditor::LexicalAnalyzerClass &analyzer;
    mvceditor::ObserverQuadClass& observers;
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
#line 185 "src/language/Php53ParserImpl.y"
    { ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 189 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 189 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 194 "src/language/Php53ParserImpl.y"
    { observers.CurrentQualifiedName.AddName((yyvsp[(1) - (1)])); observers.CurrentQualifiedName.GrabComment((yyvsp[(1) - (1)])); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 195 "src/language/Php53ParserImpl.y"
    { observers.CurrentQualifiedName.AddName((yyvsp[(3) - (3)])); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 199 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 200 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 201 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 202 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 203 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 204 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 205 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 206 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 207 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 208 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 209 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 218 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 219 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 220 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 221 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 225 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 226 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 230 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 230 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 239 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 244 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 245 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 250 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 250 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 250 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 251 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 251 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 251 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 252 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 252 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 252 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 253 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 253 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 253 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 257 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 259 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 261 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 262 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 263 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 263 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 264 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 265 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 266 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 267 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 268 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 269 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 270 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 274 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 275 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 278 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 279 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 280 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 282 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 283 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 284 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 285 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 285 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 287 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 288 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 289 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 290 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 291 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 292 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 293 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 294 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 299 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 300 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 304 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 305 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 310 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 310 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 310 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 320 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 324 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 328 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 333 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 334 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 340 "src/language/Php53ParserImpl.y"
    {
			if ('&' == (yyvsp[(2) - (3)]).Token) {
				observers.CurrentMember.AppendToSignature((yyvsp[(2) - (3)]));
			}
			observers.CurrentMember.GrabMemberName((yyvsp[(3) - (3)]));
			observers.CurrentMember.AppendToSignature((yyvsp[(3) - (3)]));
			observers.CurrentParametersList.Clear();
		;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 351 "src/language/Php53ParserImpl.y"
    {
			observers.CurrentMember.AppendToSignature(observers.CurrentParametersList.ToSignature());
			observers.FunctionFound(observers.CurrentMember);		
		;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 356 "src/language/Php53ParserImpl.y"
    {
			observers.CurrentMember.Clear();
		;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 364 "src/language/Php53ParserImpl.y"
    {
			observers.CurrentClass.GrabClassName((yyvsp[(2) - (2)]));
			observers.CurrentClass.AppendToSignature((yyvsp[(2) - (2)]));
		;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 369 "src/language/Php53ParserImpl.y"
    {
		;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 372 "src/language/Php53ParserImpl.y"
    {
			observers.ClassFound(observers.CurrentClass);
			observers.CurrentMember.Clear();
		;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 377 "src/language/Php53ParserImpl.y"
    {
			observers.ClassEnd();
		;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 382 "src/language/Php53ParserImpl.y"
    {
			observers.CurrentClass.GrabClassName((yyvsp[(2) - (2)]));
			observers.CurrentClass.AppendToSignature((yyvsp[(2) - (2)]));
		;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 387 "src/language/Php53ParserImpl.y"
    {
			
			observers.ClassFound(observers.CurrentClass);
			observers.CurrentMember.Clear();
		;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 393 "src/language/Php53ParserImpl.y"
    {
			observers.ClassEnd();
		;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 400 "src/language/Php53ParserImpl.y"
    { observers.CurrentClass.AppendToSignature((yyvsp[(1) - (1)])); observers.CurrentClass.AppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 401 "src/language/Php53ParserImpl.y"
    { observers.CurrentClass.AppendToSignature((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); observers.CurrentClass.AppendToComment((yyvsp[(1) - (2)])); ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 402 "src/language/Php53ParserImpl.y"
    { observers.CurrentClass.AppendToSignature((yyvsp[(1) - (2)]), (yyvsp[(2) - (2)])); observers.CurrentClass.AppendToComment((yyvsp[(1) - (2)])); ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 406 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 408 "src/language/Php53ParserImpl.y"
    {
			observers.CurrentQualifiedName.Clear();
		;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 412 "src/language/Php53ParserImpl.y"
    { 
			observers.CurrentClass.AppendToSignature((yyvsp[(1) - (3)]));
			observers.CurrentClass.AppendToSignature(observers.CurrentQualifiedName.ToSignature());
		;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 419 "src/language/Php53ParserImpl.y"
    { observers.CurrentClass.AppendToSignature((yyvsp[(1) - (1)])); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 425 "src/language/Php53ParserImpl.y"
    {
			observers.CurrentClass.AppendToSignature((yyvsp[(1) - (1)]));
			observers.CurrentQualifiedName.Clear();
			
		;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 431 "src/language/Php53ParserImpl.y"
    {
		;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 438 "src/language/Php53ParserImpl.y"
    {
			observers.CurrentClass.AppendToSignature((yyvsp[(1) - (1)]));
			observers.CurrentQualifiedName.Clear();
		;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 443 "src/language/Php53ParserImpl.y"
    {
		;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 449 "src/language/Php53ParserImpl.y"
    {
			observers.CurrentClass.AppendToSignature(observers.CurrentQualifiedName.ToSignature());
			observers.CurrentQualifiedName.Clear();
		;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 454 "src/language/Php53ParserImpl.y"
    {
			observers.CurrentClass.AppendToSignature(UNICODE_STRING_SIMPLE(","));
		;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 458 "src/language/Php53ParserImpl.y"
    {
		;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 463 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 464 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 469 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 470 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 492 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 493 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 498 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 499 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 500 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 501 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 506 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 507 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 507 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 508 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 508 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 527 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 527 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 533 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 533 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 556 "src/language/Php53ParserImpl.y"
    { observers.CurrentParametersList.SetName((yyvsp[(2) - (2)]), false); ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 557 "src/language/Php53ParserImpl.y"
    { observers.CurrentParametersList.SetName((yyvsp[(3) - (3)]), true); ;}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 558 "src/language/Php53ParserImpl.y"
    { observers.CurrentParametersList.SetName((yyvsp[(3) - (5)]), true);;}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 559 "src/language/Php53ParserImpl.y"
    { observers.CurrentParametersList.SetName((yyvsp[(2) - (4)]), true); ;}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 560 "src/language/Php53ParserImpl.y"
    { observers.CurrentParametersList.SetName((yyvsp[(4) - (4)]), false); ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 561 "src/language/Php53ParserImpl.y"
    { observers.CurrentParametersList.SetName((yyvsp[(5) - (5)]), true); ;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 562 "src/language/Php53ParserImpl.y"
    { observers.CurrentParametersList.SetName((yyvsp[(5) - (7)]), true); ;}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 563 "src/language/Php53ParserImpl.y"
    { observers.CurrentParametersList.SetName((yyvsp[(4) - (6)]), false); ;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 569 "src/language/Php53ParserImpl.y"
    { 
			observers.CurrentParametersList.Create(); 
		;}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 573 "src/language/Php53ParserImpl.y"
    { 
			observers.CurrentParametersList.Create(); 
			observers.CurrentParametersList.SetOptionalType(observers.CurrentQualifiedName.ToSignature()); 
		;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 578 "src/language/Php53ParserImpl.y"
    { 
			observers.CurrentParametersList.Create(); 
			observers.CurrentParametersList.SetOptionalType((yyvsp[(1) - (1)])); 
		;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 586 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 587 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 592 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 593 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 594 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 595 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 596 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 597 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 601 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 602 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 607 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 608 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 609 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 614 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 615 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 616 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 617 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 630 "src/language/Php53ParserImpl.y"
    {
			observers.CurrentMember.Clear();
		;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 634 "src/language/Php53ParserImpl.y"
    {
			observers.CurrentMember.Clear();
		;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 638 "src/language/Php53ParserImpl.y"
    {
			if ('&' == (yyvsp[(3) - (4)]).Token) {
				observers.CurrentMember.AppendToSignature((yyvsp[(3) - (4)]));
			}
			observers.CurrentMember.GrabMemberName((yyvsp[(4) - (4)]));
			observers.CurrentMember.AppendToSignature((yyvsp[(4) - (4)]));
			observers.CurrentParametersList.Clear();
		;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 647 "src/language/Php53ParserImpl.y"
    {
			observers.CurrentParametersList.Clear();
		;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 652 "src/language/Php53ParserImpl.y"
    {
			observers.CurrentMember.AppendToSignature(observers.CurrentParametersList.ToSignature());
			observers.ClassMemberFound(observers.CurrentMember, false);
		;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 657 "src/language/Php53ParserImpl.y"
    {
			observers.CurrentMember.Clear();
		;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 664 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 665 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 669 "src/language/Php53ParserImpl.y"
    { ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 670 "src/language/Php53ParserImpl.y"
    { observers.CurrentMember.AppendToSignature((yyvsp[(1) - (1)])); ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 674 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 675 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 679 "src/language/Php53ParserImpl.y"
    { ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 680 "src/language/Php53ParserImpl.y"
    {  ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 684 "src/language/Php53ParserImpl.y"
    { observers.CurrentMember.IsPublicMember = true; observers.CurrentMember.AppendToSignature((yyvsp[(1) - (1)])); observers.CurrentMember.AppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 685 "src/language/Php53ParserImpl.y"
    { observers.CurrentMember.IsProtectedMember = true; observers.CurrentMember.AppendToSignature((yyvsp[(1) - (1)])); observers.CurrentMember.AppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 686 "src/language/Php53ParserImpl.y"
    { observers.CurrentMember.IsPrivateMember = true; observers.CurrentMember.AppendToSignature((yyvsp[(1) - (1)])); observers.CurrentMember.AppendToComment((yyvsp[(1) - (1)]));;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 687 "src/language/Php53ParserImpl.y"
    { observers.CurrentMember.IsStaticMember = true; observers.CurrentMember.AppendToSignature((yyvsp[(1) - (1)])); observers.CurrentMember.AppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 688 "src/language/Php53ParserImpl.y"
    { observers.CurrentMember.AppendToSignature((yyvsp[(1) - (1)])); observers.CurrentMember.AppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 689 "src/language/Php53ParserImpl.y"
    { observers.CurrentMember.AppendToSignature((yyvsp[(1) - (1)])); observers.CurrentMember.AppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 694 "src/language/Php53ParserImpl.y"
    {
			observers.CurrentMember.GrabMemberName((yyvsp[(3) - (3)]));
			observers.ClassMemberFound(observers.CurrentMember, true);
		;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 699 "src/language/Php53ParserImpl.y"
    {
			observers.CurrentMember.GrabMemberName((yyvsp[(3) - (5)]));
			observers.ClassMemberFound(observers.CurrentMember, true);
		;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 704 "src/language/Php53ParserImpl.y"
    {
			observers.CurrentMember.GrabMemberName((yyvsp[(1) - (1)]));
			UnicodeString oldSignature = observers.CurrentMember.Signature;
			observers.CurrentMember.AppendToSignature((yyvsp[(1) - (1)]));			
			observers.ClassMemberFound(observers.CurrentMember, true);
			observers.CurrentMember.Signature = oldSignature;
			
		;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 713 "src/language/Php53ParserImpl.y"
    {
			observers.CurrentMember.GrabMemberName((yyvsp[(1) - (3)]));
			UnicodeString oldSignature = observers.CurrentMember.Signature;
			observers.CurrentMember.AppendToSignature((yyvsp[(1) - (3)]));
			observers.ClassMemberFound(observers.CurrentMember, true);
			observers.CurrentMember.Signature = oldSignature;
		;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 724 "src/language/Php53ParserImpl.y"
    {
			observers.CurrentMember.GrabMemberName((yyvsp[(3) - (5)]));
			observers.CurrentMember.AppendToSignature((yyvsp[(3) - (5)]));
			observers.CurrentMember.IsPublicMember = true;
			observers.CurrentMember.IsConstMember = true;
			observers.CurrentMember.IsStaticMember = true; 
			observers.ClassMemberFound(observers.CurrentMember, true);
		;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 733 "src/language/Php53ParserImpl.y"
    {
			observers.CurrentMember.AppendToComment((yyvsp[(1) - (4)]));
			observers.CurrentMember.GrabMemberName((yyvsp[(2) - (4)]));
			observers.CurrentMember.AppendToSignature((yyvsp[(1) - (4)]), (yyvsp[(2) - (4)]));
			observers.CurrentMember.IsPublicMember = true;
			observers.CurrentMember.IsConstMember = true;
			observers.CurrentMember.IsStaticMember = true; 
			observers.ClassMemberFound(observers.CurrentMember, true);
			
			// leave the "const" in the signature for any other constants
			observers.CurrentMember.Signature = *(yyvsp[(1) - (4)]).Lexeme;
		;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 748 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 749 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 754 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 755 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 759 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 759 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 760 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 764 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 764 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 765 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 766 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 767 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 767 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 768 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 769 "src/language/Php53ParserImpl.y"
    { 
			observers.CurrentVariablesList.CreateExpression();
		;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 772 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 773 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 774 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 775 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 776 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 777 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 778 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 779 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 780 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 781 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 782 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 783 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 784 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 785 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 786 "src/language/Php53ParserImpl.y"
    {observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 787 "src/language/Php53ParserImpl.y"
    {observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 788 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 788 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 789 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 789 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 790 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 790 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 791 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 791 "src/language/Php53ParserImpl.y"
    {observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 792 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 793 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 794 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 795 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 796 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 797 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 798 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 799 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 800 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 801 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 802 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 803 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 804 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 805 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 806 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 807 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 808 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 809 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 810 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 811 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 812 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 813 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 814 "src/language/Php53ParserImpl.y"
    {observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 815 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 816 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 817 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 818 "src/language/Php53ParserImpl.y"
    {  ;}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 819 "src/language/Php53ParserImpl.y"
    { ;}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 820 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 821 "src/language/Php53ParserImpl.y"
    {  ;}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 822 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 823 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 824 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 825 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 826 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 827 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 828 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 829 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 830 "src/language/Php53ParserImpl.y"
    {observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 831 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 832 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 832 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 833 "src/language/Php53ParserImpl.y"
    { ;}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 834 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 835 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 836 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 837 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 838 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreateExpression(); ;}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 842 "src/language/Php53ParserImpl.y"
    { observers.CurrentMember.AppendToSignature((yyvsp[(1) - (1)])); observers.CurrentMember.AppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 851 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 852 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 853 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 854 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 859 "src/language/Php53ParserImpl.y"
    {
			observers.CurrentVariablesList.Clear();
		;}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 863 "src/language/Php53ParserImpl.y"
    {
			if (observers.CurrentVariablesList.Variables.size() == (size_t)2) {
				if (observers.CurrentQualifiedName.ToSignature().caseCompare(UNICODE_STRING_SIMPLE("define"), 0) == 0) {
					observers.DefineFound(observers.CurrentVariablesList.Variables[0], 
						observers.CurrentVariablesList.Variables[1], 
						observers.CurrentQualifiedName.Comment);
				}
			}
		;}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 872 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 874 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 875 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 877 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 878 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 880 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 881 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 883 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 884 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 886 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 887 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 889 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 890 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 892 "src/language/Php53ParserImpl.y"
    { ;}
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 896 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 897 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 898 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 899 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 903 "src/language/Php53ParserImpl.y"
    { ;}
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 904 "src/language/Php53ParserImpl.y"
    { ;}
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 905 "src/language/Php53ParserImpl.y"
    { ;}
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 911 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 912 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 917 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 918 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 919 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 920 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 931 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 935 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 936 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 937 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 941 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 942 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 943 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 948 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 949 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 954 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreatePrimitive((yyvsp[(1) - (1)])); ;}
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 955 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreatePrimitive((yyvsp[(1) - (1)])); ;}
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 956 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreatePrimitive((yyvsp[(1) - (1)])); ;}
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 957 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreatePrimitive((yyvsp[(1) - (1)])); ;}
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 958 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreatePrimitive((yyvsp[(1) - (1)])); ;}
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 959 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreatePrimitive((yyvsp[(1) - (1)])); ;}
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 960 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreatePrimitive((yyvsp[(1) - (1)])); ;}
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 961 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreatePrimitive((yyvsp[(1) - (1)])); ;}
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 962 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreatePrimitive((yyvsp[(1) - (1)])); ;}
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 963 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreatePrimitive((yyvsp[(1) - (1)])); ;}
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 964 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreatePrimitive((yyvsp[(1) - (3)])); ;}
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 965 "src/language/Php53ParserImpl.y"
    { observers.CurrentVariablesList.CreatePrimitive((yyvsp[(1) - (2)])); ;}
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 970 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 971 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 972 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 973 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 974 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 975 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 976 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 977 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 981 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 985 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 986 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 987 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 988 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 989 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 990 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 991 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 992 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 997 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 998 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 1007 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 1008 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 1009 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 1010 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 1014 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 1015 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 1020 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 1025 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 1029 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 1037 "src/language/Php53ParserImpl.y"
    { 
		
			;}
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 1041 "src/language/Php53ParserImpl.y"
    { 
			
			;}
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 1045 "src/language/Php53ParserImpl.y"
    {
			;}
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 1050 "src/language/Php53ParserImpl.y"
    { ;}
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 1051 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 1059 "src/language/Php53ParserImpl.y"
    {
		
		;}
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 1065 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 1067 "src/language/Php53ParserImpl.y"
    { ;}
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 1068 "src/language/Php53ParserImpl.y"
    { ;}
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 1072 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 1073 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 1077 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 1078 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 1083 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 1087 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 1088 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 1093 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 1094 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 1095 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 1099 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 1100 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 1101 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 1106 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 1107 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 1111 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 1112 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 1117 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 1118 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 1118 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 1122 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 1123 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 1124 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 1128 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 1129 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 1133 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 1134 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 1144 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 1145 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 1145 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 1146 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 1151 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 1152 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 1156 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 1157 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 1158 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 1159 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 1160 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 1161 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 1162 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 1163 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 1167 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 1168 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 1169 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 1170 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 1176 "src/language/Php53ParserImpl.y"
    { ;}
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 1177 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 1177 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 1178 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 1179 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 1180 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 1181 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 1186 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 1187 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 1188 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 1193 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 1194 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 1195 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 1196 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 1197 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 1198 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 1199 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 1203 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 1204 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 1204 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 470:

/* Line 1455 of yacc.c  */
#line 1208 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 1209 "src/language/Php53ParserImpl.y"
    {;}
    break;



/* Line 1455 of yacc.c  */
#line 6420 "src/language/Php53ParserImpl.cpp"
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
#line 1213 "src/language/Php53ParserImpl.y"


int php53lex(YYSTYPE* value, mvceditor::LexicalAnalyzerClass &analyzer) {
	int ret = analyzer.NextToken();
	value->Init();
	
	// ignore these token; there are no parse rules for them
	if (T_OPEN_TAG == ret) {
		ret = analyzer.NextToken();	
	}
	if (T_DOC_COMMENT == ret) {
			
		value->Comment = new UnicodeString();
		// advance past all DOC comments (there can be more than one consecutive)
		while (T_DOC_COMMENT == ret) {
			analyzer.GetLexeme(*value->Comment);
			ret = analyzer.NextToken();
		}
	}
	if (T_CLOSE_TAG == ret) {
		ret = ';';
	}
	
	value->Lexeme = new UnicodeString();
	analyzer.GetLexeme(*value->Lexeme);	
	value->Pos = analyzer.GetCharacterPosition();
	switch (ret) {
	case T_CONSTANT_ENCAPSED_STRING:
		
		break;
	case T_LNUMBER:
	case T_DNUMBER:
		
		break;
	default:	
		break;
	}
	
	//UFILE* f = u_finit(stdout, NULL, NULL);
	//u_fprintf(f, "lex=%S\n", value->Lexeme->getTerminatedBuffer());
	//u_fclose(f);
	return ret;
}

void php53error(mvceditor::LexicalAnalyzerClass &analyzer, mvceditor::ObserverQuadClass& observers, std::string msg) {
	int capacity = msg.length() + 1;
	int written = u_sprintf(analyzer.ParserError.getBuffer(capacity), "%s", msg.c_str());
	analyzer.ParserError.releaseBuffer(written);
}
