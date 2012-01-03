
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
 
int php53lex(YYSTYPE* value, mvceditor::LexicalAnalyzerClass &analyzer, mvceditor::ObserverQuadClass& observers);
void php53error(mvceditor::LexicalAnalyzerClass &analyzer, mvceditor::ObserverQuadClass& observers, std::string msg);




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
#define YYLAST   7238

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  157
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  129
/* YYNRULES -- Number of rules.  */
#define YYNRULES  412
/* YYNRULES -- Number of states.  */
#define YYNSTATES  842

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
       0,     0,     3,     5,     8,     9,    11,    15,    17,    19,
      21,    26,    30,    36,    41,    45,    48,    52,    54,    56,
      60,    63,    68,    74,    79,    82,    83,    85,    87,    89,
      94,    96,    99,   103,   111,   122,   128,   136,   146,   152,
     155,   159,   162,   166,   169,   173,   177,   181,   185,   189,
     191,   194,   200,   209,   218,   224,   226,   227,   242,   246,
     250,   252,   253,   255,   258,   259,   269,   271,   275,   277,
     279,   281,   282,   284,   285,   286,   298,   299,   300,   310,
     311,   312,   321,   323,   326,   329,   330,   331,   335,   337,
     338,   339,   343,   344,   345,   349,   351,   355,   356,   359,
     361,   364,   366,   371,   373,   378,   380,   385,   389,   395,
     399,   404,   409,   415,   416,   422,   427,   429,   431,   433,
     438,   439,   446,   447,   455,   456,   459,   460,   464,   466,
     467,   470,   474,   480,   485,   490,   496,   504,   511,   512,
     514,   516,   518,   519,   521,   523,   526,   530,   534,   539,
     543,   545,   547,   550,   555,   559,   565,   567,   571,   574,
     575,   579,   582,   583,   584,   595,   597,   601,   603,   605,
     606,   608,   610,   613,   615,   617,   619,   621,   623,   625,
     629,   635,   637,   641,   647,   652,   656,   658,   659,   661,
     665,   667,   674,   678,   683,   690,   694,   697,   701,   705,
     709,   713,   717,   721,   725,   729,   733,   737,   741,   744,
     747,   750,   753,   757,   761,   765,   769,   773,   777,   781,
     785,   789,   793,   797,   801,   805,   809,   813,   817,   820,
     823,   826,   829,   833,   837,   841,   845,   849,   853,   857,
     861,   865,   869,   875,   880,   882,   885,   888,   891,   894,
     897,   900,   903,   906,   909,   911,   916,   920,   923,   933,
     935,   936,   941,   945,   950,   952,   955,   956,   962,   969,
     975,   982,   989,   996,  1003,  1008,  1010,  1012,  1016,  1019,
    1021,  1025,  1028,  1030,  1032,  1037,  1039,  1042,  1043,  1046,
    1047,  1050,  1054,  1055,  1057,  1059,  1060,  1064,  1066,  1068,
    1070,  1072,  1074,  1076,  1078,  1080,  1082,  1084,  1088,  1091,
    1093,  1095,  1099,  1102,  1105,  1108,  1113,  1115,  1119,  1121,
    1123,  1125,  1129,  1132,  1134,  1138,  1142,  1143,  1146,  1147,
    1149,  1155,  1159,  1163,  1165,  1167,  1169,  1171,  1173,  1175,
    1176,  1183,  1185,  1188,  1189,  1193,  1197,  1198,  1200,  1203,
    1207,  1211,  1213,  1215,  1217,  1219,  1222,  1224,  1229,  1234,
    1236,  1238,  1243,  1244,  1246,  1248,  1250,  1255,  1260,  1262,
    1264,  1268,  1270,  1273,  1277,  1279,  1281,  1282,  1288,  1289,
    1290,  1293,  1299,  1303,  1307,  1309,  1316,  1321,  1326,  1329,
    1332,  1335,  1337,  1340,  1342,  1347,  1351,  1355,  1362,  1366,
    1368,  1370,  1372,  1377,  1382,  1385,  1388,  1393,  1396,  1399,
    1401,  1405,  1409
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     158,     0,    -1,   159,    -1,   159,   161,    -1,    -1,    71,
      -1,   160,   144,    71,    -1,   167,    -1,   176,    -1,   177,
      -1,   116,   148,   149,   150,    -1,   141,   160,   150,    -1,
     141,   160,   151,   159,   152,    -1,   141,   151,   159,   152,
      -1,   104,   162,   150,    -1,   164,   150,    -1,   162,     8,
     163,    -1,   163,    -1,   160,    -1,   160,    90,    71,    -1,
     144,   160,    -1,   144,   160,    90,    71,    -1,   164,     8,
      71,    13,   248,    -1,    99,    71,    13,   248,    -1,   165,
     166,    -1,    -1,   167,    -1,   176,    -1,   177,    -1,   116,
     148,   149,   150,    -1,   168,    -1,    71,    26,    -1,   151,
     165,   152,    -1,    65,   148,   254,   149,   167,   206,   208,
      -1,    65,   148,   254,   149,    26,   165,   207,   209,    68,
     150,    -1,    82,   148,   254,   149,   205,    -1,    81,   167,
      82,   148,   254,   149,   150,    -1,    84,   148,   230,   150,
     230,   150,   230,   149,   198,    -1,    91,   148,   254,   149,
     202,    -1,    95,   150,    -1,    95,   254,   150,    -1,    96,
     150,    -1,    96,   254,   150,    -1,   100,   150,    -1,   100,
     232,   150,    -1,   100,   258,   150,    -1,   105,   215,   150,
      -1,   111,   217,   150,    -1,    80,   229,   150,    -1,    75,
      -1,   254,   150,    -1,   113,   148,   174,   149,   150,    -1,
      86,   148,   258,    90,   197,   196,   149,   199,    -1,    86,
     148,   232,    90,   258,   196,   149,   199,    -1,    88,   148,
     201,   149,   200,    -1,   150,    -1,    -1,   101,   151,   165,
     152,   102,   148,   239,    73,   149,   169,   151,   165,   152,
     170,    -1,   103,   254,   150,    -1,    97,    71,   150,    -1,
     171,    -1,    -1,   172,    -1,   171,   172,    -1,    -1,   102,
     148,   239,    73,   149,   173,   151,   165,   152,    -1,   175,
      -1,   174,     8,   175,    -1,   258,    -1,   179,    -1,   182,
      -1,    -1,    31,    -1,    -1,    -1,   233,   178,    71,   180,
     148,   210,   149,   181,   151,   165,   152,    -1,    -1,    -1,
     187,    71,   183,   188,   193,   184,   151,   218,   152,    -1,
      -1,    -1,   190,    71,   185,   191,   186,   151,   218,   152,
      -1,   117,    -1,   110,   117,    -1,   109,   117,    -1,    -1,
      -1,   119,   189,   239,    -1,   118,    -1,    -1,    -1,   119,
     192,   195,    -1,    -1,    -1,   120,   194,   195,    -1,   239,
      -1,   195,     8,   239,    -1,    -1,   122,   197,    -1,   258,
      -1,    31,   258,    -1,   167,    -1,    26,   165,    85,   150,
      -1,   167,    -1,    26,   165,    87,   150,    -1,   167,    -1,
      26,   165,    89,   150,    -1,    71,    13,   248,    -1,   201,
       8,    71,    13,   248,    -1,   151,   203,   152,    -1,   151,
     150,   203,   152,    -1,    26,   203,    92,   150,    -1,    26,
     150,   203,    92,   150,    -1,    -1,   203,    93,   254,   204,
     165,    -1,   203,    94,   204,   165,    -1,    26,    -1,   150,
      -1,   167,    -1,    26,   165,    83,   150,    -1,    -1,   206,
      66,   148,   254,   149,   167,    -1,    -1,   207,    66,   148,
     254,   149,    26,   165,    -1,    -1,    67,   167,    -1,    -1,
      67,    26,   165,    -1,   211,    -1,    -1,   212,    73,    -1,
     212,    31,    73,    -1,   212,    31,    73,    13,   248,    -1,
     212,    73,    13,   248,    -1,   211,     8,   212,    73,    -1,
     211,     8,   212,    31,    73,    -1,   211,     8,   212,    31,
      73,    13,   248,    -1,   211,     8,   212,    73,    13,   248,
      -1,    -1,   239,    -1,   124,    -1,   214,    -1,    -1,   232,
      -1,   258,    -1,    31,   256,    -1,   214,     8,   232,    -1,
     214,     8,   258,    -1,   214,     8,    31,   256,    -1,   215,
       8,   216,    -1,   216,    -1,    73,    -1,   153,   255,    -1,
     153,   151,   254,   152,    -1,   217,     8,    73,    -1,   217,
       8,    73,    13,   248,    -1,    73,    -1,    73,    13,   248,
      -1,   218,   219,    -1,    -1,   223,   227,   150,    -1,   228,
     150,    -1,    -1,    -1,   224,   233,   178,    71,   220,   148,
     210,   149,   221,   222,    -1,   150,    -1,   151,   165,   152,
      -1,   225,    -1,   112,    -1,    -1,   225,    -1,   226,    -1,
     225,   226,    -1,   106,    -1,   107,    -1,   108,    -1,   111,
      -1,   110,    -1,   109,    -1,   227,     8,    73,    -1,   227,
       8,    73,    13,   248,    -1,    73,    -1,    73,    13,   248,
      -1,   228,     8,    71,    13,   248,    -1,    99,    71,    13,
     248,    -1,   229,     8,   254,    -1,   254,    -1,    -1,   231,
      -1,   231,     8,   254,    -1,   254,    -1,   123,   148,   275,
     149,    13,   254,    -1,   258,    13,   254,    -1,   258,    13,
      31,   258,    -1,   258,    13,    31,    63,   240,   246,    -1,
      63,   240,   246,    -1,    62,   254,    -1,   258,    24,   254,
      -1,   258,    23,   254,    -1,   258,    22,   254,    -1,   258,
      21,   254,    -1,   258,    20,   254,    -1,   258,    19,   254,
      -1,   258,    18,   254,    -1,   258,    17,   254,    -1,   258,
      16,   254,    -1,   258,    15,   254,    -1,   258,    14,   254,
      -1,   257,    60,    -1,    60,   257,    -1,   257,    59,    -1,
      59,   257,    -1,   254,    27,   254,    -1,   254,    28,   254,
      -1,   254,     9,   254,    -1,   254,    11,   254,    -1,   254,
      10,   254,    -1,   254,    29,   254,    -1,   254,    31,   254,
      -1,   254,    30,   254,    -1,   254,    44,   254,    -1,   254,
      42,   254,    -1,   254,    43,   254,    -1,   254,    45,   254,
      -1,   254,    46,   254,    -1,   254,    47,   254,    -1,   254,
      41,   254,    -1,   254,    40,   254,    -1,    42,   254,    -1,
      43,   254,    -1,    48,   254,    -1,    50,   254,    -1,   254,
      33,   254,    -1,   254,    32,   254,    -1,   254,    35,   254,
      -1,   254,    34,   254,    -1,   254,    36,   254,    -1,   254,
      39,   254,    -1,   254,    37,   254,    -1,   254,    38,   254,
      -1,   254,    49,   240,    -1,   148,   254,   149,    -1,   254,
      25,   254,    26,   254,    -1,   254,    25,    26,   254,    -1,
     283,    -1,    58,   254,    -1,    57,   254,    -1,    56,   254,
      -1,    55,   254,    -1,    54,   254,    -1,    53,   254,    -1,
      52,   254,    -1,    64,   244,    -1,    51,   254,    -1,   250,
      -1,   124,   148,   278,   149,    -1,   154,   245,   154,    -1,
      12,   254,    -1,   233,   178,   148,   210,   149,   234,   151,
     165,   152,    -1,    98,    -1,    -1,   104,   148,   235,   149,
      -1,   235,     8,    73,    -1,   235,     8,    31,    73,    -1,
      73,    -1,    31,    73,    -1,    -1,   160,   148,   237,   213,
     149,    -1,   141,   144,   160,   148,   213,   149,    -1,   144,
     160,   148,   213,   149,    -1,   238,   140,    71,   148,   213,
     149,    -1,   238,   140,   263,   148,   213,   149,    -1,   265,
     140,    71,   148,   213,   149,    -1,   265,   140,   263,   148,
     213,   149,    -1,   263,   148,   213,   149,    -1,   111,    -1,
     160,    -1,   141,   144,   160,    -1,   144,   160,    -1,   160,
      -1,   141,   144,   160,    -1,   144,   160,    -1,   238,    -1,
     241,    -1,   267,   121,   271,   242,    -1,   267,    -1,   242,
     243,    -1,    -1,   121,   271,    -1,    -1,   148,   149,    -1,
     148,   254,   149,    -1,    -1,    78,    -1,   280,    -1,    -1,
     148,   213,   149,    -1,    69,    -1,    70,    -1,    79,    -1,
     128,    -1,   129,    -1,   143,    -1,   125,    -1,   126,    -1,
     127,    -1,   142,    -1,   136,    78,   137,    -1,   136,   137,
      -1,   247,    -1,   160,    -1,   141,   144,   160,    -1,   144,
     160,    -1,    42,   248,    -1,    43,   248,    -1,   124,   148,
     251,   149,    -1,   249,    -1,   238,   140,    71,    -1,    72,
      -1,   285,    -1,   160,    -1,   141,   144,   160,    -1,   144,
     160,    -1,   247,    -1,   155,   280,   155,    -1,   136,   280,
     137,    -1,    -1,   253,   252,    -1,    -1,     8,    -1,   253,
       8,   248,   122,   248,    -1,   253,     8,   248,    -1,   248,
     122,   248,    -1,   248,    -1,   255,    -1,   232,    -1,   258,
      -1,   258,    -1,   258,    -1,    -1,   266,   121,   271,   262,
     259,   260,    -1,   266,    -1,   260,   261,    -1,    -1,   121,
     271,   262,    -1,   148,   213,   149,    -1,    -1,   268,    -1,
     274,   268,    -1,   238,   140,   263,    -1,   265,   140,   263,
      -1,   268,    -1,   267,    -1,   236,    -1,   268,    -1,   274,
     268,    -1,   264,    -1,   268,    61,   270,   156,    -1,   268,
     151,   254,   152,    -1,   269,    -1,    73,    -1,   153,   151,
     254,   152,    -1,    -1,   254,    -1,   272,    -1,   263,    -1,
     272,    61,   270,   156,    -1,   272,   151,   254,   152,    -1,
     273,    -1,    71,    -1,   151,   254,   152,    -1,   153,    -1,
     274,   153,    -1,   275,     8,   276,    -1,   276,    -1,   258,
      -1,    -1,   123,   148,   277,   275,   149,    -1,    -1,    -1,
     279,   252,    -1,   279,     8,   254,   122,   254,    -1,   279,
       8,   254,    -1,   254,   122,   254,    -1,   254,    -1,   279,
       8,   254,   122,    31,   256,    -1,   279,     8,    31,   256,
      -1,   254,   122,    31,   256,    -1,    31,   256,    -1,   280,
     281,    -1,   280,    78,    -1,   281,    -1,    78,   281,    -1,
      73,    -1,    73,    61,   282,   156,    -1,    73,   121,    71,
      -1,   138,   254,   152,    -1,   138,    72,    61,   254,   156,
     152,    -1,   139,   258,   152,    -1,    71,    -1,    74,    -1,
      73,    -1,   114,   148,   284,   149,    -1,   115,   148,   258,
     149,    -1,     7,   254,    -1,     6,   254,    -1,     5,   148,
     254,   149,    -1,     4,   254,    -1,     3,   254,    -1,   258,
      -1,   284,     8,   258,    -1,   238,   140,    71,    -1,   265,
     140,    71,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   186,   186,   190,   191,   195,   196,   200,   201,   202,
     203,   204,   205,   207,   209,   210,   214,   215,   219,   220,
     221,   222,   226,   227,   231,   232,   236,   237,   238,   239,
     243,   244,   248,   249,   250,   251,   252,   253,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,   273,
     274,   275,   276,   279,   282,   283,   285,   284,   288,   289,
     293,   294,   298,   299,   303,   303,   308,   309,   313,   317,
     321,   325,   326,   330,   331,   330,   336,   337,   336,   339,
     340,   339,   345,   346,   347,   350,   352,   352,   357,   360,
     362,   362,   366,   368,   368,   373,   374,   377,   379,   383,
     384,   388,   389,   393,   394,   398,   399,   403,   404,   408,
     409,   410,   411,   414,   416,   417,   421,   422,   426,   427,
     430,   432,   435,   437,   440,   442,   445,   447,   451,   452,
     457,   458,   459,   460,   461,   462,   463,   464,   469,   470,
     471,   475,   476,   480,   481,   482,   483,   484,   485,   489,
     490,   494,   495,   496,   500,   501,   502,   503,   507,   508,
     512,   513,   514,   515,   514,   520,   521,   525,   526,   529,
     531,   535,   536,   540,   541,   542,   543,   544,   545,   549,
     550,   551,   552,   556,   558,   562,   563,   566,   568,   572,
     573,   577,   578,   579,   580,   581,   582,   583,   584,   585,
     586,   587,   588,   589,   590,   591,   592,   593,   594,   595,
     596,   597,   598,   599,   600,   601,   602,   603,   604,   605,
     606,   607,   608,   609,   610,   611,   612,   613,   614,   615,
     616,   617,   618,   619,   620,   621,   622,   623,   624,   625,
     626,   627,   628,   631,   633,   634,   635,   636,   637,   638,
     639,   640,   641,   642,   643,   644,   645,   646,   647,   653,
     656,   658,   662,   663,   664,   665,   669,   669,   671,   674,
     676,   678,   680,   682,   684,   689,   690,   691,   692,   696,
     697,   698,   702,   703,   707,   709,   713,   714,   718,   721,
     723,   724,   727,   729,   730,   733,   735,   739,   740,   741,
     742,   743,   744,   745,   746,   747,   748,   749,   750,   754,
     755,   756,   757,   758,   759,   760,   761,   765,   769,   770,
     771,   772,   773,   774,   775,   776,   779,   781,   784,   786,
     790,   791,   792,   793,   797,   798,   802,   806,   810,   816,
     814,   818,   822,   823,   827,   832,   833,   837,   838,   842,
     843,   847,   851,   852,   856,   857,   858,   862,   863,   864,
     868,   869,   872,   874,   878,   879,   883,   884,   885,   889,
     890,   894,   895,   899,   900,   904,   905,   905,   906,   909,
     911,   915,   916,   917,   918,   919,   920,   921,   922,   926,
     927,   928,   929,   933,   934,   935,   936,   937,   938,   942,
     943,   944,   949,   950,   951,   952,   953,   954,   955,   959,
     960,   964,   965
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
  "namespace_name", "top_statement", "use_declarations", "use_declaration",
  "constant_declaration", "inner_statement_list", "inner_statement",
  "statement", "unticked_statement", "$@1", "additional_catches",
  "non_empty_additional_catches", "additional_catch", "$@2",
  "unset_variables", "unset_variable", "function_declaration_statement",
  "class_declaration_statement", "is_reference",
  "unticked_function_declaration_statement", "$@3", "$@4",
  "unticked_class_declaration_statement", "$@5", "$@6", "$@7", "$@8",
  "class_entry_type", "extends_from", "$@9", "interface_entry",
  "interface_extends_list", "$@10", "implements_list", "$@11",
  "interface_list", "foreach_optional_arg", "foreach_variable",
  "for_statement", "foreach_statement", "declare_statement",
  "declare_list", "switch_case_list", "case_list", "case_separator",
  "while_statement", "elseif_list", "new_elseif_list", "else_single",
  "new_else_single", "parameter_list", "non_empty_parameter_list",
  "optional_class_type", "function_call_parameter_list",
  "non_empty_function_call_parameter_list", "global_var_list",
  "global_var", "static_var_list", "class_statement_list",
  "class_statement", "$@12", "$@13", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "echo_expr_list", "for_expr", "non_empty_for_expr",
  "expr_without_variable", "function", "lexical_vars", "lexical_var_list",
  "function_call", "$@14", "class_name", "fully_qualified_class_name",
  "class_name_reference", "dynamic_class_name_reference",
  "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable", "$@15",
  "variable_properties", "variable_property", "method_or_not",
  "variable_without_objects", "static_member", "variable_class_name",
  "base_variable_with_function_calls", "base_variable",
  "reference_variable", "compound_variable", "dim_offset",
  "object_property", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "$@16", "array_pair_list",
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
       0,   157,   158,   159,   159,   160,   160,   161,   161,   161,
     161,   161,   161,   161,   161,   161,   162,   162,   163,   163,
     163,   163,   164,   164,   165,   165,   166,   166,   166,   166,
     167,   167,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   169,   168,   168,   168,
     170,   170,   171,   171,   173,   172,   174,   174,   175,   176,
     177,   178,   178,   180,   181,   179,   183,   184,   182,   185,
     186,   182,   187,   187,   187,   188,   189,   188,   190,   191,
     192,   191,   193,   194,   193,   195,   195,   196,   196,   197,
     197,   198,   198,   199,   199,   200,   200,   201,   201,   202,
     202,   202,   202,   203,   203,   203,   204,   204,   205,   205,
     206,   206,   207,   207,   208,   208,   209,   209,   210,   210,
     211,   211,   211,   211,   211,   211,   211,   211,   212,   212,
     212,   213,   213,   214,   214,   214,   214,   214,   214,   215,
     215,   216,   216,   216,   217,   217,   217,   217,   218,   218,
     219,   219,   220,   221,   219,   222,   222,   223,   223,   224,
     224,   225,   225,   226,   226,   226,   226,   226,   226,   227,
     227,   227,   227,   228,   228,   229,   229,   230,   230,   231,
     231,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   232,   232,   232,   232,   232,   233,
     234,   234,   235,   235,   235,   235,   237,   236,   236,   236,
     236,   236,   236,   236,   236,   238,   238,   238,   238,   239,
     239,   239,   240,   240,   241,   241,   242,   242,   243,   244,
     244,   244,   245,   245,   245,   246,   246,   247,   247,   247,
     247,   247,   247,   247,   247,   247,   247,   247,   247,   248,
     248,   248,   248,   248,   248,   248,   248,   249,   250,   250,
     250,   250,   250,   250,   250,   250,   251,   251,   252,   252,
     253,   253,   253,   253,   254,   254,   255,   256,   257,   259,
     258,   258,   260,   260,   261,   262,   262,   263,   263,   264,
     264,   265,   266,   266,   267,   267,   267,   268,   268,   268,
     269,   269,   270,   270,   271,   271,   272,   272,   272,   273,
     273,   274,   274,   275,   275,   276,   277,   276,   276,   278,
     278,   279,   279,   279,   279,   279,   279,   279,   279,   280,
     280,   280,   280,   281,   281,   281,   281,   281,   281,   282,
     282,   282,   283,   283,   283,   283,   283,   283,   283,   284,
     284,   285,   285
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     3,     1,     1,     1,
       4,     3,     5,     4,     3,     2,     3,     1,     1,     3,
       2,     4,     5,     4,     2,     0,     1,     1,     1,     4,
       1,     2,     3,     7,    10,     5,     7,     9,     5,     2,
       3,     2,     3,     2,     3,     3,     3,     3,     3,     1,
       2,     5,     8,     8,     5,     1,     0,    14,     3,     3,
       1,     0,     1,     2,     0,     9,     1,     3,     1,     1,
       1,     0,     1,     0,     0,    11,     0,     0,     9,     0,
       0,     8,     1,     2,     2,     0,     0,     3,     1,     0,
       0,     3,     0,     0,     3,     1,     3,     0,     2,     1,
       2,     1,     4,     1,     4,     1,     4,     3,     5,     3,
       4,     4,     5,     0,     5,     4,     1,     1,     1,     4,
       0,     6,     0,     7,     0,     2,     0,     3,     1,     0,
       2,     3,     5,     4,     4,     5,     7,     6,     0,     1,
       1,     1,     0,     1,     1,     2,     3,     3,     4,     3,
       1,     1,     2,     4,     3,     5,     1,     3,     2,     0,
       3,     2,     0,     0,    10,     1,     3,     1,     1,     0,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     3,
       5,     1,     3,     5,     4,     3,     1,     0,     1,     3,
       1,     6,     3,     4,     6,     3,     2,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       2,     2,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     5,     4,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     4,     3,     2,     9,     1,
       0,     4,     3,     4,     1,     2,     0,     5,     6,     5,
       6,     6,     6,     6,     4,     1,     1,     3,     2,     1,
       3,     2,     1,     1,     4,     1,     2,     0,     2,     0,
       2,     3,     0,     1,     1,     0,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     2,     1,
       1,     3,     2,     2,     2,     4,     1,     3,     1,     1,
       1,     3,     2,     1,     3,     3,     0,     2,     0,     1,
       5,     3,     3,     1,     1,     1,     1,     1,     1,     0,
       6,     1,     2,     0,     3,     3,     0,     1,     2,     3,
       3,     1,     1,     1,     1,     2,     1,     4,     4,     1,
       1,     4,     0,     1,     1,     1,     4,     4,     1,     1,
       3,     1,     2,     3,     1,     1,     0,     5,     0,     0,
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
       0,     0,     0,     0,     0,     0,   289,     0,   297,   298,
       5,   318,   360,    49,   299,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   259,     0,     0,     0,     0,
       0,     0,     0,     0,   275,     0,     0,     0,     0,    82,
      88,     0,     0,   303,   304,   305,   300,   301,     0,     0,
     306,   302,     0,     0,    55,    25,   371,   292,     0,   320,
       3,     0,     7,    30,     8,     9,    69,    70,     0,     0,
     335,    71,   353,     0,   323,   254,     0,   334,     0,   336,
       0,   356,     0,   341,   352,   354,   359,     0,   244,   319,
       5,   275,     0,    71,   408,   407,     0,   405,   404,   257,
     228,   229,   230,   231,   253,   251,   250,   249,   248,   247,
     246,   245,     0,     0,   276,     0,   211,   338,     0,   209,
     196,     0,     0,   276,   282,   295,   283,     0,   285,   354,
       0,     0,   252,     0,    31,     0,   186,     0,     0,   187,
       0,     0,     0,    39,     0,    41,     0,     0,     0,    43,
     335,     0,   336,    25,     0,     0,    18,     0,    17,   151,
       0,     0,   150,    84,    83,   156,     0,     0,     0,     0,
       0,   378,   379,   393,     0,   308,     0,     0,     0,   391,
       0,     4,     0,   322,     0,     0,     0,   293,     0,   294,
       0,     0,     0,   266,     0,    15,    76,    79,    72,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,   210,   208,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   142,     0,     0,   362,     0,   372,   355,     0,
       0,     0,   278,     0,     0,     0,   278,     0,   142,   195,
       0,     0,   355,   290,     0,     0,     0,    48,     0,     0,
       0,   188,   190,   335,   336,     0,     0,     0,    40,    42,
      59,     0,    44,    45,     0,    58,    20,     0,     0,    14,
       0,   152,   336,     0,    46,     0,     0,    47,     0,    66,
      68,   409,     0,     0,     0,     0,   375,     0,   374,     0,
     384,     0,   328,     0,     0,   307,   392,   318,     0,     0,
     390,   325,   389,   321,     0,    11,     4,   142,   241,     0,
      32,    24,    26,    27,    28,     0,   256,   324,     6,   142,
       0,    85,    89,    73,   138,   411,   349,   347,     0,   214,
     216,   215,     0,     0,   212,   213,   217,   219,   218,   233,
     232,   235,   234,   236,   238,   239,   237,   227,   226,   221,
     222,   220,   223,   224,   225,   240,     0,   192,   207,   206,
     205,   204,   203,   202,   201,   200,   199,   198,   197,     0,
       0,   141,   335,   336,   412,   350,   369,     0,   365,   346,
     364,   368,   363,     0,     0,   406,   277,     0,     0,   277,
     349,     0,   350,   287,   291,     0,   185,     0,     0,   187,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   310,     0,   309,    23,   316,     0,     0,
      19,    16,     0,   149,   157,   154,     0,     0,     0,   402,
     403,    10,   376,   378,     0,   388,   337,     0,   255,   329,
     380,   399,   401,   400,     0,   395,     0,   396,   398,   142,
      13,     0,     0,     0,   361,     0,     0,    86,    92,    90,
      80,     0,   140,     0,     0,   279,     0,   128,     0,   139,
     142,   142,   348,   243,     0,     0,   193,   145,   274,     0,
     142,   142,     0,   142,   339,   362,     0,   357,   358,   296,
     284,    25,   120,     0,    25,   118,    35,     0,   189,    97,
       0,    97,    99,   107,     0,    25,   105,    54,   113,   113,
      38,   313,   314,   326,     0,     0,   312,     0,     0,    21,
     153,     0,    67,    51,   410,   378,   373,     0,     0,   383,
       0,   382,   394,     0,     0,    12,   269,     0,   267,    22,
       0,    93,    77,     0,     0,   138,     0,   281,   260,   138,
       0,   130,     0,     0,   242,   295,     0,   335,   336,     0,
       0,   370,     0,   343,     0,     0,     0,   286,   122,   124,
       0,     0,   187,     0,     0,   100,     0,     0,     0,   113,
       0,   113,     0,   333,     0,   328,   311,   317,     0,   155,
       0,   191,   387,   386,     0,     0,   268,    29,    87,     0,
       0,    91,    95,   159,     0,   280,     0,     0,     0,   131,
       0,   270,   271,   194,   148,   272,   273,   345,   340,   366,
     367,   288,   126,     0,     0,    33,    36,     0,     0,    98,
       0,     0,   108,     0,     0,     0,     0,     0,     0,   109,
       0,   315,   329,   327,     0,   377,     0,   381,   397,    94,
     159,     0,   169,    74,     0,    25,     0,   134,     0,   133,
       0,   342,     0,     0,     0,     0,   125,   119,     0,    25,
     103,    53,    52,   106,     0,   111,     0,   116,   117,    25,
     110,   332,   331,     0,   385,   169,    96,     0,   173,   174,
     175,   178,   177,   176,   168,    81,   158,     0,     0,   167,
     171,     0,     0,     0,   264,     0,     0,   135,     0,   132,
     346,     0,    25,     0,     0,    25,   101,    37,     0,   112,
      25,   115,     0,    56,    78,     0,   181,     0,    71,   172,
       0,   161,    25,   265,     0,   261,   258,     0,   137,   344,
       0,   127,    34,     0,     0,     0,   114,   330,     0,     0,
       0,     0,   160,     0,     0,     0,     0,   262,   136,     0,
     121,     0,   104,    25,   184,   182,   179,   162,     0,    75,
     263,    25,   102,     0,     0,     0,   183,   123,    61,   180,
     138,     0,    57,    60,    62,     0,     0,    63,   163,     0,
       0,     0,   165,    25,   164,    64,     0,     0,   166,    25,
       0,    65
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    79,    80,   177,   178,    81,   205,   351,
     352,    83,   788,   822,   823,   824,   837,   318,   319,   353,
     354,   219,    86,   501,   742,    87,   361,   640,   362,   584,
      88,   498,   580,    89,   500,   583,   582,   639,   641,   614,
     541,   757,   711,   547,   296,   550,   620,   719,   536,   609,
     662,   665,   704,   506,   507,   508,   410,   411,   181,   182,
     186,   692,   736,   815,   830,   834,   737,   738,   739,   740,
     767,   741,   155,   290,   291,    90,   113,   647,   745,    92,
     359,    93,   509,   145,   146,   530,   607,   152,   208,   279,
      94,   456,   457,    95,   624,   480,   625,    96,    97,   475,
      98,    99,   603,   658,   701,   524,   100,   101,   102,   103,
     104,   105,   106,   423,   419,   420,   421,   107,   327,   328,
     565,   331,   332,   198,   199,   484,   108,   322,   109
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -575
static const yytype_int16 yypact[] =
{
    -575,    53,  1818,  -575,  5911,  5911,   -87,  5911,  5911,  5911,
    5911,  5911,  5911,  5911,  5911,  5911,  5911,  5911,  5911,  5911,
    5911,  5911,   319,   319,  5911,   414,   -70,   -59,  -575,  -575,
      71,  -575,  -575,  -575,  -575,  5911,  4234,   -38,   -36,    41,
      49,    80,  4361,  4488,   179,  -575,   183,  4615,   118,  5911,
     105,   -47,   155,   157,   212,   145,   200,   206,   220,  -575,
    -575,   227,   232,  -575,  -575,  -575,  -575,  -575,   340,   143,
    -575,  -575,   327,  5911,  -575,  -575,   249,   336,   365,   -72,
    -575,    12,  -575,  -575,  -575,  -575,  -575,  -575,   339,   341,
    -575,   386,  -575,   275,  -575,  -575,  6343,  -575,   177,   889,
     271,  -575,   291,   316,  -575,   -40,  -575,   -22,  -575,  -575,
    -575,  -575,   289,   386,  7023,  7023,  5911,  7023,  7023,  7123,
    -575,  -575,   391,  -575,  -575,  -575,  -575,  -575,  -575,  -575,
    -575,  -575,   298,   327,   -86,   305,  -575,  -575,   307,  -575,
    -575,   314,   327,   317,   309,   302,  -575,   325,   346,    43,
     -22,  4742,  -575,  5911,  -575,    14,  7023,   387,  5911,  5911,
    5911,   400,  5911,  -575,  6384,  -575,  6426,   333,   473,  -575,
     338,  7023,   630,  -575,  6467,   327,   -51,    15,  -575,  -575,
     -46,    16,  -575,  -575,  -575,   487,    20,   319,   319,   319,
     349,   230,  4869,    -7,   445,  -575,  6038,   319,   384,  -575,
     327,  -575,    72,   -52,  6508,  1945,  5911,   -18,   370,   464,
     -18,   151,   455,  -575,   463,  -575,  -575,  -575,  -575,   -24,
      52,  5911,  5911,  5911,  5022,  5911,  5911,  5911,  5911,  5911,
    5911,  5911,  5911,  5911,  5911,  5911,  5911,  5911,  5911,  5911,
    5911,  5911,  5911,  5911,  5911,  5911,   414,  -575,  -575,  -575,
    5149,  5911,  5911,  5911,  5911,  5911,  5911,  5911,  5911,  5911,
    5911,  5911,  5276,   122,    55,  5911,  5911,   249,    40,   388,
    6550,   327,   -85,   125,   146,   327,   317,     4,  5276,  -575,
       4,    55,   -32,  -575,  6591,  6633,  5911,  -575,   392,  6675,
     393,   536,  7023,   457,   806,   541,    23,  6716,  -575,  -575,
    -575,   902,  -575,  -575,  2072,  -575,   -42,   478,   105,  -575,
    5911,  -575,  -575,   -47,  -575,   902,   483,  -575,    30,  -575,
    -575,  -575,    32,   410,   412,   416,  -575,    33,  -575,   319,
    6883,   419,   562,   147,   501,  -575,  -575,   514,   287,   428,
    -575,  -575,  -575,   160,  1564,  -575,  -575,  5276,  -575,   439,
    -575,  -575,  -575,  -575,  -575,   890,  -575,  -575,  -575,  5276,
     575,   470,   472,  -575,   267,   447,   448,   -32,   -22,  7063,
    7100,  7123,  5911,  6982,  7168,  7189,  4411,  4538,  1494,  4663,
    4663,  4663,  4663,  1014,  1014,  1014,  1014,   703,   703,   482,
     482,   482,   391,   391,   391,  -575,   129,  7123,  7123,  7123,
    7123,  7123,  7123,  7123,  7123,  7123,  7123,  7123,  7123,   319,
     451,   593,    35,   343,   456,   459,  -575,  5911,  -575,   462,
       8,  -575,  7023,   449,  1207,  -575,   -57,   447,   456,   317,
    -575,   466,  -575,  -575,  -575,  3495,  7023,  5911,  3648,  5911,
    5911,   319,   315,   902,   540,  3801,     7,   902,   902,   465,
     -28,   468,   327,   -50,   480,  -575,  -575,  -575,   516,   550,
    -575,  -575,  6174,  -575,  -575,   611,   319,   475,   319,  -575,
    -575,  -575,  -575,   230,   613,  -575,  -575,  5403,  -575,  5530,
    -575,  -575,  -575,  -575,   467,  -575,  5911,  -575,  -575,  5276,
    -575,  1691,   479,   486,  -575,   490,   902,  -575,   509,  -575,
    -575,   488,  -575,   496,   327,   317,   492,   647,   210,  -575,
    5276,  5276,   -32,  7146,  5911,   414,  -575,  -575,  -575,  5657,
    5276,  5276,  6215,  5276,  -575,  5911,  5911,  -575,  -575,  -575,
     543,  -575,  -575,  6758,  -575,  -575,  -575,   517,  7023,   546,
     319,   546,  -575,  -575,   656,  -575,  -575,  -575,   522,   524,
    -575,  -575,  -575,   902,   545,   327,    67,   609,   537,  -575,
    -575,   902,  -575,  -575,  -575,   230,  -575,  5911,   319,  7023,
     319,  6925,  -575,   107,   539,  -575,  -575,   542,  -575,  -575,
     -11,  -575,  -575,   -11,   553,   267,   327,   317,   587,   311,
     620,   681,   548,   557,  7146,   302,   319,    36,   493,   558,
     559,  -575,   561,  -575,   567,  6256,    55,  -575,  3342,   273,
     574,  2199,  5911,   315,   577,  -575,   578,   902,  2326,  -575,
     312,  -575,   116,   607,   582,   724,    94,  -575,   -11,  -575,
      37,  7123,  -575,  -575,  5784,   581,  -575,  -575,  -575,   -11,
     583,   727,  -575,  -575,   588,   317,   590,   589,   213,   728,
     902,  -575,  -575,  -575,  -575,  -575,  -575,  -575,   632,  -575,
    -575,  -575,   306,   615,  4234,  -575,  -575,   618,   612,  -575,
    3954,  3954,  -575,   628,   485,   631,  5911,    11,   217,  -575,
     902,  -575,   902,  -575,   692,  -575,   319,  7023,  -575,   727,
    -575,   -11,   610,  -575,   240,  -575,   710,   774,   902,  -575,
      55,  -575,   642,   766,   729,  5911,  -575,  -575,  4107,  -575,
    -575,  -575,  -575,  -575,   645,  -575,  6302,  -575,  -575,  -575,
    -575,  -575,   674,   649,  -575,   665,  -575,   730,  -575,  -575,
    -575,  -575,  -575,  -575,  -575,  -575,  -575,   726,   704,   -27,
    -575,    24,   653,   732,  -575,    38,  2453,   795,   902,  -575,
     462,  5911,  -575,   659,  6800,  -575,  -575,  -575,  2580,  -575,
    -575,  3342,   902,  -575,  -575,   797,   799,    28,   386,  -575,
     742,  -575,  -575,  -575,   324,  -575,  -575,   902,  -575,  -575,
    6841,  3342,  -575,  4234,  2707,   664,  3342,  -575,   667,   902,
     902,   743,  -575,   760,   819,  2834,   762,  -575,  -575,   807,
    -575,   686,  -575,  -575,  -575,  -575,   824,  -575,   902,  -575,
    -575,  -575,  -575,  2961,   902,   691,  -575,  3342,   739,  -575,
     267,   694,  -575,   739,  -575,   695,   -11,  -575,  -575,   770,
     234,   696,  -575,  -575,  -575,  -575,  3088,   698,  -575,  -575,
    3215,  -575
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -575,  -575,  -183,   -20,  -575,  -575,   538,  -575,  -138,  -575,
       6,  -575,  -575,  -575,  -575,    45,  -575,  -575,   405,    -1,
       5,  -107,  -575,  -575,  -575,  -575,  -575,  -575,  -575,  -575,
    -575,  -575,  -575,  -575,  -575,  -575,  -575,  -575,   235,   328,
     260,  -575,   204,  -575,  -575,  -575,  -314,   161,  -575,  -575,
    -575,  -575,  -575,  -574,  -575,   290,  -244,  -575,  -575,   568,
    -575,   193,  -575,  -575,  -575,  -575,  -575,  -575,  -575,   141,
    -575,  -575,  -575,  -422,  -575,   192,    -2,  -575,  -575,  -575,
    -575,   190,  -564,  -231,  -575,  -575,  -575,  -575,  -575,   292,
    -216,   -23,  -575,  -575,  -575,   257,  -575,   843,   709,  -395,
     372,   946,  -575,  -575,  -575,   134,  -207,  -575,   985,  -575,
     -13,   -21,  -575,   366,  -271,  -575,  -575,   -16,   329,   420,
    -575,  -575,  -575,   403,   489,  -575,  -575,  -575,  -575
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -352
static const yytype_int16 yytable[] =
{
      91,    84,   134,   134,   149,   143,   269,    85,    82,   150,
     433,   644,   148,   366,   517,   395,   638,   537,   344,   642,
     214,   265,   286,   308,   313,   110,   179,    32,   316,   265,
     176,   444,   770,   548,   431,   304,   791,   717,   466,   307,
     468,   473,   157,  -143,  -146,   473,   774,   363,   459,   202,
     554,    32,   203,     3,   333,   193,   415,   418,   212,   212,
     110,   116,   213,   347,   684,   111,   366,   415,  -276,   525,
     430,  -170,   212,   432,   418,   642,   213,    32,   151,   728,
     729,   730,   731,   732,   733,   455,   268,   212,  -278,   153,
    -276,   489,   212,   212,   212,   132,   347,   154,   133,   455,
    -351,   265,   212,   492,   265,   310,   180,    76,  -347,   195,
     158,   266,   159,   272,   334,   495,   221,   222,   223,   266,
     196,   197,   276,   365,   364,    32,   416,   726,    32,   282,
     503,   267,   224,   504,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   306,   246,    76,   549,   526,
     134,   718,   215,   491,   287,   309,   314,   134,   134,   134,
     317,   134,   445,   632,   771,   633,   110,   134,   792,   467,
     343,   469,   474,  -351,  -143,  -146,   685,   775,  -348,   160,
     668,   266,   515,   414,   266,    32,   427,   161,    32,   367,
     110,   654,    32,    91,   368,    76,   417,  -278,    76,   676,
     677,   212,   135,   135,   110,   144,   212,   428,   481,    32,
     482,   483,   345,   346,   193,   149,   143,   455,   162,   340,
     150,   455,   455,   148,  -277,   622,   248,   249,   212,   170,
     111,   590,   367,   367,   696,   574,   825,   368,   368,   175,
     167,   426,   367,   367,   168,   429,   367,   368,   368,   367,
     367,   368,   829,   635,   368,   368,   592,   593,   679,   173,
     132,   743,   183,   133,   184,    76,   599,   600,    76,   602,
     455,   453,    76,   591,   595,   185,   697,   200,   176,   196,
     197,   724,   464,   187,   201,   453,   221,   222,   223,    76,
    -277,   110,    91,    32,   212,   674,   357,   678,   489,   134,
     676,   677,   224,   744,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   661,   246,   455,   110,   663,
     664,   111,    91,    84,   505,   455,   540,   512,   188,    85,
      82,  -144,   293,   325,   189,   796,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   190,   720,
     135,   132,   702,   703,   133,   191,   134,   135,   135,   135,
     192,   135,   110,    76,   832,   833,   110,   135,    32,   134,
     110,   502,    32,   608,   136,   139,   611,   797,   110,   418,
     206,   455,  -338,  -338,   675,   676,   677,   618,   503,   193,
     216,   504,   217,   193,   207,   220,  -129,   218,   194,   262,
     543,   134,   134,   453,   551,   552,   111,   453,   453,   750,
     111,   263,   556,   200,   455,   502,   144,   264,   193,   487,
     246,   532,   271,   210,   535,   273,   134,   274,   134,   277,
     278,   546,   503,   134,   412,   504,   132,   193,   275,   133,
     132,   212,   340,   133,   455,   280,   455,   281,    76,   288,
     412,   295,    76,   579,   196,   197,   453,   195,   196,   197,
     209,   211,   455,   300,   587,   110,   301,    32,   302,    91,
      84,   454,  -144,   418,   149,   143,    85,    82,   324,   150,
     315,  -147,   148,   196,   197,   454,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   193,   135,
     134,   341,   196,   197,   356,   111,   358,   243,   244,   245,
     623,   246,   455,   453,   360,   626,   364,   193,   629,   412,
     437,   453,   340,   439,   440,   134,   455,   441,   134,   460,
     134,   412,  -338,  -338,   443,   141,   465,   746,   142,   470,
     505,   455,   471,   505,   472,   505,   645,    76,   478,   505,
     479,   758,   485,   455,   455,   486,   134,   714,   676,   677,
     488,   761,   335,   196,   197,   367,   135,   493,   496,   497,
     368,   499,   455,   134,   672,   510,   511,   453,   455,   135,
     518,   519,   196,   197,   520,   527,    91,   521,   505,    91,
     523,   544,   555,   553,   781,   529,    91,   784,   558,   505,
     557,   559,   786,   572,   561,   563,   567,   699,   576,   581,
     453,   135,   135,   454,   795,   577,   585,   454,   454,   578,
     586,   588,  -147,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   589,   135,   721,   135,   722,
     453,   793,   453,   135,   606,   813,   134,   612,   613,   617,
     706,   505,   619,   817,   621,   749,   710,   710,   453,   367,
     627,   412,   335,   336,   368,   628,   454,   342,   636,  -338,
    -338,   646,   637,   649,   650,   836,   336,   651,   342,   336,
     342,   840,   412,   412,   643,   144,   652,   655,   656,   727,
     657,   597,   412,   412,   756,   412,   728,   729,   730,   731,
     732,   733,   734,   659,   666,   778,   670,   671,   453,   680,
     135,   681,   682,   688,   690,   691,   768,   693,   694,   787,
     695,   698,   453,   454,    91,   240,   241,   242,   243,   244,
     245,   454,   246,   700,   798,   135,    91,   453,   135,    91,
     135,   708,   735,   705,   727,   723,   804,   805,   707,   453,
     453,   728,   729,   730,   731,   732,   733,   734,   713,    91,
     303,   715,    91,   747,    91,   816,   135,   748,   453,   800,
     751,   819,   752,    91,   453,   759,   762,   753,   763,   766,
     505,   765,    45,   135,   772,   773,   505,   454,   777,   782,
     789,    91,   790,   794,   802,    91,   806,   764,   803,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   807,   808,   811,    91,   810,   812,   814,    91,   820,
     454,   821,   826,   831,   828,   835,   461,   114,   115,   839,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,  -338,  -338,   140,   827,   616,
     454,   562,   454,   669,   689,   712,   135,   760,   156,   648,
     769,   463,   683,   725,   779,   164,   166,   653,   454,   311,
     171,   604,   174,   566,   630,     0,   442,     0,     0,   221,
     222,   223,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   261,     0,   224,   204,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   454,   246,
       0,     0,     0,     0,   447,   448,     0,     0,  -338,  -338,
       0,     0,   454,     0,     0,     0,     0,     0,     0,   270,
       0,     0,     0,     0,     0,     0,     0,   454,   137,   137,
       0,    28,    29,   110,     0,     0,     0,     0,     0,   454,
     454,    34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   172,   284,     0,   285,     0,   454,     0,
       0,   289,   292,   171,   454,   297,     0,   138,   138,     0,
     147,     0,     0,   111,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   449,    63,    64,    65,
      66,    67,     0,     0,     0,   330,     0,     0,   450,   338,
       0,     0,   494,   451,    70,    71,   452,     0,     0,   355,
    -352,  -352,  -352,  -352,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,   369,   370,   371,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,     0,
       0,     0,     0,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   171,   294,     0,   422,   424,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   171,     0,     0,     0,     0,   312,     0,     0,   436,
       0,     0,     0,   320,   321,   323,     0,   326,     0,     0,
       0,     0,     0,   339,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   462,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   138,     0,     0,     0,     0,
       0,     0,   138,   138,   138,     0,   138,     0,     0,     0,
       0,     0,   138,     0,     0,     0,     0,     0,     0,     0,
     171,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   171,     0,     0,     0,     0,     0,   413,     0,
       0,     0,     0,     0,     0,   513,   221,   222,   223,     0,
       0,     0,     0,     0,   413,     0,     0,     0,     0,     0,
       0,   147,   224,     0,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,     0,     0,     0,
     522,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   476,     0,     0,     0,     0,
     533,     0,   292,   538,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   413,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   413,     0,     0,     0,     0,
       0,     0,     0,     0,   138,     0,     0,     0,     0,     0,
     569,     0,   571,     0,     0,     0,     0,     0,     0,   573,
       0,     0,   171,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   516,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   171,   171,   476,     0,   594,     0,   528,
       0,     0,   171,   171,   171,     0,   171,     0,   422,   605,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   138,     0,     0,     0,     0,     0,   539,   542,     0,
       0,     0,     0,     0,   138,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     631,     0,   320,     0,   564,     0,     0,     0,     0,   326,
       0,     0,     0,     0,     0,     0,   138,   138,     0,     0,
       0,     0,     0,     0,     0,   413,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   138,     0,   138,     0,   292,   413,   413,   138,     0,
       0,     0,     0,     0,     0,   598,   413,   413,     0,   413,
       0,     0,     0,     0,     0,     0,     0,   687,     0,     0,
       0,     0,     0,     0,     0,     0,   615,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     147,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   326,     0,     0,   476,     0,   476,     0,     0,   716,
       0,     0,     0,     0,     0,   138,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   476,   246,     0,     0,     0,     0,   754,     0,
     138,     0,     0,   138,     0,   138,     0,     0,     0,   542,
       0,     0,     0,     0,     0,     0,     0,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,   138,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   780,     0,     0,     0,   138,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,    26,    27,
       0,     0,   476,    28,    29,    30,    31,    32,     0,    33,
       0,     0,     0,    34,    35,    36,    37,     0,    38,     0,
      39,     0,    40,     0,     0,    41,     0,     0,     0,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
       0,   138,     0,    52,    53,    54,     0,    55,    56,    57,
      58,    59,    60,     0,     0,     0,     0,    61,    62,    63,
      64,    65,    66,    67,     4,     5,     6,     7,     8,     0,
      68,     0,     0,     9,     0,    69,    70,    71,    72,     0,
       0,     0,    73,     0,    74,    75,   490,    76,    77,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,    25,    26,    27,     0,     0,     0,
      28,    29,    30,    31,    32,     0,    33,     0,     0,     0,
      34,    35,    36,    37,     0,    38,     0,    39,     0,    40,
       0,     0,    41,     0,     0,     0,    42,    43,    44,    45,
      46,    47,    48,     0,    49,    50,    51,     0,     0,     0,
      52,    53,    54,     0,    55,    56,    57,    58,    59,    60,
       0,     0,     0,     0,    61,    62,    63,    64,    65,    66,
      67,     4,     5,     6,     7,     8,     0,    68,     0,     0,
       9,     0,    69,    70,    71,    72,     0,     0,     0,    73,
       0,    74,    75,   575,    76,    77,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,    26,    27,     0,     0,     0,    28,    29,    30,
      31,    32,     0,    33,     0,     0,     0,    34,    35,    36,
      37,     0,    38,     0,    39,     0,    40,     0,     0,    41,
       0,     0,     0,    42,    43,    44,    45,    46,    47,    48,
       0,    49,    50,    51,     0,     0,     0,    52,    53,    54,
       0,    55,    56,    57,    58,    59,    60,     0,     0,     0,
       0,    61,    62,    63,    64,    65,    66,    67,     4,     5,
       6,     7,     8,     0,    68,     0,     0,     9,     0,    69,
      70,    71,    72,     0,     0,     0,    73,     0,    74,    75,
       0,    76,    77,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,    26,
      27,     0,     0,     0,    28,    29,    30,    31,    32,     0,
      33,     0,     0,     0,    34,    35,    36,    37,     0,    38,
       0,    39,     0,    40,     0,     0,    41,     0,     0,     0,
      42,    43,    44,    45,     0,    47,    48,     0,    49,     0,
      51,     0,     0,     0,    52,    53,    54,     0,    55,    56,
      57,   349,    59,    60,     0,     0,     0,     0,    61,    62,
      63,    64,    65,    66,    67,     4,     5,     6,     7,     8,
       0,    68,     0,     0,     9,     0,   112,    70,    71,    72,
       0,     0,     0,    73,     0,    74,    75,   350,    76,    77,
      78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,    26,    27,     0,     0,
       0,    28,    29,    30,    31,    32,     0,    33,     0,     0,
       0,    34,    35,    36,    37,     0,    38,     0,    39,     0,
      40,     0,     0,    41,     0,     0,     0,    42,    43,    44,
      45,     0,    47,    48,     0,    49,     0,    51,     0,     0,
       0,    52,    53,    54,     0,    55,    56,    57,   349,    59,
      60,     0,     0,     0,     0,    61,    62,    63,    64,    65,
      66,    67,     4,     5,     6,     7,     8,     0,    68,     0,
       0,     9,     0,   112,    70,    71,    72,     0,     0,     0,
      73,     0,    74,    75,   458,    76,    77,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,    25,    26,    27,     0,     0,     0,    28,    29,
      30,    31,    32,     0,    33,     0,     0,     0,    34,    35,
      36,    37,   667,    38,     0,    39,     0,    40,     0,     0,
      41,     0,     0,     0,    42,    43,    44,    45,     0,    47,
      48,     0,    49,     0,    51,     0,     0,     0,    52,    53,
      54,     0,    55,    56,    57,   349,    59,    60,     0,     0,
       0,     0,    61,    62,    63,    64,    65,    66,    67,     4,
       5,     6,     7,     8,     0,    68,     0,     0,     9,     0,
     112,    70,    71,    72,     0,     0,     0,    73,     0,    74,
      75,     0,    76,    77,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
      26,    27,     0,     0,     0,    28,    29,    30,    31,    32,
       0,    33,     0,     0,     0,    34,    35,    36,    37,     0,
      38,     0,    39,     0,    40,   673,     0,    41,     0,     0,
       0,    42,    43,    44,    45,     0,    47,    48,     0,    49,
       0,    51,     0,     0,     0,    52,    53,    54,     0,    55,
      56,    57,   349,    59,    60,     0,     0,     0,     0,    61,
      62,    63,    64,    65,    66,    67,     4,     5,     6,     7,
       8,     0,    68,     0,     0,     9,     0,   112,    70,    71,
      72,     0,     0,     0,    73,     0,    74,    75,     0,    76,
      77,    78,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,    25,    26,    27,     0,
       0,     0,    28,    29,    30,    31,    32,     0,    33,     0,
       0,     0,    34,    35,    36,    37,     0,    38,     0,    39,
       0,    40,     0,     0,    41,     0,     0,     0,    42,    43,
      44,    45,     0,    47,    48,     0,    49,     0,    51,     0,
       0,     0,    52,    53,    54,     0,    55,    56,    57,   349,
      59,    60,     0,     0,     0,     0,    61,    62,    63,    64,
      65,    66,    67,     4,     5,     6,     7,     8,     0,    68,
       0,     0,     9,     0,   112,    70,    71,    72,     0,     0,
       0,    73,     0,    74,    75,   776,    76,    77,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,    26,    27,     0,     0,     0,    28,
      29,    30,    31,    32,     0,    33,     0,     0,     0,    34,
      35,    36,    37,     0,    38,     0,    39,   785,    40,     0,
       0,    41,     0,     0,     0,    42,    43,    44,    45,     0,
      47,    48,     0,    49,     0,    51,     0,     0,     0,    52,
      53,    54,     0,    55,    56,    57,   349,    59,    60,     0,
       0,     0,     0,    61,    62,    63,    64,    65,    66,    67,
       4,     5,     6,     7,     8,     0,    68,     0,     0,     9,
       0,   112,    70,    71,    72,     0,     0,     0,    73,     0,
      74,    75,     0,    76,    77,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,    26,    27,     0,     0,     0,    28,    29,    30,    31,
      32,     0,    33,     0,     0,     0,    34,    35,    36,    37,
       0,    38,   801,    39,     0,    40,     0,     0,    41,     0,
       0,     0,    42,    43,    44,    45,     0,    47,    48,     0,
      49,     0,    51,     0,     0,     0,    52,    53,    54,     0,
      55,    56,    57,   349,    59,    60,     0,     0,     0,     0,
      61,    62,    63,    64,    65,    66,    67,     4,     5,     6,
       7,     8,     0,    68,     0,     0,     9,     0,   112,    70,
      71,    72,     0,     0,     0,    73,     0,    74,    75,     0,
      76,    77,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,    26,    27,
       0,     0,     0,    28,    29,    30,    31,    32,     0,    33,
       0,     0,     0,    34,    35,    36,    37,     0,    38,     0,
      39,     0,    40,     0,     0,    41,     0,     0,     0,    42,
      43,    44,    45,     0,    47,    48,     0,    49,     0,    51,
       0,     0,     0,    52,    53,    54,     0,    55,    56,    57,
     349,    59,    60,     0,     0,     0,     0,    61,    62,    63,
      64,    65,    66,    67,     4,     5,     6,     7,     8,     0,
      68,     0,     0,     9,     0,   112,    70,    71,    72,     0,
       0,     0,    73,     0,    74,    75,   809,    76,    77,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,    25,    26,    27,     0,     0,     0,
      28,    29,    30,    31,    32,     0,    33,     0,     0,     0,
      34,    35,    36,    37,     0,    38,     0,    39,     0,    40,
       0,     0,    41,     0,     0,     0,    42,    43,    44,    45,
       0,    47,    48,     0,    49,     0,    51,     0,     0,     0,
      52,    53,    54,     0,    55,    56,    57,   349,    59,    60,
       0,     0,     0,     0,    61,    62,    63,    64,    65,    66,
      67,     4,     5,     6,     7,     8,     0,    68,     0,     0,
       9,     0,   112,    70,    71,    72,     0,     0,     0,    73,
       0,    74,    75,   818,    76,    77,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,    26,    27,     0,     0,     0,    28,    29,    30,
      31,    32,     0,    33,     0,     0,     0,    34,    35,    36,
      37,     0,    38,     0,    39,     0,    40,     0,     0,    41,
       0,     0,     0,    42,    43,    44,    45,     0,    47,    48,
       0,    49,     0,    51,     0,     0,     0,    52,    53,    54,
       0,    55,    56,    57,   349,    59,    60,     0,     0,     0,
       0,    61,    62,    63,    64,    65,    66,    67,     4,     5,
       6,     7,     8,     0,    68,     0,     0,     9,     0,   112,
      70,    71,    72,     0,     0,     0,    73,     0,    74,    75,
     838,    76,    77,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,    26,
      27,     0,     0,     0,    28,    29,    30,    31,    32,     0,
      33,     0,     0,     0,    34,    35,    36,    37,     0,    38,
       0,    39,     0,    40,     0,     0,    41,     0,     0,     0,
      42,    43,    44,    45,     0,    47,    48,     0,    49,     0,
      51,     0,     0,     0,    52,    53,    54,     0,    55,    56,
      57,   349,    59,    60,     0,     0,     0,     0,    61,    62,
      63,    64,    65,    66,    67,     4,     5,     6,     7,     8,
       0,    68,     0,     0,     9,     0,   112,    70,    71,    72,
       0,     0,     0,    73,     0,    74,    75,   841,    76,    77,
      78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,    26,    27,     0,     0,
       0,    28,    29,    30,    31,    32,     0,    33,     0,     0,
       0,    34,    35,    36,    37,     0,    38,     0,    39,     0,
      40,     0,     0,    41,     0,     0,     0,    42,    43,    44,
      45,     0,    47,    48,     0,    49,     0,    51,     0,     0,
       0,    52,    53,    54,     0,    55,    56,    57,   349,    59,
      60,     0,     0,     0,     0,    61,    62,    63,    64,    65,
      66,    67,     0,     0,     0,     0,     0,     0,    68,     0,
       0,     0,     0,   112,    70,    71,    72,     0,     0,     0,
      73,     0,    74,    75,     0,    76,    77,    78,     4,     5,
       6,     7,     8,     0,     0,     0,     0,     9,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   531,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,    26,
      27,     0,     0,     0,    28,    29,    30,    31,    32,     0,
      33,     0,     0,     0,    34,    35,    36,    37,     0,    38,
       0,    39,     0,    40,     0,     0,    41,     0,     0,     0,
      42,    43,    44,    45,     0,    47,    48,     0,    49,     0,
      51,     0,     0,     0,     0,     0,    54,     0,    55,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    61,    62,
      63,    64,    65,    66,    67,     0,     0,     0,     0,     0,
       0,    68,     0,     0,     0,     0,   112,    70,    71,    72,
       0,     0,     0,    73,     0,    74,    75,     0,    76,    77,
      78,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   534,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,    26,    27,     0,     0,     0,    28,    29,    30,
      31,    32,     0,    33,     0,     0,     0,    34,    35,    36,
      37,     0,    38,     0,    39,     0,    40,     0,     0,    41,
       0,     0,     0,    42,    43,    44,    45,     0,    47,    48,
       0,    49,     0,    51,     0,     0,     0,     0,     0,    54,
       0,    55,    56,    57,     0,     0,     0,     0,     0,     0,
       0,    61,    62,    63,    64,    65,    66,    67,     0,     0,
       0,     0,     0,     0,    68,     0,     0,     0,     0,   112,
      70,    71,    72,     0,     0,     0,    73,     0,    74,    75,
       0,    76,    77,    78,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   545,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,    25,    26,    27,     0,     0,     0,
      28,    29,    30,    31,    32,     0,    33,     0,     0,     0,
      34,    35,    36,    37,     0,    38,     0,    39,     0,    40,
       0,     0,    41,     0,     0,     0,    42,    43,    44,    45,
       0,    47,    48,     0,    49,     0,    51,     0,     0,     0,
       0,     0,    54,     0,    55,    56,    57,     0,     0,     0,
       0,     0,     0,     0,    61,    62,    63,    64,    65,    66,
      67,     0,     0,     0,     0,     0,     0,    68,     0,     0,
       0,     0,   112,    70,    71,    72,     0,     0,     0,    73,
       0,    74,    75,     0,    76,    77,    78,     4,     5,     6,
       7,     8,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     709,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,    26,    27,
       0,     0,     0,    28,    29,    30,    31,    32,     0,    33,
       0,     0,     0,    34,    35,    36,    37,     0,    38,     0,
      39,     0,    40,     0,     0,    41,     0,     0,     0,    42,
      43,    44,    45,     0,    47,    48,     0,    49,     0,    51,
       0,     0,     0,     0,     0,    54,     0,    55,    56,    57,
       0,     0,     0,     0,     0,     0,     0,    61,    62,    63,
      64,    65,    66,    67,     0,     0,     0,     0,     0,     0,
      68,     0,     0,     0,     0,   112,    70,    71,    72,     0,
       0,     0,    73,     0,    74,    75,     0,    76,    77,    78,
       4,     5,     6,     7,     8,     0,     0,     0,     0,     9,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   755,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,    26,    27,     0,     0,     0,    28,    29,    30,    31,
      32,     0,    33,     0,     0,     0,    34,    35,    36,    37,
       0,    38,     0,    39,     0,    40,     0,     0,    41,     0,
       0,     0,    42,    43,    44,    45,     0,    47,    48,     0,
      49,     0,    51,     0,     0,     0,     0,     0,    54,     0,
      55,    56,    57,     0,     0,     0,     0,     0,     0,     0,
      61,    62,    63,    64,    65,    66,    67,     4,     5,     6,
       7,     8,     0,    68,     0,     0,     9,     0,   112,    70,
      71,    72,     0,     0,     0,    73,     0,    74,    75,     0,
      76,    77,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,    26,    27,
       0,     0,     0,    28,    29,    30,    31,    32,     0,    33,
       0,     0,     0,    34,    35,    36,    37,     0,    38,     0,
      39,     0,    40,     0,     0,    41,     0,     0,     0,    42,
      43,    44,    45,     0,    47,    48,     0,    49,     0,    51,
       0,     0,     0,     0,     0,    54,     0,    55,    56,    57,
       0,     0,     0,     0,     0,     0,     0,    61,    62,    63,
      64,    65,    66,    67,     4,     5,     6,     7,     8,     0,
      68,     0,     0,     9,     0,   112,    70,    71,    72,     0,
       0,     0,    73,     0,    74,    75,     0,    76,    77,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,    25,    26,     0,     0,     0,     0,
      28,    29,   110,    31,    32,     0,     0,     0,     0,     0,
      34,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,    45,
     246,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,     0,     0,    56,    57,     0,     0,     0,
       0,     0,     0,     0,    61,    62,    63,    64,    65,    66,
      67,     4,     5,     6,     7,     8,     0,    68,     0,     0,
       9,     0,   112,    70,    71,    72,     0,     0,     0,    73,
       0,   163,     0,     0,    76,    77,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,    26,     0,     0,     0,     0,    28,    29,   110,
      31,    32,     0,     0,     0,     0,     0,    34,     0,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,    45,   246,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   111,
       0,     0,    56,    57,     0,     0,     0,     0,     0,     0,
       0,    61,    62,    63,    64,    65,    66,    67,     4,     5,
       6,     7,     8,     0,    68,     0,     0,     9,     0,   112,
      70,    71,    72,     0,     0,     0,    73,     0,   165,     0,
       0,    76,    77,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,    26,
       0,     0,     0,     0,    28,    29,   110,    31,    32,     0,
       0,     0,     0,     0,    34,  -352,  -352,  -352,  -352,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   111,     0,     0,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    61,    62,
      63,    64,    65,    66,    67,     4,     5,     6,     7,     8,
       0,    68,     0,     0,     9,     0,   112,    70,    71,    72,
       0,     0,     0,    73,     0,   169,     0,     0,    76,    77,
      78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,    26,     0,     0,     0,
       0,    28,    29,   110,    31,    32,     0,     0,     0,     0,
       0,    34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      45,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   111,     0,     0,    56,    57,     0,     0,
       0,     0,     0,     0,     0,    61,    62,    63,    64,    65,
      66,    67,     4,     5,     6,     7,     8,     0,    68,     0,
       0,     9,     0,   112,    70,    71,    72,     0,     0,     0,
      73,   283,     0,     0,     0,    76,    77,    78,     0,     0,
     329,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,    25,    26,     0,     0,     0,     0,    28,    29,
     110,    31,    32,     0,     0,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     111,     0,     0,    56,    57,     0,     0,     0,     0,     0,
       0,     0,    61,    62,    63,    64,    65,    66,    67,     0,
       0,     0,     0,     0,     0,    68,     0,     0,     0,     0,
     112,    70,    71,    72,     0,     0,     0,    73,     0,     0,
       0,     0,    76,    77,    78,     4,     5,     6,     7,     8,
       0,     0,     0,     0,     9,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   372,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,    26,     0,     0,     0,
       0,    28,    29,   110,    31,    32,     0,     0,     0,     0,
       0,    34,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      45,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   111,     0,     0,    56,    57,     0,     0,
       0,     0,     0,     0,     0,    61,    62,    63,    64,    65,
      66,    67,     4,     5,     6,     7,     8,     0,    68,     0,
       0,     9,     0,   112,    70,    71,    72,     0,     0,     0,
      73,     0,     0,     0,     0,    76,    77,    78,     0,     0,
     396,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,    25,    26,     0,     0,     0,     0,    28,    29,
     110,    31,    32,     0,     0,     0,     0,     0,    34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    45,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     111,     0,     0,    56,    57,     0,     0,     0,     0,     0,
       0,     0,    61,    62,    63,    64,    65,    66,    67,     4,
       5,     6,     7,     8,     0,    68,     0,     0,     9,     0,
     112,    70,    71,    72,     0,     0,     0,    73,     0,     0,
       0,     0,    76,    77,    78,     0,     0,   409,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
      26,     0,     0,     0,     0,    28,    29,   110,    31,    32,
       0,     0,     0,     0,     0,    34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   111,     0,     0,
      56,    57,     0,     0,     0,     0,     0,     0,     0,    61,
      62,    63,    64,    65,    66,    67,     4,     5,     6,     7,
       8,     0,    68,     0,     0,     9,     0,   112,    70,    71,
      72,     0,     0,     0,    73,     0,     0,     0,     0,    76,
      77,    78,     0,     0,   568,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,    25,    26,     0,     0,
       0,     0,    28,    29,   110,    31,    32,     0,     0,     0,
       0,     0,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    45,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   111,     0,     0,    56,    57,     0,
       0,     0,     0,     0,     0,     0,    61,    62,    63,    64,
      65,    66,    67,     4,     5,     6,     7,     8,     0,    68,
       0,     0,     9,     0,   112,    70,    71,    72,     0,     0,
       0,    73,     0,     0,     0,     0,    76,    77,    78,     0,
       0,   570,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,    26,     0,     0,     0,     0,    28,
      29,   110,    31,    32,     0,     0,     0,     0,     0,    34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   111,     0,     0,    56,    57,     0,     0,     0,     0,
       0,     0,     0,    61,    62,    63,    64,    65,    66,    67,
       4,     5,     6,     7,     8,     0,    68,     0,     0,     9,
       0,   112,    70,    71,    72,     0,     0,     0,    73,     0,
       0,     0,     0,    76,    77,    78,     0,     0,   596,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,    26,     0,     0,     0,     0,    28,    29,   110,    31,
      32,     0,     0,     0,     0,     0,    34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   111,     0,
       0,    56,    57,     0,     0,     0,     0,     0,     0,     0,
      61,    62,    63,    64,    65,    66,    67,     4,     5,     6,
       7,     8,     0,    68,     0,     0,     9,     0,   112,    70,
      71,    72,     0,     0,     0,    73,     0,     0,     0,     0,
      76,    77,    78,     0,     0,   686,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,    26,     0,
       0,     0,     0,    28,    29,   110,    31,    32,     0,     0,
       0,     0,     0,    34,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,     0,     0,    56,    57,
       0,     0,     0,     0,     0,     0,     0,    61,    62,    63,
      64,    65,    66,    67,     4,     5,     6,     7,     8,     0,
      68,     0,     0,     9,     0,   112,    70,    71,    72,     0,
       0,     0,    73,     0,     0,     0,     0,    76,    77,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,    25,    26,     0,     0,     0,     0,
      28,    29,   110,    31,    32,     0,     0,     0,     0,     0,
      34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,     0,     0,    56,    57,     0,     0,     0,
       0,     0,     0,     0,    61,    62,    63,    64,    65,    66,
      67,     4,     5,     6,     7,     8,     0,    68,     0,     0,
       9,     0,   112,    70,    71,    72,     0,     0,     0,    73,
       0,     0,     0,     0,    76,    77,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,    26,     0,     0,     0,     0,    28,    29,   110,
     337,    32,     0,     0,     0,     0,     0,    34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   111,
       0,     0,    56,    57,     0,     0,     0,     0,     0,     0,
       0,    61,    62,    63,    64,    65,    66,    67,     0,     0,
       0,     0,     0,     0,    68,     0,     0,     0,     0,   112,
      70,    71,    72,   221,   222,   223,    73,     0,     0,     0,
       0,    76,    77,    78,     0,     0,     0,     0,     0,   224,
       0,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,   221,   222,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,     0,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246,   221,   222,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   224,     0,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,     0,     0,     0,     0,
       0,   221,   222,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   560,   224,   717,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,   221,   222,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   601,   224,     0,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   660,   224,
       0,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,     0,   221,   222,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   224,   718,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,   221,   222,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   224,   247,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,   221,   222,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   224,   298,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,     0,   221,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,   299,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   224,   305,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,     0,   221,   222,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   348,   224,     0,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,     0,   221,   222,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   425,
     224,     0,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246,   221,   222,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     434,   224,     0,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,     0,   221,   222,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   435,   224,     0,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,     0,   221,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   438,   224,     0,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   446,   224,     0,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,     0,   221,   222,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   610,   224,     0,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,     0,   221,   222,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   783,
     224,     0,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     799,   221,   222,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   477,     0,   224,   514,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,   221,   222,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   634,   224,     0,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,   222,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   224,     0,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   223,   246,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,     0,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   224,   246,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246
};

static const yytype_int16 yycheck[] =
{
       2,     2,    22,    23,    25,    25,   113,     2,     2,    25,
     281,   585,    25,   220,   409,   246,   580,   439,   201,   583,
       8,    61,     8,     8,     8,    71,    73,    73,     8,    61,
      50,     8,     8,    26,   278,   173,     8,    26,     8,    90,
       8,     8,    36,     8,     8,     8,     8,    71,    90,    69,
      78,    73,    72,     0,    61,    73,   263,   264,   144,   144,
      71,   148,   148,   148,   628,   111,   273,   274,   140,    61,
     277,    98,   144,   280,   281,   639,   148,    73,   148,   106,
     107,   108,   109,   110,   111,   301,   107,   144,   140,   148,
     140,   148,   144,   144,   144,   141,   148,    26,   144,   315,
     140,    61,   144,   347,    61,   151,   153,   153,   148,   137,
     148,   151,   148,   133,   121,   359,     9,    10,    11,   151,
     138,   139,   142,    71,   148,    73,    71,   691,    73,   150,
     141,   153,    25,   144,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,   175,    49,   153,   151,   151,
     180,   150,   150,   346,   150,   150,   150,   187,   188,   189,
     150,   191,   149,   568,   150,   570,    71,   197,   150,   149,
     200,   149,   149,   140,   149,   149,   149,   149,   148,   148,
     612,   151,    63,    71,   151,    73,    71,   148,    73,   220,
      71,   596,    73,   205,   220,   153,   151,   140,   153,    93,
      94,   144,    22,    23,    71,    25,   144,    71,    71,    73,
      73,    74,   150,   151,    73,   246,   246,   443,   148,    78,
     246,   447,   448,   246,   140,   549,    59,    60,   144,    47,
     111,    31,   263,   264,    31,   489,   820,   263,   264,   144,
      71,   271,   273,   274,    71,   275,   277,   273,   274,   280,
     281,   277,   826,   156,   280,   281,   510,   511,   152,   151,
     141,    31,   117,   144,   117,   153,   520,   521,   153,   523,
     496,   301,   153,    73,   515,    73,    73,   144,   308,   138,
     139,   686,   315,   148,   151,   315,     9,    10,    11,   153,
     140,    71,   304,    73,   144,   619,   155,   621,   148,   329,
      93,    94,    25,    73,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,   606,    49,   553,    71,    66,
      67,   111,   344,   344,   364,   561,    31,   368,   148,   344,
     344,     8,   160,   123,   148,    31,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,   148,   152,
     180,   141,    66,    67,   144,   148,   396,   187,   188,   189,
     148,   191,    71,   153,   150,   151,    71,   197,    73,   409,
      71,   124,    73,   531,    22,    23,   534,    73,    71,   606,
     151,   617,    59,    60,    92,    93,    94,   545,   141,    73,
      71,   144,    71,    73,    78,   140,   149,    31,    78,   148,
     443,   441,   442,   443,   447,   448,   111,   447,   448,   700,
     111,   140,   452,   144,   650,   124,   246,   121,    73,   152,
      49,   435,   144,    78,   438,   140,   466,   140,   468,   140,
     148,   445,   141,   473,   262,   144,   141,    73,   144,   144,
     141,   144,    78,   144,   680,   140,   682,   121,   153,    82,
     278,    71,   153,   496,   138,   139,   496,   137,   138,   139,
      77,    78,   698,   150,   504,    71,    13,    73,   150,   491,
     491,   301,   149,   700,   515,   515,   491,   491,   149,   515,
      13,     8,   515,   138,   139,   315,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    73,   329,
     540,   137,   138,   139,   154,   111,    71,    45,    46,    47,
     553,    49,   748,   553,    71,   555,   148,    73,   561,   347,
     148,   561,    78,   150,     8,   565,   762,    90,   568,    71,
     570,   359,    59,    60,    13,   141,    73,   695,   144,   149,
     580,   777,   150,   583,   148,   585,   586,   153,   149,   589,
       8,   709,    71,   789,   790,    61,   596,    92,    93,    94,
     152,   719,   137,   138,   139,   606,   396,   148,    13,   119,
     606,   119,   808,   613,   617,   148,   148,   617,   814,   409,
     149,     8,   138,   139,   148,   156,   608,   148,   628,   611,
     148,    71,   144,   148,   752,   149,   618,   755,   102,   639,
     140,    71,   760,   156,    13,   150,    13,   650,   149,   120,
     650,   441,   442,   443,   772,   149,   148,   447,   448,   149,
     144,   149,   149,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     8,   466,   680,   468,   682,
     680,   768,   682,   473,   121,   803,   686,   150,   122,    13,
     664,   691,   150,   811,   150,   698,   670,   671,   698,   700,
      71,   489,   137,   194,   700,   148,   496,   198,   149,    59,
      60,   104,   150,    73,    13,   833,   207,   149,   209,   210,
     211,   839,   510,   511,   151,   515,   149,   149,   149,    99,
     149,   519,   520,   521,   708,   523,   106,   107,   108,   109,
     110,   111,   112,   156,   150,   748,   149,   149,   748,   122,
     540,   149,     8,   152,   151,     8,   738,   149,   148,   762,
     151,    13,   762,   553,   746,    42,    43,    44,    45,    46,
      47,   561,    49,   121,   777,   565,   758,   777,   568,   761,
     570,   149,   152,   148,    99,    73,   789,   790,   150,   789,
     790,   106,   107,   108,   109,   110,   111,   112,   150,   781,
     150,   150,   784,    73,   786,   808,   596,    13,   808,   783,
     148,   814,    26,   795,   814,   150,   122,    68,   149,    73,
     820,    71,    98,   613,   151,    73,   826,   617,    13,   150,
      13,   813,    13,    71,   150,   817,    73,   152,   151,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    71,    13,    26,   836,    73,   150,    13,   840,   148,
     650,   102,   148,    73,   149,   149,   308,     4,     5,   151,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    59,    60,    24,   823,   541,
     680,   466,   682,   613,   639,   671,   686,   716,    35,   589,
     739,   313,   625,   690,   750,    42,    43,   595,   698,   180,
      47,   525,    49,   473,   565,    -1,    90,    -1,    -1,     9,
      10,    11,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    -1,    25,    73,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,   748,    49,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    59,    60,
      -1,    -1,   762,    -1,    -1,    -1,    -1,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   777,    22,    23,
      -1,    69,    70,    71,    -1,    -1,    -1,    -1,    -1,   789,
     790,    79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,   151,    -1,   153,    -1,   808,    -1,
      -1,   158,   159,   160,   814,   162,    -1,    22,    23,    -1,
      25,    -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,   125,   126,   127,
     128,   129,    -1,    -1,    -1,   192,    -1,    -1,   136,   196,
      -1,    -1,   152,   141,   142,   143,   144,    -1,    -1,   206,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,    -1,
      -1,    -1,    -1,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   160,    -1,   265,   266,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   278,    -1,    -1,    -1,    -1,   180,    -1,    -1,   286,
      -1,    -1,    -1,   187,   188,   189,    -1,   191,    -1,    -1,
      -1,    -1,    -1,   197,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   310,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   180,    -1,    -1,    -1,    -1,
      -1,    -1,   187,   188,   189,    -1,   191,    -1,    -1,    -1,
      -1,    -1,   197,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   359,    -1,    -1,    -1,    -1,    -1,   262,    -1,
      -1,    -1,    -1,    -1,    -1,   372,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,   278,    -1,    -1,    -1,    -1,    -1,
      -1,   246,    25,    -1,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,
     417,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   329,    -1,    -1,    -1,    -1,
     437,    -1,   439,   440,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   347,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   359,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   329,    -1,    -1,    -1,    -1,    -1,
     477,    -1,   479,    -1,    -1,    -1,    -1,    -1,    -1,   486,
      -1,    -1,   489,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   396,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   510,   511,   409,    -1,   514,    -1,   152,
      -1,    -1,   519,   520,   521,    -1,   523,    -1,   525,   526,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   396,    -1,    -1,    -1,    -1,    -1,   441,   442,    -1,
      -1,    -1,    -1,    -1,   409,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     567,    -1,   466,    -1,   468,    -1,    -1,    -1,    -1,   473,
      -1,    -1,    -1,    -1,    -1,    -1,   441,   442,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   489,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   466,    -1,   468,    -1,   612,   510,   511,   473,    -1,
      -1,    -1,    -1,    -1,    -1,   519,   520,   521,    -1,   523,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   634,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   540,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     515,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   565,    -1,    -1,   568,    -1,   570,    -1,    -1,   676,
      -1,    -1,    -1,    -1,    -1,   540,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,   596,    49,    -1,    -1,    -1,    -1,   705,    -1,
     565,    -1,    -1,   568,    -1,   570,    -1,    -1,    -1,   613,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,
      -1,   596,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   751,    -1,    -1,    -1,   613,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,    65,
      -1,    -1,   686,    69,    70,    71,    72,    73,    -1,    75,
      -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,    -1,
      86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,
      96,    97,    98,    99,   100,   101,    -1,   103,   104,   105,
      -1,   686,    -1,   109,   110,   111,    -1,   113,   114,   115,
     116,   117,   118,    -1,    -1,    -1,    -1,   123,   124,   125,
     126,   127,   128,   129,     3,     4,     5,     6,     7,    -1,
     136,    -1,    -1,    12,    -1,   141,   142,   143,   144,    -1,
      -1,    -1,   148,    -1,   150,   151,   152,   153,   154,   155,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    84,    -1,    86,    -1,    88,
      -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,
      99,   100,   101,    -1,   103,   104,   105,    -1,    -1,    -1,
     109,   110,   111,    -1,   113,   114,   115,   116,   117,   118,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,     3,     4,     5,     6,     7,    -1,   136,    -1,    -1,
      12,    -1,   141,   142,   143,   144,    -1,    -1,    -1,   148,
      -1,   150,   151,   152,   153,   154,   155,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    65,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,
      -1,    -1,    -1,    95,    96,    97,    98,    99,   100,   101,
      -1,   103,   104,   105,    -1,    -1,    -1,   109,   110,   111,
      -1,   113,   114,   115,   116,   117,   118,    -1,    -1,    -1,
      -1,   123,   124,   125,   126,   127,   128,   129,     3,     4,
       5,     6,     7,    -1,   136,    -1,    -1,    12,    -1,   141,
     142,   143,   144,    -1,    -1,    -1,   148,    -1,   150,   151,
      -1,   153,   154,   155,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      65,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,
      -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    -1,   100,   101,    -1,   103,    -1,
     105,    -1,    -1,    -1,   109,   110,   111,    -1,   113,   114,
     115,   116,   117,   118,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,     3,     4,     5,     6,     7,
      -1,   136,    -1,    -1,    12,    -1,   141,   142,   143,   144,
      -1,    -1,    -1,   148,    -1,   150,   151,   152,   153,   154,
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
     128,   129,     3,     4,     5,     6,     7,    -1,   136,    -1,
      -1,    12,    -1,   141,   142,   143,   144,    -1,    -1,    -1,
     148,    -1,   150,   151,   152,   153,   154,   155,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    65,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,
      81,    82,    83,    84,    -1,    86,    -1,    88,    -1,    -1,
      91,    -1,    -1,    -1,    95,    96,    97,    98,    -1,   100,
     101,    -1,   103,    -1,   105,    -1,    -1,    -1,   109,   110,
     111,    -1,   113,   114,   115,   116,   117,   118,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,     3,
       4,     5,     6,     7,    -1,   136,    -1,    -1,    12,    -1,
     141,   142,   143,   144,    -1,    -1,    -1,   148,    -1,   150,
     151,    -1,   153,   154,   155,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,
      84,    -1,    86,    -1,    88,    89,    -1,    91,    -1,    -1,
      -1,    95,    96,    97,    98,    -1,   100,   101,    -1,   103,
      -1,   105,    -1,    -1,    -1,   109,   110,   111,    -1,   113,
     114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,   123,
     124,   125,   126,   127,   128,   129,     3,     4,     5,     6,
       7,    -1,   136,    -1,    -1,    12,    -1,   141,   142,   143,
     144,    -1,    -1,    -1,   148,    -1,   150,   151,    -1,   153,
     154,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    65,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    75,    -1,
      -1,    -1,    79,    80,    81,    82,    -1,    84,    -1,    86,
      -1,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,
      97,    98,    -1,   100,   101,    -1,   103,    -1,   105,    -1,
      -1,    -1,   109,   110,   111,    -1,   113,   114,   115,   116,
     117,   118,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,     3,     4,     5,     6,     7,    -1,   136,
      -1,    -1,    12,    -1,   141,   142,   143,   144,    -1,    -1,
      -1,   148,    -1,   150,   151,   152,   153,   154,   155,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,    65,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,
      80,    81,    82,    -1,    84,    -1,    86,    87,    88,    -1,
      -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,    -1,
     100,   101,    -1,   103,    -1,   105,    -1,    -1,    -1,   109,
     110,   111,    -1,   113,   114,   115,   116,   117,   118,    -1,
      -1,    -1,    -1,   123,   124,   125,   126,   127,   128,   129,
       3,     4,     5,     6,     7,    -1,   136,    -1,    -1,    12,
      -1,   141,   142,   143,   144,    -1,    -1,    -1,   148,    -1,
     150,   151,    -1,   153,   154,   155,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    65,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    84,    85,    86,    -1,    88,    -1,    -1,    91,    -1,
      -1,    -1,    95,    96,    97,    98,    -1,   100,   101,    -1,
     103,    -1,   105,    -1,    -1,    -1,   109,   110,   111,    -1,
     113,   114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,     3,     4,     5,
       6,     7,    -1,   136,    -1,    -1,    12,    -1,   141,   142,
     143,   144,    -1,    -1,    -1,   148,    -1,   150,   151,    -1,
     153,   154,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,    65,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    75,
      -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,    -1,
      86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,
      96,    97,    98,    -1,   100,   101,    -1,   103,    -1,   105,
      -1,    -1,    -1,   109,   110,   111,    -1,   113,   114,   115,
     116,   117,   118,    -1,    -1,    -1,    -1,   123,   124,   125,
     126,   127,   128,   129,     3,     4,     5,     6,     7,    -1,
     136,    -1,    -1,    12,    -1,   141,   142,   143,   144,    -1,
      -1,    -1,   148,    -1,   150,   151,   152,   153,   154,   155,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,
      79,    80,    81,    82,    -1,    84,    -1,    86,    -1,    88,
      -1,    -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,
      -1,   100,   101,    -1,   103,    -1,   105,    -1,    -1,    -1,
     109,   110,   111,    -1,   113,   114,   115,   116,   117,   118,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,     3,     4,     5,     6,     7,    -1,   136,    -1,    -1,
      12,    -1,   141,   142,   143,   144,    -1,    -1,    -1,   148,
      -1,   150,   151,   152,   153,   154,   155,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    65,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,
      82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,
      -1,    -1,    -1,    95,    96,    97,    98,    -1,   100,   101,
      -1,   103,    -1,   105,    -1,    -1,    -1,   109,   110,   111,
      -1,   113,   114,   115,   116,   117,   118,    -1,    -1,    -1,
      -1,   123,   124,   125,   126,   127,   128,   129,     3,     4,
       5,     6,     7,    -1,   136,    -1,    -1,    12,    -1,   141,
     142,   143,   144,    -1,    -1,    -1,   148,    -1,   150,   151,
     152,   153,   154,   155,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      65,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,
      -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    -1,   100,   101,    -1,   103,    -1,
     105,    -1,    -1,    -1,   109,   110,   111,    -1,   113,   114,
     115,   116,   117,   118,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,     3,     4,     5,     6,     7,
      -1,   136,    -1,    -1,    12,    -1,   141,   142,   143,   144,
      -1,    -1,    -1,   148,    -1,   150,   151,   152,   153,   154,
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
     126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,
     136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,    -1,
      -1,    -1,   148,    -1,   150,   151,    -1,   153,   154,   155,
       3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    65,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,
      -1,    -1,    95,    96,    97,    98,    -1,   100,   101,    -1,
     103,    -1,   105,    -1,    -1,    -1,    -1,    -1,   111,    -1,
     113,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,     3,     4,     5,
       6,     7,    -1,   136,    -1,    -1,    12,    -1,   141,   142,
     143,   144,    -1,    -1,    -1,   148,    -1,   150,   151,    -1,
     153,   154,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      59,    60,    -1,    62,    63,    64,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      79,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    98,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,     3,     4,     5,     6,     7,    -1,   136,    -1,    -1,
      12,    -1,   141,   142,   143,   144,    -1,    -1,    -1,   148,
      -1,   150,    -1,    -1,   153,   154,   155,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    31,
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
     148,   149,    -1,    -1,    -1,   153,   154,   155,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     111,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,    -1,
      -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,
     141,   142,   143,   144,    -1,    -1,    -1,   148,    -1,    -1,
      -1,    -1,   153,   154,   155,     3,     4,     5,     6,     7,
      -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     148,    -1,    -1,    -1,    -1,   153,   154,   155,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     141,   142,   143,   144,    -1,    -1,    -1,   148,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,   153,   154,   155,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,
      -1,    -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   123,   124,   125,   126,   127,   128,   129,    -1,    -1,
      -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,   141,
     142,   143,   144,     9,    10,    11,   148,    -1,    -1,    -1,
      -1,   153,   154,   155,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   152,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   152,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   150,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   150,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   150,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   150,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   150,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     149,    25,    -1,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   149,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   149,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   149,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   149,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     149,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   122,    -1,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    11,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    25,    49,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   158,   159,     0,     3,     4,     5,     6,     7,    12,
      42,    43,    48,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    62,    63,    64,    65,    69,    70,
      71,    72,    73,    75,    79,    80,    81,    82,    84,    86,
      88,    91,    95,    96,    97,    98,    99,   100,   101,   103,
     104,   105,   109,   110,   111,   113,   114,   115,   116,   117,
     118,   123,   124,   125,   126,   127,   128,   129,   136,   141,
     142,   143,   144,   148,   150,   151,   153,   154,   155,   160,
     161,   164,   167,   168,   176,   177,   179,   182,   187,   190,
     232,   233,   236,   238,   247,   250,   254,   255,   257,   258,
     263,   264,   265,   266,   267,   268,   269,   274,   283,   285,
      71,   111,   141,   233,   254,   254,   148,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   141,   144,   160,   238,   257,   258,   265,   257,
     254,   141,   144,   160,   238,   240,   241,   265,   267,   268,
     274,   148,   244,   148,    26,   229,   254,   167,   148,   148,
     148,   148,   148,   150,   254,   150,   254,    71,    71,   150,
     232,   254,   258,   151,   254,   144,   160,   162,   163,    73,
     153,   215,   216,   117,   117,    73,   217,   148,   148,   148,
     148,   148,   148,    73,    78,   137,   138,   139,   280,   281,
     144,   151,   160,   160,   254,   165,   151,    78,   245,   280,
      78,   280,   144,   148,     8,   150,    71,    71,    31,   178,
     140,     9,    10,    11,    25,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    49,   150,    59,    60,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   148,   140,   121,    61,   151,   153,   268,   178,
     254,   144,   160,   140,   140,   144,   160,   140,   148,   246,
     140,   121,   268,   149,   254,   254,     8,   150,    82,   254,
     230,   231,   254,   232,   258,    71,   201,   254,   150,   150,
     150,    13,   150,   150,   165,   150,   160,    90,     8,   150,
     151,   255,   258,     8,   150,    13,     8,   150,   174,   175,
     258,   258,   284,   258,   149,   123,   258,   275,   276,    31,
     254,   278,   279,    61,   121,   137,   281,    72,   254,   258,
      78,   137,   281,   160,   159,   150,   151,   148,   149,   116,
     152,   166,   167,   176,   177,   254,   154,   155,    71,   237,
      71,   183,   185,    71,   148,    71,   263,   268,   274,   254,
     254,   254,    26,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,   254,
     254,   254,   254,   254,   254,   240,    31,   254,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   254,    31,
     213,   214,   232,   258,    71,   263,    71,   151,   263,   271,
     272,   273,   254,   270,   254,   149,   160,    71,    71,   160,
     263,   213,   263,   271,   149,   149,   254,   148,   149,   150,
       8,    90,    90,    13,     8,   149,   149,    42,    43,   124,
     136,   141,   144,   160,   238,   247,   248,   249,   152,    90,
      71,   163,   254,   216,   248,    73,     8,   149,     8,   149,
     149,   150,   148,     8,   149,   256,   258,   122,   149,     8,
     252,    71,    73,    74,   282,    71,    61,   152,   152,   148,
     152,   159,   213,   148,   152,   213,    13,   119,   188,   119,
     191,   180,   124,   141,   144,   160,   210,   211,   212,   239,
     148,   148,   268,   254,    26,    63,   258,   256,   149,     8,
     148,   148,   254,   148,   262,    61,   151,   156,   152,   149,
     242,    26,   167,   254,    26,   167,   205,   230,   254,   258,
      31,   197,   258,   248,    71,    26,   167,   200,    26,   151,
     202,   248,   248,   148,    78,   144,   160,   140,   102,    71,
     152,    13,   175,   150,   258,   277,   276,    13,    31,   254,
      31,   254,   156,   254,   213,   152,   149,   149,   149,   248,
     189,   120,   193,   192,   186,   148,   144,   160,   149,     8,
      31,    73,   213,   213,   254,   240,    31,   232,   258,   213,
     213,   152,   213,   259,   270,   254,   121,   243,   165,   206,
     149,   165,   150,   122,   196,   258,   196,    13,   165,   150,
     203,   150,   203,   248,   251,   253,   160,    71,   148,   248,
     275,   254,   256,   256,   122,   156,   149,   150,   239,   194,
     184,   195,   239,   151,   210,   160,   104,   234,   212,    73,
      13,   149,   149,   246,   256,   149,   149,   149,   260,   156,
     152,   271,   207,    66,    67,   208,   150,    83,   230,   197,
     149,   149,   248,    89,   203,    92,    93,    94,   203,   152,
     122,   149,     8,   252,   239,   149,    31,   254,   152,   195,
     151,     8,   218,   149,   148,   151,    31,    73,    13,   248,
     121,   261,    66,    67,   209,   148,   167,   150,   149,    26,
     167,   199,   199,   150,    92,   150,   254,    26,   150,   204,
     152,   248,   248,    73,   256,   218,   239,    99,   106,   107,
     108,   109,   110,   111,   112,   152,   219,   223,   224,   225,
     226,   228,   181,    31,    73,   235,   165,    73,    13,   248,
     271,   148,    26,    68,   254,    26,   167,   198,   165,   150,
     204,   165,   122,   149,   152,    71,    73,   227,   233,   226,
       8,   150,   151,    73,     8,   149,   152,    13,   248,   262,
     254,   165,   150,   149,   165,    87,   165,   248,   169,    13,
      13,     8,   150,   178,    71,   165,    31,    73,   248,   149,
     167,    85,   150,   151,   248,   248,    73,    71,    13,   152,
      73,    26,   150,   165,    13,   220,   248,   165,   152,   248,
     148,   102,   170,   171,   172,   210,   148,   172,   149,   239,
     221,    73,   150,   151,   222,   149,   165,   173,   152,   151,
     165,   152
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
        case 5:

    { observers.CurrentQualifiedName.GrabNameAndComment((yyvsp[(1) - (1)])); ;}
    break;

  case 6:

    { observers.CurrentQualifiedName.AddName((yyvsp[(3) - (3)])); ;}
    break;

  case 7:

    { observers.ClearExpressions(); ;}
    break;

  case 26:

    { observers.ClearExpressions(); ;}
    break;

  case 56:

    { observers.ExceptionCatchFound((yyvsp[(8) - (9)])); ;}
    break;

  case 64:

    { observers.ExceptionCatchFound((yyvsp[(4) - (5)])); ;}
    break;

  case 71:

    { (yyval).Token = 0; ;}
    break;

  case 72:

    { (yyval) = (yyvsp[(1) - (1)]); ;}
    break;

  case 73:

    { observers.FunctionStart((yyvsp[(3) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(1) - (3)])); ;}
    break;

  case 74:

    { observers.FunctionFound(); ;}
    break;

  case 75:

    { observers.FunctionEnd((yyvsp[(11) - (11)])); ;}
    break;

  case 76:

    { observers.ClassSetName((yyvsp[(2) - (2)])); ;}
    break;

  case 77:

    { observers.ClassFound(); ;}
    break;

  case 78:

    { observers.ClassEnd(); ;}
    break;

  case 79:

    { observers.ClassSetName((yyvsp[(2) - (2)])); ;}
    break;

  case 80:

    { observers.ClassFound(); ;}
    break;

  case 81:

    { observers.ClassEnd(); ;}
    break;

  case 82:

    { observers.ClassStart((yyvsp[(1) - (1)]), false, false, false); ;}
    break;

  case 83:

    { observers.ClassStart((yyvsp[(1) - (2)]), true, false, false); ;}
    break;

  case 84:

    { observers.ClassStart((yyvsp[(1) - (2)]), false, true, false); ;}
    break;

  case 86:

    { observers.CurrentQualifiedName.Clear(); ;}
    break;

  case 87:

    { observers.ClassSetExtends(); ;}
    break;

  case 88:

    { observers.ClassStart((yyvsp[(1) - (1)]), false, false, true); ;}
    break;

  case 90:

    { observers.CurrentQualifiedName.Clear(); ;}
    break;

  case 93:

    { observers.CurrentQualifiedName.Clear(); ;}
    break;

  case 95:

    { observers.ClassAddToImplements(); ;}
    break;

  case 96:

    { observers.ClassAddToImplements(); ;}
    break;

  case 99:

    { observers.ForeachVariableFound(); ;}
    break;

  case 100:

    { observers.ForeachVariableFound(); ;}
    break;

  case 130:

    { observers.CurrentParametersList.SetName((yyvsp[(2) - (2)]), false); ;}
    break;

  case 131:

    { observers.CurrentParametersList.SetName((yyvsp[(3) - (3)]), true); ;}
    break;

  case 132:

    { observers.CurrentParametersList.SetName((yyvsp[(3) - (5)]), true);;}
    break;

  case 133:

    { observers.CurrentParametersList.SetName((yyvsp[(2) - (4)]), true); ;}
    break;

  case 134:

    { observers.CurrentParametersList.SetName((yyvsp[(4) - (4)]), false); ;}
    break;

  case 135:

    { observers.CurrentParametersList.SetName((yyvsp[(5) - (5)]), true); ;}
    break;

  case 136:

    { observers.CurrentParametersList.SetName((yyvsp[(5) - (7)]), true); ;}
    break;

  case 137:

    { observers.CurrentParametersList.SetName((yyvsp[(4) - (6)]), false); ;}
    break;

  case 138:

    { observers.CurrentParametersList.Create(); ;}
    break;

  case 139:

    { observers.CreateParameterWithOptionalClassName(); ;}
    break;

  case 140:

    { observers.CurrentParametersList.CreateWithOptionalType((yyvsp[(1) - (1)])); ;}
    break;

  case 143:

    { observers.ExpressionAsCallArgument(); ;}
    break;

  case 144:

    { observers.ExpressionAsCallArgument(); ;}
    break;

  case 145:

    { observers.ExpressionAsCallArgument(); ;}
    break;

  case 146:

    { observers.ExpressionAsCallArgument(); ;}
    break;

  case 147:

    { observers.ExpressionAsCallArgument(); ;}
    break;

  case 148:

    { observers.ExpressionAsCallArgument(); ;}
    break;

  case 151:

    { observers.GlobalVariableFound((yyvsp[(1) - (1)])); ;}
    break;

  case 154:

    { observers.StaticVariableFound((yyvsp[(3) - (3)])); ;}
    break;

  case 155:

    { observers.StaticVariableFound((yyvsp[(3) - (5)])); ;}
    break;

  case 156:

    { observers.StaticVariableFound((yyvsp[(1) - (1)])); ;}
    break;

  case 157:

    { observers.StaticVariableFound((yyvsp[(1) - (3)])); ;}
    break;

  case 160:

    { observers.CurrentMember.Clear(); ;}
    break;

  case 161:

    { observers.CurrentMember.Clear(); ;}
    break;

  case 162:

    { observers.CurrentMember.SetNameAndReturnReference((yyvsp[(4) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(2) - (4)])); ;}
    break;

  case 163:

    { observers.ClassMemberFound(false); ;}
    break;

  case 164:

    { observers.CurrentMember.Clear(); ;}
    break;

  case 165:

    { observers.ClassMethodEnd((yyvsp[(1) - (1)])); ;}
    break;

  case 166:

    { observers.ClassMethodEnd((yyvsp[(3) - (3)])); ;}
    break;

  case 168:

    { observers.CurrentMember.SetAsPublic();  observers.CurrentMember.AppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 173:

    { observers.CurrentMember.SetAsPublic(); observers.CurrentMember.AppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 174:

    { observers.CurrentMember.SetAsProtected(); observers.CurrentMember.AppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 175:

    { observers.CurrentMember.SetAsPrivate(); observers.CurrentMember.AppendToComment((yyvsp[(1) - (1)]));;}
    break;

  case 176:

    { observers.CurrentMember.IsStaticMember = true; observers.CurrentMember.AppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 177:

    { observers.CurrentMember.IsAbstractMember = true; observers.CurrentMember.AppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 178:

    { observers.CurrentMember.IsFinalMember = true; observers.CurrentMember.AppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 179:

    { observers.CurrentMember.SetNameAndReturnReference((yyvsp[(3) - (3)]), (yyvsp[(3) - (3)]), (yyvsp[(3) - (3)])); observers.ClassMemberFound(true); ;}
    break;

  case 180:

    { observers.CurrentMember.SetNameAndReturnReference((yyvsp[(3) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(3) - (5)])); observers.ClassMemberFound(true); ;}
    break;

  case 181:

    { observers.CurrentMember.SetNameAndReturnReference((yyvsp[(1) - (1)]), (yyvsp[(1) - (1)]), (yyvsp[(1) - (1)])); observers.ClassMemberFound(true); ;}
    break;

  case 182:

    { observers.CurrentMember.SetNameAndReturnReference((yyvsp[(1) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(1) - (3)])); observers.ClassMemberFound(true); ;}
    break;

  case 183:

    { observers.CurrentMember.SetNameAndReturnReference((yyvsp[(3) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(3) - (5)])); observers.ClassMemberFound(true); ;}
    break;

  case 184:

    { observers.CurrentMember.SetAsConst((yyvsp[(2) - (4)]), (yyvsp[(1) - (4)])); observers.ClassMemberFound(true); ;}
    break;

  case 191:

    {  ;}
    break;

  case 192:

    { observers.AssignmentExpressionFound(); ;}
    break;

  case 193:

    { observers.AssignmentExpressionFound(); ;}
    break;

  case 194:

    { observers.ExpressionPushNewInstanceCall(); observers.AssignmentExpressionFound(); ;}
    break;

  case 195:

    { observers.ExpressionPushNewInstanceCall(); ;}
    break;

  case 196:

    { observers.ExpressionPushNewVariable((yyvsp[(1) - (2)])); ;}
    break;

  case 197:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 198:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 199:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 200:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 201:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 202:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 203:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 204:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 205:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 206:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 207:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 208:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 209:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 210:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 211:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 212:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 213:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 214:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 215:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 216:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 217:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 218:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 219:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 220:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 221:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 222:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 223:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 224:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 225:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 226:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 227:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 228:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 229:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 230:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 231:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 232:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 233:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 234:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 235:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 236:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 237:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 238:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 239:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 240:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 241:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 242:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (5)])); ;}
    break;

  case 243:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (4)])); ;}
    break;

  case 244:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 245:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 246:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 247:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 248:

    { observers.ExpressionPushNewArray((yyvsp[(1) - (2)])); ;}
    break;

  case 249:

    { observers.ExpressionPushNewVariable((yyvsp[(1) - (2)])); ;}
    break;

  case 250:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 255:

    { observers.ExpressionPushNewArray((yyvsp[(1) - (4)])); ;}
    break;

  case 256:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); /* results of backtick operator is a string */ ;}
    break;

  case 258:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (9)])); ;}
    break;

  case 266:

    { observers.FunctionCallStart(); ;}
    break;

  case 267:

    { observers.FunctionCallEnd(); ;}
    break;

  case 297:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 298:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 299:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 300:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 301:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 302:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 303:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 304:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 305:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 306:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 307:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 308:

    { observers.ExpressionPushNewScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 334:

    { observers.ExpressionFound(); ;}
    break;

  case 335:

    { observers.ExpressionFound(); ;}
    break;

  case 339:

    { observers.CurrentExpressionAppendToChain((yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), '(' == (yyvsp[(4) - (4)]).Token); ;}
    break;

  case 340:

    { /* observers.CurrentVariableComplete(); */ ;}
    break;

  case 341:

    { /* observers.CurrentVariableComplete(); */ ;}
    break;

  case 344:

    { observers.CurrentExpressionAppendToChain((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), '(' == (yyvsp[(3) - (3)]).Token);  ;}
    break;

  case 345:

    { (yyval) = (yyvsp[(1) - (3)]); ;}
    break;

  case 346:

    { (yyval).Token = 0; ;}
    break;

  case 349:

    { observers.CurrentExpressionAsStaticMember((yyvsp[(2) - (3)])); ;}
    break;

  case 353:

    { observers.CurrentExpressionPushAsFunctionCall(); ;}
    break;

  case 360:

    { observers.CurrentExpressionPushAsVariable((yyvsp[(1) - (1)])); ;}
    break;

  case 375:

    { observers.ForeachVariableFound(); ;}
    break;

  case 376:

    {;}
    break;

  case 411:

    { observers.CurrentExpressionPushAsClassConstant((yyvsp[(2) - (3)]), (yyvsp[(3) - (3)])); ;}
    break;



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





int php53lex(YYSTYPE* value, mvceditor::LexicalAnalyzerClass &analyzer, mvceditor::ObserverQuadClass& observers) {
	int ret = analyzer.NextToken();
	observers.SemanticValueInit(*value);

	// ignore these token; there are no parse rules for them
	if (T_OPEN_TAG == ret) {
		ret = analyzer.NextToken();
	}
	UnicodeString regularComments;
	if (T_DOC_COMMENT == ret || T_COMMENT == ret) {
				
		// advance past all comments (there can be more than one consecutive)
		// keep /** and /* comments separate; we only want /* comments to 
		// get type hints for local varibles
		while (T_DOC_COMMENT == ret || T_COMMENT == ret) {
			if (T_DOC_COMMENT == ret) {
				analyzer.GetLexeme(*value->Comment);
			}
			else {
				analyzer.GetLexeme(regularComments);
			}
			ret = analyzer.NextToken();
		}
	}
	if (!regularComments.isEmpty()) {
		observers.NotifyLocalVariableTypeHint(regularComments);
	}
	if (T_CLOSE_TAG == ret) {
		ret = ';';
	}
	value->Token = ret;
	analyzer.GetLexeme(*value->Lexeme);	
	value->Pos = analyzer.GetCharacterPosition();
	return ret;
}

void php53error(mvceditor::LexicalAnalyzerClass &analyzer, mvceditor::ObserverQuadClass& observers, std::string msg) {
	int capacity = msg.length() + 1;
	int written = u_sprintf(analyzer.ParserError.getBuffer(capacity), "%s", msg.c_str());
	analyzer.ParserError.releaseBuffer(written);
	observers.SemanticValueFree();
}

