
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
#define YYLAST   7190

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  157
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  128
/* YYNRULES -- Number of rules.  */
#define YYNRULES  411
/* YYNRULES -- Number of states.  */
#define YYNSTATES  841

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
     250,   252,   253,   255,   258,   267,   269,   273,   275,   277,
     279,   280,   282,   283,   284,   296,   297,   298,   308,   309,
     310,   319,   321,   324,   327,   328,   329,   333,   335,   336,
     337,   341,   342,   343,   347,   349,   353,   354,   357,   359,
     362,   364,   369,   371,   376,   378,   383,   387,   393,   397,
     402,   407,   413,   414,   420,   425,   427,   429,   431,   436,
     437,   444,   445,   453,   454,   457,   458,   462,   464,   465,
     468,   472,   478,   483,   488,   494,   502,   509,   510,   512,
     514,   516,   517,   519,   521,   524,   528,   532,   537,   541,
     543,   545,   548,   553,   557,   563,   565,   569,   572,   573,
     577,   580,   581,   582,   593,   595,   599,   601,   603,   604,
     606,   608,   611,   613,   615,   617,   619,   621,   623,   627,
     633,   635,   639,   645,   650,   654,   656,   657,   659,   663,
     665,   672,   676,   681,   688,   692,   695,   699,   703,   707,
     711,   715,   719,   723,   727,   731,   735,   739,   742,   745,
     748,   751,   755,   759,   763,   767,   771,   775,   779,   783,
     787,   791,   795,   799,   803,   807,   811,   815,   818,   821,
     824,   827,   831,   835,   839,   843,   847,   851,   855,   859,
     863,   867,   873,   878,   880,   883,   886,   889,   892,   895,
     898,   901,   904,   907,   909,   914,   918,   921,   931,   933,
     934,   939,   943,   948,   950,   953,   954,   960,   967,   973,
     980,   987,   994,  1001,  1006,  1008,  1010,  1014,  1017,  1019,
    1023,  1026,  1028,  1030,  1035,  1037,  1040,  1041,  1044,  1045,
    1048,  1052,  1053,  1055,  1057,  1058,  1062,  1064,  1066,  1068,
    1070,  1072,  1074,  1076,  1078,  1080,  1082,  1086,  1089,  1091,
    1093,  1097,  1100,  1103,  1106,  1111,  1113,  1117,  1119,  1121,
    1123,  1127,  1130,  1132,  1136,  1140,  1141,  1144,  1145,  1147,
    1153,  1157,  1161,  1163,  1165,  1167,  1169,  1171,  1173,  1174,
    1181,  1183,  1186,  1187,  1191,  1195,  1196,  1198,  1201,  1205,
    1209,  1211,  1213,  1215,  1217,  1220,  1222,  1227,  1232,  1234,
    1236,  1241,  1242,  1244,  1246,  1248,  1253,  1258,  1260,  1262,
    1266,  1268,  1271,  1275,  1277,  1279,  1280,  1286,  1287,  1288,
    1291,  1297,  1301,  1305,  1307,  1314,  1319,  1324,  1327,  1330,
    1333,  1335,  1338,  1340,  1345,  1349,  1353,  1360,  1364,  1366,
    1368,  1370,  1375,  1380,  1383,  1386,  1391,  1394,  1397,  1399,
    1403,  1407
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     158,     0,    -1,   159,    -1,   159,   161,    -1,    -1,    71,
      -1,   160,   144,    71,    -1,   167,    -1,   175,    -1,   176,
      -1,   116,   148,   149,   150,    -1,   141,   160,   150,    -1,
     141,   160,   151,   159,   152,    -1,   141,   151,   159,   152,
      -1,   104,   162,   150,    -1,   164,   150,    -1,   162,     8,
     163,    -1,   163,    -1,   160,    -1,   160,    90,    71,    -1,
     144,   160,    -1,   144,   160,    90,    71,    -1,   164,     8,
      71,    13,   247,    -1,    99,    71,    13,   247,    -1,   165,
     166,    -1,    -1,   167,    -1,   175,    -1,   176,    -1,   116,
     148,   149,   150,    -1,   168,    -1,    71,    26,    -1,   151,
     165,   152,    -1,    65,   148,   253,   149,   167,   205,   207,
      -1,    65,   148,   253,   149,    26,   165,   206,   208,    68,
     150,    -1,    82,   148,   253,   149,   204,    -1,    81,   167,
      82,   148,   253,   149,   150,    -1,    84,   148,   229,   150,
     229,   150,   229,   149,   197,    -1,    91,   148,   253,   149,
     201,    -1,    95,   150,    -1,    95,   253,   150,    -1,    96,
     150,    -1,    96,   253,   150,    -1,   100,   150,    -1,   100,
     231,   150,    -1,   100,   257,   150,    -1,   105,   214,   150,
      -1,   111,   216,   150,    -1,    80,   228,   150,    -1,    75,
      -1,   253,   150,    -1,   113,   148,   173,   149,   150,    -1,
      86,   148,   257,    90,   196,   195,   149,   198,    -1,    86,
     148,   231,    90,   257,   195,   149,   198,    -1,    88,   148,
     200,   149,   199,    -1,   150,    -1,    -1,   101,   169,   151,
     165,   152,   102,   148,   238,    73,   149,   151,   165,   152,
     170,    -1,   103,   253,   150,    -1,    97,    71,   150,    -1,
     171,    -1,    -1,   172,    -1,   171,   172,    -1,   102,   148,
     238,    73,   149,   151,   165,   152,    -1,   174,    -1,   173,
       8,   174,    -1,   257,    -1,   178,    -1,   181,    -1,    -1,
      31,    -1,    -1,    -1,   232,   177,    71,   179,   148,   209,
     149,   180,   151,   165,   152,    -1,    -1,    -1,   186,    71,
     182,   187,   192,   183,   151,   217,   152,    -1,    -1,    -1,
     189,    71,   184,   190,   185,   151,   217,   152,    -1,   117,
      -1,   110,   117,    -1,   109,   117,    -1,    -1,    -1,   119,
     188,   238,    -1,   118,    -1,    -1,    -1,   119,   191,   194,
      -1,    -1,    -1,   120,   193,   194,    -1,   238,    -1,   194,
       8,   238,    -1,    -1,   122,   196,    -1,   257,    -1,    31,
     257,    -1,   167,    -1,    26,   165,    85,   150,    -1,   167,
      -1,    26,   165,    87,   150,    -1,   167,    -1,    26,   165,
      89,   150,    -1,    71,    13,   247,    -1,   200,     8,    71,
      13,   247,    -1,   151,   202,   152,    -1,   151,   150,   202,
     152,    -1,    26,   202,    92,   150,    -1,    26,   150,   202,
      92,   150,    -1,    -1,   202,    93,   253,   203,   165,    -1,
     202,    94,   203,   165,    -1,    26,    -1,   150,    -1,   167,
      -1,    26,   165,    83,   150,    -1,    -1,   205,    66,   148,
     253,   149,   167,    -1,    -1,   206,    66,   148,   253,   149,
      26,   165,    -1,    -1,    67,   167,    -1,    -1,    67,    26,
     165,    -1,   210,    -1,    -1,   211,    73,    -1,   211,    31,
      73,    -1,   211,    31,    73,    13,   247,    -1,   211,    73,
      13,   247,    -1,   210,     8,   211,    73,    -1,   210,     8,
     211,    31,    73,    -1,   210,     8,   211,    31,    73,    13,
     247,    -1,   210,     8,   211,    73,    13,   247,    -1,    -1,
     238,    -1,   124,    -1,   213,    -1,    -1,   231,    -1,   257,
      -1,    31,   255,    -1,   213,     8,   231,    -1,   213,     8,
     257,    -1,   213,     8,    31,   255,    -1,   214,     8,   215,
      -1,   215,    -1,    73,    -1,   153,   254,    -1,   153,   151,
     253,   152,    -1,   216,     8,    73,    -1,   216,     8,    73,
      13,   247,    -1,    73,    -1,    73,    13,   247,    -1,   217,
     218,    -1,    -1,   222,   226,   150,    -1,   227,   150,    -1,
      -1,    -1,   223,   232,   177,    71,   219,   148,   209,   149,
     220,   221,    -1,   150,    -1,   151,   165,   152,    -1,   224,
      -1,   112,    -1,    -1,   224,    -1,   225,    -1,   224,   225,
      -1,   106,    -1,   107,    -1,   108,    -1,   111,    -1,   110,
      -1,   109,    -1,   226,     8,    73,    -1,   226,     8,    73,
      13,   247,    -1,    73,    -1,    73,    13,   247,    -1,   227,
       8,    71,    13,   247,    -1,    99,    71,    13,   247,    -1,
     228,     8,   253,    -1,   253,    -1,    -1,   230,    -1,   230,
       8,   253,    -1,   253,    -1,   123,   148,   274,   149,    13,
     253,    -1,   257,    13,   253,    -1,   257,    13,    31,   257,
      -1,   257,    13,    31,    63,   239,   245,    -1,    63,   239,
     245,    -1,    62,   253,    -1,   257,    24,   253,    -1,   257,
      23,   253,    -1,   257,    22,   253,    -1,   257,    21,   253,
      -1,   257,    20,   253,    -1,   257,    19,   253,    -1,   257,
      18,   253,    -1,   257,    17,   253,    -1,   257,    16,   253,
      -1,   257,    15,   253,    -1,   257,    14,   253,    -1,   256,
      60,    -1,    60,   256,    -1,   256,    59,    -1,    59,   256,
      -1,   253,    27,   253,    -1,   253,    28,   253,    -1,   253,
       9,   253,    -1,   253,    11,   253,    -1,   253,    10,   253,
      -1,   253,    29,   253,    -1,   253,    31,   253,    -1,   253,
      30,   253,    -1,   253,    44,   253,    -1,   253,    42,   253,
      -1,   253,    43,   253,    -1,   253,    45,   253,    -1,   253,
      46,   253,    -1,   253,    47,   253,    -1,   253,    41,   253,
      -1,   253,    40,   253,    -1,    42,   253,    -1,    43,   253,
      -1,    48,   253,    -1,    50,   253,    -1,   253,    33,   253,
      -1,   253,    32,   253,    -1,   253,    35,   253,    -1,   253,
      34,   253,    -1,   253,    36,   253,    -1,   253,    39,   253,
      -1,   253,    37,   253,    -1,   253,    38,   253,    -1,   253,
      49,   239,    -1,   148,   253,   149,    -1,   253,    25,   253,
      26,   253,    -1,   253,    25,    26,   253,    -1,   282,    -1,
      58,   253,    -1,    57,   253,    -1,    56,   253,    -1,    55,
     253,    -1,    54,   253,    -1,    53,   253,    -1,    52,   253,
      -1,    64,   243,    -1,    51,   253,    -1,   249,    -1,   124,
     148,   277,   149,    -1,   154,   244,   154,    -1,    12,   253,
      -1,   232,   177,   148,   209,   149,   233,   151,   165,   152,
      -1,    98,    -1,    -1,   104,   148,   234,   149,    -1,   234,
       8,    73,    -1,   234,     8,    31,    73,    -1,    73,    -1,
      31,    73,    -1,    -1,   160,   148,   236,   212,   149,    -1,
     141,   144,   160,   148,   212,   149,    -1,   144,   160,   148,
     212,   149,    -1,   237,   140,    71,   148,   212,   149,    -1,
     237,   140,   262,   148,   212,   149,    -1,   264,   140,    71,
     148,   212,   149,    -1,   264,   140,   262,   148,   212,   149,
      -1,   262,   148,   212,   149,    -1,   111,    -1,   160,    -1,
     141,   144,   160,    -1,   144,   160,    -1,   160,    -1,   141,
     144,   160,    -1,   144,   160,    -1,   237,    -1,   240,    -1,
     266,   121,   270,   241,    -1,   266,    -1,   241,   242,    -1,
      -1,   121,   270,    -1,    -1,   148,   149,    -1,   148,   253,
     149,    -1,    -1,    78,    -1,   279,    -1,    -1,   148,   212,
     149,    -1,    69,    -1,    70,    -1,    79,    -1,   128,    -1,
     129,    -1,   143,    -1,   125,    -1,   126,    -1,   127,    -1,
     142,    -1,   136,    78,   137,    -1,   136,   137,    -1,   246,
      -1,   160,    -1,   141,   144,   160,    -1,   144,   160,    -1,
      42,   247,    -1,    43,   247,    -1,   124,   148,   250,   149,
      -1,   248,    -1,   237,   140,    71,    -1,    72,    -1,   284,
      -1,   160,    -1,   141,   144,   160,    -1,   144,   160,    -1,
     246,    -1,   155,   279,   155,    -1,   136,   279,   137,    -1,
      -1,   252,   251,    -1,    -1,     8,    -1,   252,     8,   247,
     122,   247,    -1,   252,     8,   247,    -1,   247,   122,   247,
      -1,   247,    -1,   254,    -1,   231,    -1,   257,    -1,   257,
      -1,   257,    -1,    -1,   265,   121,   270,   261,   258,   259,
      -1,   265,    -1,   259,   260,    -1,    -1,   121,   270,   261,
      -1,   148,   212,   149,    -1,    -1,   267,    -1,   273,   267,
      -1,   237,   140,   262,    -1,   264,   140,   262,    -1,   267,
      -1,   266,    -1,   235,    -1,   267,    -1,   273,   267,    -1,
     263,    -1,   267,    61,   269,   156,    -1,   267,   151,   253,
     152,    -1,   268,    -1,    73,    -1,   153,   151,   253,   152,
      -1,    -1,   253,    -1,   271,    -1,   262,    -1,   271,    61,
     269,   156,    -1,   271,   151,   253,   152,    -1,   272,    -1,
      71,    -1,   151,   253,   152,    -1,   153,    -1,   273,   153,
      -1,   274,     8,   275,    -1,   275,    -1,   257,    -1,    -1,
     123,   148,   276,   274,   149,    -1,    -1,    -1,   278,   251,
      -1,   278,     8,   253,   122,   253,    -1,   278,     8,   253,
      -1,   253,   122,   253,    -1,   253,    -1,   278,     8,   253,
     122,    31,   255,    -1,   278,     8,    31,   255,    -1,   253,
     122,    31,   255,    -1,    31,   255,    -1,   279,   280,    -1,
     279,    78,    -1,   280,    -1,    78,   280,    -1,    73,    -1,
      73,    61,   281,   156,    -1,    73,   121,    71,    -1,   138,
     253,   152,    -1,   138,    72,    61,   253,   156,   152,    -1,
     139,   257,   152,    -1,    71,    -1,    74,    -1,    73,    -1,
     114,   148,   283,   149,    -1,   115,   148,   257,   149,    -1,
       7,   253,    -1,     6,   253,    -1,     5,   148,   253,   149,
      -1,     4,   253,    -1,     3,   253,    -1,   257,    -1,   283,
       8,   257,    -1,   237,   140,    71,    -1,   264,   140,    71,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   185,   185,   189,   190,   194,   195,   199,   200,   201,
     202,   203,   204,   206,   208,   209,   213,   214,   218,   219,
     220,   221,   225,   226,   230,   231,   235,   236,   237,   238,
     242,   243,   247,   248,   249,   250,   251,   252,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   271,   272,
     273,   274,   275,   278,   281,   282,   283,   283,   289,   290,
     294,   295,   299,   300,   304,   308,   309,   313,   317,   321,
     324,   326,   330,   331,   330,   336,   337,   336,   339,   340,
     339,   345,   346,   347,   350,   352,   352,   357,   360,   362,
     362,   366,   368,   368,   373,   374,   377,   379,   383,   384,
     388,   389,   393,   394,   398,   399,   403,   404,   408,   409,
     410,   411,   414,   416,   417,   421,   422,   426,   427,   430,
     432,   435,   437,   440,   442,   445,   447,   451,   452,   457,
     458,   459,   460,   461,   462,   463,   464,   469,   470,   471,
     475,   476,   480,   481,   482,   483,   484,   485,   489,   490,
     494,   495,   496,   500,   501,   502,   503,   507,   508,   512,
     513,   514,   515,   514,   520,   521,   525,   526,   529,   531,
     535,   536,   540,   541,   542,   543,   544,   545,   549,   550,
     551,   552,   556,   558,   562,   563,   566,   568,   572,   573,
     577,   578,   579,   580,   581,   582,   583,   584,   585,   586,
     587,   588,   589,   590,   591,   592,   593,   594,   595,   596,
     597,   598,   599,   600,   601,   602,   603,   604,   605,   606,
     607,   608,   609,   610,   611,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   622,   623,   624,   625,   626,
     627,   628,   631,   633,   634,   635,   636,   637,   638,   639,
     640,   641,   642,   643,   644,   645,   646,   647,   653,   656,
     658,   662,   663,   664,   665,   669,   669,   671,   674,   676,
     678,   680,   682,   684,   689,   690,   691,   692,   696,   697,
     698,   702,   703,   707,   709,   713,   714,   718,   721,   723,
     724,   727,   729,   730,   733,   735,   739,   740,   741,   742,
     743,   744,   745,   746,   747,   748,   749,   750,   754,   755,
     756,   757,   758,   759,   760,   761,   765,   769,   770,   771,
     772,   773,   774,   775,   776,   779,   781,   784,   786,   790,
     791,   792,   793,   797,   798,   802,   806,   810,   816,   814,
     818,   822,   823,   827,   832,   833,   837,   838,   842,   843,
     847,   851,   852,   856,   857,   858,   862,   863,   864,   868,
     869,   872,   874,   878,   879,   883,   884,   885,   889,   890,
     894,   895,   899,   900,   904,   905,   905,   906,   909,   911,
     915,   916,   917,   918,   919,   920,   921,   922,   926,   927,
     928,   929,   933,   934,   935,   936,   937,   938,   942,   943,
     944,   949,   950,   951,   952,   953,   954,   955,   959,   960,
     964,   965
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
  "non_empty_additional_catches", "additional_catch", "unset_variables",
  "unset_variable", "function_declaration_statement",
  "class_declaration_statement", "is_reference",
  "unticked_function_declaration_statement", "$@2", "$@3",
  "unticked_class_declaration_statement", "$@4", "$@5", "$@6", "$@7",
  "class_entry_type", "extends_from", "$@8", "interface_entry",
  "interface_extends_list", "$@9", "implements_list", "$@10",
  "interface_list", "foreach_optional_arg", "foreach_variable",
  "for_statement", "foreach_statement", "declare_statement",
  "declare_list", "switch_case_list", "case_list", "case_separator",
  "while_statement", "elseif_list", "new_elseif_list", "else_single",
  "new_else_single", "parameter_list", "non_empty_parameter_list",
  "optional_class_type", "function_call_parameter_list",
  "non_empty_function_call_parameter_list", "global_var_list",
  "global_var", "static_var_list", "class_statement_list",
  "class_statement", "$@11", "$@12", "method_body", "variable_modifiers",
  "method_modifiers", "non_empty_member_modifiers", "member_modifier",
  "class_variable_declaration", "class_constant_declaration",
  "echo_expr_list", "for_expr", "non_empty_for_expr",
  "expr_without_variable", "function", "lexical_vars", "lexical_var_list",
  "function_call", "$@13", "class_name", "fully_qualified_class_name",
  "class_name_reference", "dynamic_class_name_reference",
  "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable", "$@14",
  "variable_properties", "variable_property", "method_or_not",
  "variable_without_objects", "static_member", "variable_class_name",
  "base_variable_with_function_calls", "base_variable",
  "reference_variable", "compound_variable", "dim_offset",
  "object_property", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "$@15", "array_pair_list",
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
     170,   170,   171,   171,   172,   173,   173,   174,   175,   176,
     177,   177,   179,   180,   178,   182,   183,   181,   184,   185,
     181,   186,   186,   186,   187,   188,   187,   189,   190,   191,
     190,   192,   193,   192,   194,   194,   195,   195,   196,   196,
     197,   197,   198,   198,   199,   199,   200,   200,   201,   201,
     201,   201,   202,   202,   202,   203,   203,   204,   204,   205,
     205,   206,   206,   207,   207,   208,   208,   209,   209,   210,
     210,   210,   210,   210,   210,   210,   210,   211,   211,   211,
     212,   212,   213,   213,   213,   213,   213,   213,   214,   214,
     215,   215,   215,   216,   216,   216,   216,   217,   217,   218,
     218,   219,   220,   218,   221,   221,   222,   222,   223,   223,
     224,   224,   225,   225,   225,   225,   225,   225,   226,   226,
     226,   226,   227,   227,   228,   228,   229,   229,   230,   230,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   231,   231,
     231,   231,   231,   231,   231,   231,   231,   231,   232,   233,
     233,   234,   234,   234,   234,   236,   235,   235,   235,   235,
     235,   235,   235,   235,   237,   237,   237,   237,   238,   238,
     238,   239,   239,   240,   240,   241,   241,   242,   243,   243,
     243,   244,   244,   244,   245,   245,   246,   246,   246,   246,
     246,   246,   246,   246,   246,   246,   246,   246,   247,   247,
     247,   247,   247,   247,   247,   247,   248,   249,   249,   249,
     249,   249,   249,   249,   249,   250,   250,   251,   251,   252,
     252,   252,   252,   253,   253,   254,   255,   256,   258,   257,
     257,   259,   259,   260,   261,   261,   262,   262,   263,   263,
     264,   265,   265,   266,   266,   266,   267,   267,   267,   268,
     268,   269,   269,   270,   270,   271,   271,   271,   272,   272,
     273,   273,   274,   274,   275,   276,   275,   275,   277,   277,
     278,   278,   278,   278,   278,   278,   278,   278,   279,   279,
     279,   279,   280,   280,   280,   280,   280,   280,   281,   281,
     281,   282,   282,   282,   282,   282,   282,   282,   283,   283,
     284,   284
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
       1,     0,     1,     2,     8,     1,     3,     1,     1,     1,
       0,     1,     0,     0,    11,     0,     0,     9,     0,     0,
       8,     1,     2,     2,     0,     0,     3,     1,     0,     0,
       3,     0,     0,     3,     1,     3,     0,     2,     1,     2,
       1,     4,     1,     4,     1,     4,     3,     5,     3,     4,
       4,     5,     0,     5,     4,     1,     1,     1,     4,     0,
       6,     0,     7,     0,     2,     0,     3,     1,     0,     2,
       3,     5,     4,     4,     5,     7,     6,     0,     1,     1,
       1,     0,     1,     1,     2,     3,     3,     4,     3,     1,
       1,     2,     4,     3,     5,     1,     3,     2,     0,     3,
       2,     0,     0,    10,     1,     3,     1,     1,     0,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     3,     5,
       1,     3,     5,     4,     3,     1,     0,     1,     3,     1,
       6,     3,     4,     6,     3,     2,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     5,     4,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     4,     3,     2,     9,     1,     0,
       4,     3,     4,     1,     2,     0,     5,     6,     5,     6,
       6,     6,     6,     4,     1,     1,     3,     2,     1,     3,
       2,     1,     1,     4,     1,     2,     0,     2,     0,     2,
       3,     0,     1,     1,     0,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     2,     1,     1,
       3,     2,     2,     2,     4,     1,     3,     1,     1,     1,
       3,     2,     1,     3,     3,     0,     2,     0,     1,     5,
       3,     3,     1,     1,     1,     1,     1,     1,     0,     6,
       1,     2,     0,     3,     3,     0,     1,     2,     3,     3,
       1,     1,     1,     1,     2,     1,     4,     4,     1,     1,
       4,     0,     1,     1,     1,     4,     4,     1,     1,     3,
       1,     2,     3,     1,     1,     0,     5,     0,     0,     2,
       5,     3,     3,     1,     6,     4,     4,     2,     2,     2,
       1,     2,     1,     4,     3,     3,     6,     3,     1,     1,
       1,     4,     4,     2,     2,     4,     2,     2,     1,     3,
       3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       4,     0,     2,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   288,     0,   296,   297,
       5,   317,   359,    49,   298,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   258,     0,     0,    56,     0,
       0,     0,     0,     0,   274,     0,     0,     0,     0,    81,
      87,     0,     0,   302,   303,   304,   299,   300,     0,     0,
     305,   301,     0,     0,    55,    25,   370,   291,     0,   319,
       3,     0,     7,    30,     8,     9,    68,    69,     0,     0,
     334,    70,   352,     0,   322,   253,     0,   333,     0,   335,
       0,   355,     0,   340,   351,   353,   358,     0,   243,   318,
       5,   274,     0,    70,   407,   406,     0,   404,   403,   256,
     227,   228,   229,   230,   252,   250,   249,   248,   247,   246,
     245,   244,     0,     0,   275,     0,   210,   337,     0,   208,
     195,     0,     0,   275,   281,   294,   282,     0,   284,   353,
       0,     0,   251,     0,    31,     0,   185,     0,     0,   186,
       0,     0,     0,    39,     0,    41,     0,     0,     0,    43,
     334,     0,   335,     0,     0,     0,    18,     0,    17,   150,
       0,     0,   149,    83,    82,   155,     0,     0,     0,     0,
       0,   377,   378,   392,     0,   307,     0,     0,     0,   390,
       0,     4,     0,   321,     0,     0,     0,   292,     0,   293,
       0,     0,     0,   265,     0,    15,    75,    78,    71,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    50,   209,   207,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   141,     0,     0,   361,     0,   371,   354,     0,
       0,     0,   277,     0,     0,     0,   277,     0,   141,   194,
       0,     0,   354,   289,     0,     0,     0,    48,     0,     0,
       0,   187,   189,   334,   335,     0,     0,     0,    40,    42,
      59,     0,    44,    45,    25,    58,    20,     0,     0,    14,
       0,   151,   335,     0,    46,     0,     0,    47,     0,    65,
      67,   408,     0,     0,     0,     0,   374,     0,   373,     0,
     383,     0,   327,     0,     0,   306,   391,   317,     0,     0,
     389,   324,   388,   320,     0,    11,     4,   141,   240,     0,
      32,    24,    26,    27,    28,     0,   255,   323,     6,   141,
       0,    84,    88,    72,   137,   410,   348,   346,     0,   213,
     215,   214,     0,     0,   211,   212,   216,   218,   217,   232,
     231,   234,   233,   235,   237,   238,   236,   226,   225,   220,
     221,   219,   222,   223,   224,   239,     0,   191,   206,   205,
     204,   203,   202,   201,   200,   199,   198,   197,   196,     0,
       0,   140,   334,   335,   411,   349,   368,     0,   364,   345,
     363,   367,   362,     0,     0,   405,   276,     0,     0,   276,
     348,     0,   349,   286,   290,     0,   184,     0,     0,   186,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   309,     0,   308,    23,   315,     0,     0,
      19,    16,     0,   148,   156,   153,     0,     0,     0,   401,
     402,    10,   375,   377,     0,   387,   336,     0,   254,   328,
     379,   398,   400,   399,     0,   394,     0,   395,   397,   141,
      13,     0,     0,     0,   360,     0,     0,    85,    91,    89,
      79,     0,   139,     0,     0,   278,     0,   127,     0,   138,
     141,   141,   347,   242,     0,     0,   192,   144,   273,     0,
     141,   141,     0,   141,   338,   361,     0,   356,   357,   295,
     283,    25,   119,     0,    25,   117,    35,     0,   188,    96,
       0,    96,    98,   106,     0,    25,   104,    54,   112,   112,
      38,   312,   313,   325,     0,     0,   311,     0,     0,    21,
     152,     0,    66,    51,   409,   377,   372,     0,     0,   382,
       0,   381,   393,     0,     0,    12,   268,     0,   266,    22,
       0,    92,    76,     0,     0,   137,     0,   280,   259,   137,
       0,   129,     0,     0,   241,   294,     0,   334,   335,     0,
       0,   369,     0,   342,     0,     0,     0,   285,   121,   123,
       0,     0,   186,     0,     0,    99,     0,     0,     0,   112,
       0,   112,     0,   332,     0,   327,   310,   316,     0,   154,
       0,   190,   386,   385,     0,     0,   267,    29,    86,     0,
       0,    90,    94,   158,     0,   279,     0,     0,     0,   130,
       0,   269,   270,   193,   147,   271,   272,   344,   339,   365,
     366,   287,   125,     0,     0,    33,    36,     0,     0,    97,
       0,     0,   107,     0,     0,     0,     0,     0,     0,   108,
       0,   314,   328,   326,     0,   376,     0,   380,   396,    93,
     158,     0,   168,    73,     0,    25,     0,   133,     0,   132,
       0,   341,     0,     0,     0,     0,   124,   118,     0,    25,
     102,    53,    52,   105,     0,   110,     0,   115,   116,    25,
     109,   331,   330,     0,   384,   168,    95,     0,   172,   173,
     174,   177,   176,   175,   167,    80,   157,     0,     0,   166,
     170,     0,     0,     0,   263,     0,     0,   134,     0,   131,
     345,     0,    25,     0,     0,    25,   100,    37,     0,   111,
      25,   114,     0,     0,    77,     0,   180,     0,    70,   171,
       0,   160,    25,   264,     0,   260,   257,     0,   136,   343,
       0,   126,    34,     0,     0,     0,   113,   329,     0,     0,
       0,     0,   159,     0,     0,     0,     0,   261,   135,     0,
     120,     0,   103,    25,   183,   181,   178,   161,     0,    74,
     262,    25,   101,     0,     0,     0,   182,   122,    61,   179,
     137,     0,    57,    60,    62,     0,     0,    63,   162,     0,
       0,     0,   164,    25,   163,     0,     0,    25,   165,     0,
      64
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    79,    80,   177,   178,    81,   205,   351,
     352,    83,   173,   822,   823,   824,   318,   319,   353,   354,
     219,    86,   501,   742,    87,   361,   640,   362,   584,    88,
     498,   580,    89,   500,   583,   582,   639,   641,   614,   541,
     757,   711,   547,   296,   550,   620,   719,   536,   609,   662,
     665,   704,   506,   507,   508,   410,   411,   181,   182,   186,
     692,   736,   815,   830,   834,   737,   738,   739,   740,   767,
     741,   155,   290,   291,    90,   113,   647,   745,    92,   359,
      93,   509,   145,   146,   530,   607,   152,   208,   279,    94,
     456,   457,    95,   624,   480,   625,    96,    97,   475,    98,
      99,   603,   658,   701,   524,   100,   101,   102,   103,   104,
     105,   106,   423,   419,   420,   421,   107,   327,   328,   565,
     331,   332,   198,   199,   484,   108,   322,   109
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -571
static const yytype_int16 yypact[] =
{
    -571,    46,  1774,  -571,  5867,  5867,   -86,  5867,  5867,  5867,
    5867,  5867,  5867,  5867,  5867,  5867,  5867,  5867,  5867,  5867,
    5867,  5867,   138,   138,  5867,   258,   -68,   -66,  -571,  -571,
      82,  -571,  -571,  -571,  -571,  5867,  4190,   -38,     3,    13,
      40,    43,  4317,  4444,   123,  -571,   137,  4571,  -571,  5867,
     -13,   -10,   107,   110,    80,    96,    98,   182,   185,  -571,
    -571,   198,   200,  -571,  -571,  -571,  -571,  -571,   247,    70,
    -571,  -571,   214,  5867,  -571,  -571,   120,   129,   267,   179,
    -571,    12,  -571,  -571,  -571,  -571,  -571,  -571,   302,   304,
    -571,   349,  -571,   242,  -571,  -571,  6340,  -571,    -3,   806,
     240,  -571,   277,   298,  -571,   -25,  -571,     4,  -571,  -571,
    -571,  -571,   280,   349,  6975,  6975,  5867,  6975,  6975,  7075,
    -571,  -571,   377,  -571,  -571,  -571,  -571,  -571,  -571,  -571,
    -571,  -571,   290,   214,    97,   297,  -571,  -571,   303,  -571,
    -571,   301,   214,   308,   307,   306,  -571,   340,   354,    -7,
       4,  4698,  -571,  5867,  -571,    14,  6975,   400,  5867,  5867,
    5867,   412,  5867,  -571,  6382,  -571,  6423,   338,   479,  -571,
     358,  6975,   628,   353,  6464,   214,   -61,    15,  -571,  -571,
     122,    16,  -571,  -571,  -571,   496,    20,   138,   138,   138,
     361,   230,  4825,    11,   253,  -571,  5994,   138,   259,  -571,
     214,  -571,   -85,   272,  1201,  1901,  5867,   276,   362,   335,
     276,    67,   446,  -571,   457,  -571,  -571,  -571,  -571,   -23,
     -18,  5867,  5867,  5867,  4978,  5867,  5867,  5867,  5867,  5867,
    5867,  5867,  5867,  5867,  5867,  5867,  5867,  5867,  5867,  5867,
    5867,  5867,  5867,  5867,  5867,  5867,   258,  -571,  -571,  -571,
    5105,  5867,  5867,  5867,  5867,  5867,  5867,  5867,  5867,  5867,
    5867,  5867,  5232,    45,     5,  5867,  5867,   120,   -14,   370,
    6506,   214,   154,    57,    65,   214,   308,    75,  5232,  -571,
      75,     5,   -34,  -571,  6547,  6588,  5867,  -571,   386,  6629,
     388,   531,  6975,   450,   702,   523,    27,  6670,  -571,  -571,
    -571,   904,  -571,  -571,  -571,  -571,    93,   471,   -13,  -571,
    5867,  -571,  -571,   -10,  -571,   904,   470,  -571,    29,  -571,
    -571,  -571,    30,   395,   396,   399,  -571,    32,  -571,   138,
    6834,   402,   544,   336,   482,  -571,  -571,   493,   890,   404,
    -571,  -571,  -571,   285,  1520,  -571,  -571,  5232,  -571,   410,
    -571,  -571,  -571,  -571,  -571,  1129,  -571,  -571,  -571,  5232,
     546,   442,   445,  -571,   148,   420,   430,   -34,     4,  7015,
    7052,  7075,  5867,  6934,  7120,  7141,  4367,  1461,  4492,  4619,
    4619,  4619,  4619,  1384,  1384,  1384,  1384,   528,   528,   393,
     393,   393,   377,   377,   377,  -571,    76,  7075,  7075,  7075,
    7075,  7075,  7075,  7075,  7075,  7075,  7075,  7075,  7075,   138,
     432,   571,    33,   344,   434,   435,  -571,  5867,  -571,   436,
     -27,  -571,  6975,   431,  6130,  -571,   173,   420,   434,   308,
    -571,   440,  -571,  -571,  -571,  3451,  6975,  5867,  3604,  5867,
    5867,   138,    48,   904,   520,  3757,    -5,   904,   904,   444,
     -53,   451,   214,   184,   454,  -571,  -571,  -571,  2028,   527,
    -571,  -571,  6171,  -571,  -571,   587,   138,   452,   138,  -571,
    -571,  -571,  -571,   230,   588,  -571,  -571,  5359,  -571,  5486,
    -571,  -571,  -571,  -571,   449,  -571,  5867,  -571,  -571,  5232,
    -571,  1647,   458,   459,  -571,   462,   904,  -571,   483,  -571,
    -571,   464,  -571,   469,   214,   308,   468,   610,     1,  -571,
    5232,  5232,   -34,  7098,  5867,   258,  -571,  -571,  -571,  5613,
    5232,  5232,  6212,  5232,  -571,  5867,  5867,  -571,  -571,  -571,
     499,  -571,  -571,  6711,  -571,  -571,  -571,   484,  6975,   513,
     138,   513,  -571,  -571,   608,  -571,  -571,  -571,   486,   489,
    -571,  -571,  -571,   904,   503,   214,   194,   582,   553,  -571,
    -571,   904,  -571,  -571,  -571,   230,  -571,  5867,   138,  6975,
     138,  6875,  -571,    60,   518,  -571,  -571,   515,  -571,  -571,
     152,  -571,  -571,   152,   521,   148,   214,   308,   565,   163,
     600,   661,   526,   532,  7098,   306,   138,    35,   447,   533,
     534,  -571,   540,  -571,   524,  6256,     5,  -571,  3298,   233,
     542,  2155,  5867,    48,   541,  -571,   545,   904,  2282,  -571,
     365,  -571,   142,   574,   548,   685,   291,  -571,   550,  -571,
      36,  7075,  -571,  -571,  5740,   547,  -571,  -571,  -571,   152,
     549,   693,  -571,  -571,   554,   308,   561,   559,   165,   698,
     904,  -571,  -571,  -571,  -571,  -571,  -571,  -571,   591,  -571,
    -571,  -571,   289,   579,  4190,  -571,  -571,   563,   580,  -571,
    3910,  3910,  -571,   581,   385,   583,  5867,     0,   220,  -571,
     904,  -571,   904,  -571,   152,  -571,   138,  6975,  -571,   693,
    -571,   152,   415,  -571,   166,  -571,   659,   721,   904,  -571,
       5,  -571,   590,   709,   671,  5867,  -571,  -571,  4063,  -571,
    -571,  -571,  -571,  -571,   602,  -571,  6299,  -571,  -571,  -571,
    -571,  -571,   618,   668,  -571,   516,  -571,   682,  -571,  -571,
    -571,  -571,  -571,  -571,  -571,  -571,  -571,   681,   665,   639,
    -571,    23,   613,   692,  -571,    37,  2409,   753,   904,  -571,
     436,  5867,  -571,   617,  6752,  -571,  -571,  -571,  2536,  -571,
    -571,  3298,   904,   619,  -571,   758,   759,    25,   349,  -571,
     703,  -571,  -571,  -571,   201,  -571,  -571,   904,  -571,  -571,
    6793,  3298,  -571,  4190,  2663,   623,  3298,  -571,   625,   904,
     904,   704,  -571,   710,   767,  2790,   712,  -571,  -571,   757,
    -571,   637,  -571,  -571,  -571,  -571,   777,  -571,   904,  -571,
    -571,  -571,  -571,  2917,   904,   643,  -571,  3298,   694,  -571,
     148,   647,  -571,   694,  -571,   648,   152,  -571,  -571,   725,
     244,   650,  -571,  -571,  -571,   653,  3044,  -571,  -571,  3171,
    -571
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -571,  -571,  -183,   -20,  -571,  -571,   500,  -571,  -223,  -571,
       6,  -571,  -571,  -571,  -571,   -22,  -571,   339,    -1,    10,
    -107,  -571,  -571,  -571,  -571,  -571,  -571,  -571,  -571,  -571,
    -571,  -571,  -571,  -571,  -571,  -571,  -571,   170,   269,   199,
    -571,   143,  -571,  -571,  -571,  -309,   101,  -571,  -571,  -571,
    -571,  -571,  -570,  -571,   224,  -205,  -571,  -571,   505,  -571,
     141,  -571,  -571,  -571,  -571,  -571,  -571,  -571,    94,  -571,
    -571,  -571,  -422,  -571,    -8,    -2,  -571,  -571,  -571,  -571,
     190,  -564,  -232,  -571,  -571,  -571,  -571,  -571,   237,   501,
     701,  -571,  -571,  -571,   210,  -571,   843,   656,  -396,   378,
     946,  -571,  -571,  -571,    88,  -213,  -571,    89,  -571,   -15,
     -21,  -571,   314,  -270,  -571,  -571,   -16,   278,   368,  -571,
    -571,  -571,   372,   497,  -571,  -571,  -571,  -571
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -351
static const yytype_int16 yytable[] =
{
      91,    84,   134,   134,   149,   143,   269,   366,    82,   150,
     148,   433,    85,   517,   395,   644,   638,   537,   344,   642,
     214,   548,   286,   308,   313,   554,   717,   265,   316,   307,
     176,   770,   590,   791,   525,   444,   265,   466,   468,   170,
     473,  -142,   157,  -145,   473,   774,     3,   265,   363,   202,
     415,   418,   203,   365,   265,    32,   248,   249,   110,   212,
     366,   415,   116,   179,   430,   345,   346,   432,   418,   221,
     222,   223,   333,   431,   591,   642,   416,    32,    32,   540,
     151,   458,   153,   212,   195,   224,   268,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   154,   246,
     158,   138,   138,   272,   147,  -350,   414,   266,    32,   110,
     723,    32,   276,  -346,   526,   364,   266,   726,   427,   282,
      32,   175,   334,  -350,  -347,    76,   428,   266,    32,   515,
     193,   110,   492,   180,   266,   340,   549,   110,    32,    32,
     718,   159,   293,   185,   495,   306,   417,   267,    76,   111,
     134,   160,   215,   491,   287,   309,   314,   134,   134,   134,
     317,   134,   632,   771,   633,   792,   445,   134,   467,   469,
     343,   474,  -142,   459,  -145,   685,   775,   111,   161,   132,
     668,   162,   133,   110,   167,    32,   696,   743,    76,   367,
     654,    76,   193,    91,   368,   196,   197,   207,   168,   110,
      76,    32,   135,   135,   200,   144,   635,   132,    76,   110,
     133,   201,   357,   110,   183,   149,   143,   184,    76,    76,
     150,   148,   796,   111,   110,   676,   677,   212,   697,   744,
     622,   212,   367,   367,   187,   213,   188,   368,   368,   111,
     825,   426,   367,   367,   412,   429,   367,   368,   368,   367,
     367,   368,   829,   132,   368,   368,   133,   196,   197,   138,
     412,   206,   502,   310,   797,    76,   138,   138,   138,   132,
     138,   453,   133,   595,   574,   110,   138,   502,   176,   503,
     724,    76,   504,   503,   679,   453,   504,  -128,   212,   663,
     664,   110,   347,    32,   503,   592,   593,   504,   608,   134,
     674,   611,   678,   676,   677,   599,   600,   212,   602,  -275,
     193,   489,   618,   212,  -275,   194,   193,   213,   212,   110,
     189,    32,   193,   190,  -277,   147,   661,   340,   212,   412,
     193,   111,    91,    84,   505,   210,   191,   512,   192,   193,
      82,   412,  -143,   325,    85,   702,   703,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   111,
     135,   132,   720,   216,   133,   217,   134,   135,   135,   135,
     218,   135,   220,    76,   195,   196,   197,   135,   262,   134,
     335,   196,   197,   418,   832,   833,   341,   196,   197,   141,
     136,   139,   142,  -337,  -337,   196,   197,   481,   193,   482,
     483,    76,  -277,   340,   196,   197,   212,   263,   138,   264,
     347,   134,   134,   453,   200,  -276,   246,   453,   453,   212,
     750,  -276,   556,   489,   271,   212,   144,   273,   243,   244,
     245,   532,   246,   274,   535,   275,   134,   277,   134,   209,
     211,   546,   212,   134,   278,  -146,    91,   675,   676,   677,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   746,   196,   197,   281,   453,   714,   676,   677,
     280,   412,   288,   295,   587,   138,   758,   418,   300,    91,
      84,   454,   301,  -143,   149,   143,   761,    82,   138,   150,
     148,    85,   412,   412,   304,   454,  -337,  -337,   302,   315,
     324,   597,   412,   412,   727,   412,   356,   358,   364,   135,
     134,   728,   729,   730,   731,   732,   733,   734,   360,   781,
     138,   138,   784,   453,   437,   626,   443,   786,   439,   440,
     441,   453,   460,   465,   470,   134,   471,   472,   134,   795,
     134,   478,   479,   485,   486,   138,   488,   138,   493,   496,
     505,   497,   138,   505,   499,   505,   645,   735,   510,   505,
     240,   241,   242,   243,   244,   245,   134,   246,   511,   519,
     813,   518,   520,   521,   523,   367,   135,   527,   817,   529,
     368,   544,   553,   134,   557,   555,  -146,   453,   559,   135,
     561,   567,   563,   581,   147,   572,    91,   576,   577,    91,
     836,   578,   585,   586,   839,   727,    91,   588,   589,   505,
     606,   617,   728,   729,   730,   731,   732,   733,   734,   138,
     453,   135,   135,   454,   612,   613,   619,   454,   454,   621,
     335,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   627,   138,   628,   135,   138,   135,   138,
     453,   793,   453,   135,   505,   637,   134,   636,   764,   646,
     706,   505,   643,   649,   650,   651,   710,   710,   453,   367,
     659,   652,   655,   656,   368,   138,   454,  -337,  -337,   657,
     670,   336,   666,   682,   671,   342,   680,   681,   684,   688,
     690,   691,   138,   693,   336,   144,   342,   336,   342,   694,
     695,   698,   700,   707,   756,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   705,   453,   708,
     135,   713,   747,   715,   748,   752,   768,  -169,   751,   753,
     762,   763,   453,   454,    91,   728,   729,   730,   731,   732,
     733,   454,   759,   765,   766,   135,    91,   453,   135,    91,
     135,  -337,  -337,    45,   772,   773,   777,   782,   788,   453,
     453,   789,   790,   802,   794,   138,   803,   806,   303,    91,
     808,   807,    91,   811,    91,   810,   135,   812,   453,   800,
     814,   820,   442,    91,   453,   826,   821,   828,   831,   835,
     505,   827,   455,   135,   837,   562,   505,   454,   461,   689,
     616,    91,   669,   648,   712,    91,   455,   760,   463,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   725,   653,   769,    91,   683,   311,    91,   779,   604,
     454,   566,     0,   630,     0,     0,     0,   114,   115,     0,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,  -337,  -337,   140,     0,     0,
     454,     0,   454,     0,     0,     0,   135,     0,   156,     0,
       0,     0,     0,     0,     0,   164,   166,     0,   454,     0,
     171,     0,   174,     0,     0,     0,     0,     0,     0,   221,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,   204,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   454,   246,
       0,     0,     0,     0,   455,     0,   447,   448,   455,   455,
       0,     0,   454,     0,     0,     0,     0,     0,     0,   270,
       0,     0,     0,     0,     0,     0,     0,   454,   137,   137,
       0,     0,     0,    28,    29,   110,     0,     0,     0,   454,
     454,     0,     0,    34,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   172,   284,     0,   285,   455,   454,     0,
       0,   289,   292,   171,   454,   297,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,   464,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   449,    63,
      64,    65,    66,    67,     0,   330,     0,     0,     0,   338,
     450,     0,   487,     0,     0,   451,    70,    71,   452,   355,
       0,     0,     0,     0,   455,     0,     0,     0,     0,     0,
       0,     0,   455,     0,   369,   370,   371,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,     0,
       0,     0,     0,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   171,   294,     0,   422,   424,
       0,     0,     0,     0,     0,     0,     0,     0,   455,     0,
       0,   171,     0,     0,     0,     0,   312,     0,     0,   436,
       0,     0,     0,   320,   321,   323,     0,   326,   221,   222,
     223,     0,     0,   339,   543,     0,     0,     0,   551,   552,
       0,   455,     0,   462,   224,     0,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,     0,
       0,   455,     0,   455,     0,     0,     0,     0,     0,     0,
     171,     0,     0,     0,     0,     0,     0,   579,     0,   455,
       0,     0,   171,     0,     0,     0,     0,     0,   413,     0,
     221,   222,   223,     0,     0,   513,     0,     0,     0,     0,
       0,     0,     0,     0,   413,     0,   224,     0,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   455,
     246,     0,     0,     0,   623,     0,     0,     0,     0,     0,
     522,     0,   629,   455,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   476,     0,     0,   455,     0,
     533,   494,   292,   538,     0,     0,     0,     0,     0,     0,
     455,   455,     0,   413,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   413,     0,     0,     0,   455,
       0,     0,     0,     0,     0,   455,     0,     0,   672,     0,
     569,     0,   571,     0,     0,     0,     0,     0,     0,   573,
       0,     0,   171,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   516,     0,     0,     0,     0,     0,     0,     0,
     348,   699,     0,   171,   171,   476,     0,   594,     0,     0,
       0,     0,   171,   171,   171,     0,   171,     0,   422,   605,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   721,     0,   722,     0,     0,     0,   539,   542,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   749,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     631,     0,   320,     0,   564,     0,     0,     0,     0,   326,
    -351,  -351,  -351,  -351,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,     0,   413,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   778,
       0,     0,     0,     0,     0,   292,   413,   413,     0,     0,
       0,     0,     0,   787,     0,   598,   413,   413,     0,   413,
       0,     0,     0,     0,     0,     0,     0,   687,   798,     0,
       0,     0,     0,     0,     0,     0,   615,     0,     0,     0,
     804,   805,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   816,
     246,   326,     0,     0,   476,   819,   476,     0,     0,   716,
       0,     0,     0,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   476,     0,     0,     0,     0,     0,   754,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   542,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,    26,    27,     0,     0,     0,    28,
      29,    30,    31,    32,   780,    33,     0,     0,     0,    34,
      35,    36,    37,     0,    38,     0,    39,     0,    40,     0,
       0,    41,     0,     0,     0,    42,    43,    44,    45,    46,
      47,    48,     0,    49,    50,    51,     0,     0,     0,    52,
      53,    54,   476,    55,    56,    57,    58,    59,    60,     0,
       0,     0,     0,    61,    62,    63,    64,    65,    66,    67,
       4,     5,     6,     7,     8,     0,    68,     0,     0,     9,
       0,    69,    70,    71,    72,     0,     0,     0,    73,     0,
      74,    75,   490,    76,    77,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,    26,    27,     0,     0,     0,    28,    29,    30,    31,
      32,     0,    33,     0,     0,     0,    34,    35,    36,    37,
       0,    38,     0,    39,     0,    40,     0,     0,    41,     0,
       0,     0,    42,    43,    44,    45,    46,    47,    48,     0,
      49,    50,    51,     0,     0,     0,    52,    53,    54,     0,
      55,    56,    57,    58,    59,    60,     0,     0,     0,     0,
      61,    62,    63,    64,    65,    66,    67,     4,     5,     6,
       7,     8,     0,    68,     0,     0,     9,     0,    69,    70,
      71,    72,     0,     0,     0,    73,     0,    74,    75,   575,
      76,    77,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,    26,    27,
       0,     0,     0,    28,    29,    30,    31,    32,     0,    33,
       0,     0,     0,    34,    35,    36,    37,     0,    38,     0,
      39,     0,    40,     0,     0,    41,     0,     0,     0,    42,
      43,    44,    45,    46,    47,    48,     0,    49,    50,    51,
       0,     0,     0,    52,    53,    54,     0,    55,    56,    57,
      58,    59,    60,     0,     0,     0,     0,    61,    62,    63,
      64,    65,    66,    67,     4,     5,     6,     7,     8,     0,
      68,     0,     0,     9,     0,    69,    70,    71,    72,     0,
       0,     0,    73,     0,    74,    75,     0,    76,    77,    78,
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
       0,    74,    75,   350,    76,    77,    78,     0,     0,     0,
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
     558,    76,    77,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,    26,
      27,     0,     0,     0,    28,    29,    30,    31,    32,     0,
      33,     0,     0,     0,    34,    35,    36,    37,   667,    38,
       0,    39,     0,    40,     0,     0,    41,     0,     0,     0,
      42,    43,    44,    45,     0,    47,    48,     0,    49,     0,
      51,     0,     0,     0,    52,    53,    54,     0,    55,    56,
      57,   349,    59,    60,     0,     0,     0,     0,    61,    62,
      63,    64,    65,    66,    67,     4,     5,     6,     7,     8,
       0,    68,     0,     0,     9,     0,   112,    70,    71,    72,
       0,     0,     0,    73,     0,    74,    75,     0,    76,    77,
      78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    10,    11,     0,     0,     0,     0,
      12,     0,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,    25,    26,    27,     0,     0,
       0,    28,    29,    30,    31,    32,     0,    33,     0,     0,
       0,    34,    35,    36,    37,     0,    38,     0,    39,     0,
      40,   673,     0,    41,     0,     0,     0,    42,    43,    44,
      45,     0,    47,    48,     0,    49,     0,    51,     0,     0,
       0,    52,    53,    54,     0,    55,    56,    57,   349,    59,
      60,     0,     0,     0,     0,    61,    62,    63,    64,    65,
      66,    67,     4,     5,     6,     7,     8,     0,    68,     0,
       0,     9,     0,   112,    70,    71,    72,     0,     0,     0,
      73,     0,    74,    75,     0,    76,    77,    78,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,     0,     0,     0,     0,    12,     0,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
       0,    24,    25,    26,    27,     0,     0,     0,    28,    29,
      30,    31,    32,     0,    33,     0,     0,     0,    34,    35,
      36,    37,     0,    38,     0,    39,     0,    40,     0,     0,
      41,     0,     0,     0,    42,    43,    44,    45,     0,    47,
      48,     0,    49,     0,    51,     0,     0,     0,    52,    53,
      54,     0,    55,    56,    57,   349,    59,    60,     0,     0,
       0,     0,    61,    62,    63,    64,    65,    66,    67,     4,
       5,     6,     7,     8,     0,    68,     0,     0,     9,     0,
     112,    70,    71,    72,     0,     0,     0,    73,     0,    74,
      75,   776,    76,    77,    78,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    10,    11,
       0,     0,     0,     0,    12,     0,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,     0,    24,    25,
      26,    27,     0,     0,     0,    28,    29,    30,    31,    32,
       0,    33,     0,     0,     0,    34,    35,    36,    37,     0,
      38,     0,    39,   785,    40,     0,     0,    41,     0,     0,
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
       0,     0,    34,    35,    36,    37,     0,    38,   801,    39,
       0,    40,     0,     0,    41,     0,     0,     0,    42,    43,
      44,    45,     0,    47,    48,     0,    49,     0,    51,     0,
       0,     0,    52,    53,    54,     0,    55,    56,    57,   349,
      59,    60,     0,     0,     0,     0,    61,    62,    63,    64,
      65,    66,    67,     4,     5,     6,     7,     8,     0,    68,
       0,     0,     9,     0,   112,    70,    71,    72,     0,     0,
       0,    73,     0,    74,    75,     0,    76,    77,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,    26,    27,     0,     0,     0,    28,
      29,    30,    31,    32,     0,    33,     0,     0,     0,    34,
      35,    36,    37,     0,    38,     0,    39,     0,    40,     0,
       0,    41,     0,     0,     0,    42,    43,    44,    45,     0,
      47,    48,     0,    49,     0,    51,     0,     0,     0,    52,
      53,    54,     0,    55,    56,    57,   349,    59,    60,     0,
       0,     0,     0,    61,    62,    63,    64,    65,    66,    67,
       4,     5,     6,     7,     8,     0,    68,     0,     0,     9,
       0,   112,    70,    71,    72,     0,     0,     0,    73,     0,
      74,    75,   809,    76,    77,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,    26,    27,     0,     0,     0,    28,    29,    30,    31,
      32,     0,    33,     0,     0,     0,    34,    35,    36,    37,
       0,    38,     0,    39,     0,    40,     0,     0,    41,     0,
       0,     0,    42,    43,    44,    45,     0,    47,    48,     0,
      49,     0,    51,     0,     0,     0,    52,    53,    54,     0,
      55,    56,    57,   349,    59,    60,     0,     0,     0,     0,
      61,    62,    63,    64,    65,    66,    67,     4,     5,     6,
       7,     8,     0,    68,     0,     0,     9,     0,   112,    70,
      71,    72,     0,     0,     0,    73,     0,    74,    75,   818,
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
       0,     0,    73,     0,    74,    75,   838,    76,    77,    78,
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
       0,    74,    75,   840,    76,    77,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,    26,    27,     0,     0,     0,    28,    29,    30,
      31,    32,     0,    33,     0,     0,     0,    34,    35,    36,
      37,     0,    38,     0,    39,     0,    40,     0,     0,    41,
       0,     0,     0,    42,    43,    44,    45,     0,    47,    48,
       0,    49,     0,    51,     0,     0,     0,    52,    53,    54,
       0,    55,    56,    57,   349,    59,    60,     0,     0,     0,
       0,    61,    62,    63,    64,    65,    66,    67,     0,     0,
       0,     0,     0,     0,    68,     0,     0,     0,     0,   112,
      70,    71,    72,     0,     0,     0,    73,     0,    74,    75,
       0,    76,    77,    78,     4,     5,     6,     7,     8,     0,
       0,     0,     0,     9,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   531,     0,     0,
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
     534,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,   545,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,    26,    27,     0,     0,     0,    28,    29,    30,    31,
      32,     0,    33,     0,     0,     0,    34,    35,    36,    37,
       0,    38,     0,    39,     0,    40,     0,     0,    41,     0,
       0,     0,    42,    43,    44,    45,     0,    47,    48,     0,
      49,     0,    51,     0,     0,     0,     0,     0,    54,     0,
      55,    56,    57,     0,     0,     0,     0,     0,     0,     0,
      61,    62,    63,    64,    65,    66,    67,     0,     0,     0,
       0,     0,     0,    68,     0,     0,     0,     0,   112,    70,
      71,    72,     0,     0,     0,    73,     0,    74,    75,     0,
      76,    77,    78,     4,     5,     6,     7,     8,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   709,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,    26,    27,     0,     0,     0,    28,
      29,    30,    31,    32,     0,    33,     0,     0,     0,    34,
      35,    36,    37,     0,    38,     0,    39,     0,    40,     0,
       0,    41,     0,     0,     0,    42,    43,    44,    45,     0,
      47,    48,     0,    49,     0,    51,     0,     0,     0,     0,
       0,    54,     0,    55,    56,    57,     0,     0,     0,     0,
       0,     0,     0,    61,    62,    63,    64,    65,    66,    67,
       0,     0,     0,     0,     0,     0,    68,     0,     0,     0,
       0,   112,    70,    71,    72,     0,     0,     0,    73,     0,
      74,    75,     0,    76,    77,    78,     4,     5,     6,     7,
       8,     0,     0,     0,     0,     9,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   755,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    10,    11,     0,     0,     0,
       0,    12,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,    25,    26,    27,     0,
       0,     0,    28,    29,    30,    31,    32,     0,    33,     0,
       0,     0,    34,    35,    36,    37,     0,    38,     0,    39,
       0,    40,     0,     0,    41,     0,     0,     0,    42,    43,
      44,    45,     0,    47,    48,     0,    49,     0,    51,     0,
       0,     0,     0,     0,    54,     0,    55,    56,    57,     0,
       0,     0,     0,     0,     0,     0,    61,    62,    63,    64,
      65,    66,    67,     4,     5,     6,     7,     8,     0,    68,
       0,     0,     9,     0,   112,    70,    71,    72,     0,     0,
       0,    73,     0,    74,    75,     0,    76,    77,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    10,    11,     0,     0,     0,     0,    12,     0,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,    25,    26,    27,     0,     0,     0,    28,
      29,    30,    31,    32,     0,    33,     0,     0,     0,    34,
      35,    36,    37,     0,    38,     0,    39,     0,    40,     0,
       0,    41,     0,     0,     0,    42,    43,    44,    45,     0,
      47,    48,     0,    49,     0,    51,     0,     0,     0,     0,
       0,    54,     0,    55,    56,    57,     0,     0,     0,     0,
       0,     0,     0,    61,    62,    63,    64,    65,    66,    67,
       4,     5,     6,     7,     8,     0,    68,     0,     0,     9,
       0,   112,    70,    71,    72,     0,     0,     0,    73,     0,
      74,    75,     0,    76,    77,    78,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      11,     0,     0,     0,     0,    12,     0,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,     0,    24,
      25,    26,     0,     0,     0,     0,    28,    29,   110,    31,
      32,     0,     0,     0,     0,     0,    34,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,    45,   246,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   111,     0,
       0,    56,    57,     0,     0,     0,     0,     0,     0,     0,
      61,    62,    63,    64,    65,    66,    67,     4,     5,     6,
       7,     8,     0,    68,     0,     0,     9,     0,   112,    70,
      71,    72,     0,     0,     0,    73,     0,   163,     0,     0,
      76,    77,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,    26,     0,
       0,     0,     0,    28,    29,   110,    31,    32,     0,     0,
       0,     0,     0,    34,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,     0,     0,    56,    57,
       0,     0,     0,     0,     0,     0,     0,    61,    62,    63,
      64,    65,    66,    67,     4,     5,     6,     7,     8,     0,
      68,     0,     0,     9,     0,   112,    70,    71,    72,     0,
       0,     0,    73,     0,   165,     0,     0,    76,    77,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    10,    11,     0,     0,     0,     0,    12,
       0,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,    25,    26,     0,     0,     0,     0,
      28,    29,   110,    31,    32,     0,     0,     0,     0,     0,
      34,  -351,  -351,  -351,  -351,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,    45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   111,     0,     0,    56,    57,     0,     0,     0,
       0,     0,     0,     0,    61,    62,    63,    64,    65,    66,
      67,     4,     5,     6,     7,     8,     0,    68,     0,     0,
       9,     0,   112,    70,    71,    72,     0,     0,     0,    73,
       0,   169,     0,     0,    76,    77,    78,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,    26,     0,     0,     0,     0,    28,    29,   110,
      31,    32,     0,     0,     0,     0,     0,    34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   111,
       0,     0,    56,    57,     0,     0,     0,     0,     0,     0,
       0,    61,    62,    63,    64,    65,    66,    67,     4,     5,
       6,     7,     8,     0,    68,     0,     0,     9,     0,   112,
      70,    71,    72,     0,     0,     0,    73,   283,     0,     0,
       0,    76,    77,    78,     0,     0,   329,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,    26,
       0,     0,     0,     0,    28,    29,   110,    31,    32,     0,
       0,     0,     0,     0,    34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   111,     0,     0,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    61,    62,
      63,    64,    65,    66,    67,     0,     0,     0,     0,     0,
       0,    68,     0,     0,     0,     0,   112,    70,    71,    72,
       0,     0,     0,    73,     0,     0,     0,     0,    76,    77,
      78,     4,     5,     6,     7,     8,     0,     0,     0,     0,
       9,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   372,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      10,    11,     0,     0,     0,     0,    12,     0,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
      24,    25,    26,     0,     0,     0,     0,    28,    29,   110,
      31,    32,     0,     0,     0,     0,     0,    34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    45,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   111,
       0,     0,    56,    57,     0,     0,     0,     0,     0,     0,
       0,    61,    62,    63,    64,    65,    66,    67,     4,     5,
       6,     7,     8,     0,    68,     0,     0,     9,     0,   112,
      70,    71,    72,     0,     0,     0,    73,     0,     0,     0,
       0,    76,    77,    78,     0,     0,   396,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    10,    11,     0,
       0,     0,     0,    12,     0,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,    24,    25,    26,
       0,     0,     0,     0,    28,    29,   110,    31,    32,     0,
       0,     0,     0,     0,    34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    45,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   111,     0,     0,    56,
      57,     0,     0,     0,     0,     0,     0,     0,    61,    62,
      63,    64,    65,    66,    67,     4,     5,     6,     7,     8,
       0,    68,     0,     0,     9,     0,   112,    70,    71,    72,
       0,     0,     0,    73,     0,     0,     0,     0,    76,    77,
      78,     0,     0,   409,     0,     0,     0,     0,     0,     0,
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
     568,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,    76,    77,    78,     0,     0,   570,     0,     0,
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
      77,    78,     0,     0,   596,     0,     0,     0,     0,     0,
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
       0,   686,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,    76,    77,    78,     0,     0,     0,     0,
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
      76,    77,    78,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    10,    11,     0,     0,
       0,     0,    12,     0,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,    24,    25,    26,     0,
       0,     0,     0,    28,    29,   110,   337,    32,     0,     0,
       0,     0,     0,    34,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   111,     0,     0,    56,    57,
       0,     0,     0,     0,     0,     0,     0,    61,    62,    63,
      64,    65,    66,    67,     0,     0,     0,     0,     0,     0,
      68,     0,     0,     0,     0,   112,    70,    71,    72,   221,
     222,   223,    73,     0,     0,     0,     0,    76,    77,    78,
       0,     0,     0,     0,     0,   224,     0,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   224,     0,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,   221,   222,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   224,     0,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,     0,     0,     0,   221,   222,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   224,   528,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,     0,     0,   221,   222,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   560,   224,   717,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,   221,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   601,   224,     0,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
       0,   221,   222,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   224,   660,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,   221,   222,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   224,   718,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   224,
     247,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,     0,   221,   222,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   224,   298,   225,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,     0,   246,   221,   222,   223,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   224,   299,   225,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,     0,   246,   221,   222,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   224,   305,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,   221,   222,
     223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,   425,   225,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,     0,   246,   221,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   224,   434,   225,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
     221,   222,   223,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   224,   435,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246,   221,   222,   223,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   224,   438,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
       0,   246,   221,   222,   223,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   224,   446,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,     0,   246,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   224,
     610,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,   221,   222,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,   783,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   799,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   477,     0,     0,   224,
     514,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,     0,   246,   221,   222,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   634,     0,     0,
     224,     0,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246,   222,   223,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,     0,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   223,   246,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   224,     0,   225,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     224,   246,   225,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,     0,   246,   225,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,     0,   246,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,     0,   246,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,     0,
     246
};

static const yytype_int16 yycheck[] =
{
       2,     2,    22,    23,    25,    25,   113,   220,     2,    25,
      25,   281,     2,   409,   246,   585,   580,   439,   201,   583,
       8,    26,     8,     8,     8,    78,    26,    61,     8,    90,
      50,     8,    31,     8,    61,     8,    61,     8,     8,    47,
       8,     8,    36,     8,     8,     8,     0,    61,    71,    69,
     263,   264,    72,    71,    61,    73,    59,    60,    71,   144,
     273,   274,   148,    73,   277,   150,   151,   280,   281,     9,
      10,    11,    61,   278,    73,   639,    71,    73,    73,    31,
     148,   304,   148,   144,   137,    25,   107,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    26,    49,
     148,    22,    23,   133,    25,   140,    71,   151,    73,    71,
     684,    73,   142,   148,   151,   148,   151,   691,    71,   150,
      73,   144,   121,   140,   148,   153,    71,   151,    73,    63,
      73,    71,   347,   153,   151,    78,   151,    71,    73,    73,
     150,   148,   160,    73,   359,   175,   151,   153,   153,   111,
     180,   148,   150,   346,   150,   150,   150,   187,   188,   189,
     150,   191,   568,   150,   570,   150,   149,   197,   149,   149,
     200,   149,   149,    90,   149,   149,   149,   111,   148,   141,
     612,   148,   144,    71,    71,    73,    31,    31,   153,   220,
     596,   153,    73,   205,   220,   138,   139,    78,    71,    71,
     153,    73,    22,    23,   144,    25,   156,   141,   153,    71,
     144,   151,   155,    71,   117,   246,   246,   117,   153,   153,
     246,   246,    31,   111,    71,    93,    94,   144,    73,    73,
     549,   144,   263,   264,   148,   148,   148,   263,   264,   111,
     820,   271,   273,   274,   262,   275,   277,   273,   274,   280,
     281,   277,   826,   141,   280,   281,   144,   138,   139,   180,
     278,   151,   124,   151,    73,   153,   187,   188,   189,   141,
     191,   301,   144,   515,   489,    71,   197,   124,   308,   141,
     686,   153,   144,   141,   152,   315,   144,   149,   144,    66,
      67,    71,   148,    73,   141,   510,   511,   144,   531,   329,
     619,   534,   621,    93,    94,   520,   521,   144,   523,   140,
      73,   148,   545,   144,   140,    78,    73,   148,   144,    71,
     148,    73,    73,   148,   140,   246,   606,    78,   144,   347,
      73,   111,   344,   344,   364,    78,   148,   368,   148,    73,
     344,   359,     8,   123,   344,    66,    67,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,   111,
     180,   141,   152,    71,   144,    71,   396,   187,   188,   189,
      31,   191,   140,   153,   137,   138,   139,   197,   148,   409,
     137,   138,   139,   606,   150,   151,   137,   138,   139,   141,
      22,    23,   144,    59,    60,   138,   139,    71,    73,    73,
      74,   153,   140,    78,   138,   139,   144,   140,   329,   121,
     148,   441,   442,   443,   144,   140,    49,   447,   448,   144,
     700,   140,   452,   148,   144,   144,   246,   140,    45,    46,
      47,   435,    49,   140,   438,   144,   466,   140,   468,    77,
      78,   445,   144,   473,   148,     8,   458,    92,    93,    94,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   695,   138,   139,   121,   496,    92,    93,    94,
     140,   489,    82,    71,   504,   396,   709,   700,   150,   491,
     491,   301,    13,   149,   515,   515,   719,   491,   409,   515,
     515,   491,   510,   511,   151,   315,    59,    60,   150,    13,
     149,   519,   520,   521,    99,   523,   154,    71,   148,   329,
     540,   106,   107,   108,   109,   110,   111,   112,    71,   752,
     441,   442,   755,   553,   148,   555,    13,   760,   150,     8,
      90,   561,    71,    73,   149,   565,   150,   148,   568,   772,
     570,   149,     8,    71,    61,   466,   152,   468,   148,    13,
     580,   119,   473,   583,   119,   585,   586,   152,   148,   589,
      42,    43,    44,    45,    46,    47,   596,    49,   148,     8,
     803,   149,   148,   148,   148,   606,   396,   156,   811,   149,
     606,    71,   148,   613,   140,   144,   149,   617,    71,   409,
      13,    13,   150,   120,   515,   156,   608,   149,   149,   611,
     833,   149,   148,   144,   837,    99,   618,   149,     8,   639,
     121,    13,   106,   107,   108,   109,   110,   111,   112,   540,
     650,   441,   442,   443,   150,   122,   150,   447,   448,   150,
     137,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    71,   565,   102,   466,   568,   468,   570,
     680,   768,   682,   473,   684,   150,   686,   149,   152,   104,
     664,   691,   151,    73,    13,   149,   670,   671,   698,   700,
     156,   149,   149,   149,   700,   596,   496,    59,    60,   149,
     149,   194,   150,     8,   149,   198,   122,   149,   148,   152,
     151,     8,   613,   149,   207,   515,   209,   210,   211,   148,
     151,    13,   121,   150,   708,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   148,   748,   149,
     540,   150,    73,   150,    13,    26,   738,    98,   148,    68,
     122,    73,   762,   553,   746,   106,   107,   108,   109,   110,
     111,   561,   150,    71,    73,   565,   758,   777,   568,   761,
     570,    59,    60,    98,   151,    73,    13,   150,   149,   789,
     790,    13,    13,   150,    71,   686,   151,    73,   150,   781,
      13,    71,   784,    26,   786,    73,   596,   150,   808,   783,
      13,   148,    90,   795,   814,   148,   102,   149,    73,   149,
     820,   823,   301,   613,   151,   466,   826,   617,   308,   639,
     541,   813,   613,   589,   671,   817,   315,   716,   313,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,   690,   595,   739,   836,   625,   180,   839,   750,   525,
     650,   473,    -1,   565,    -1,    -1,    -1,     4,     5,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    59,    60,    24,    -1,    -1,
     680,    -1,   682,    -1,    -1,    -1,   686,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,   698,    -1,
      47,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    73,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,   748,    49,
      -1,    -1,    -1,    -1,   443,    -1,    42,    43,   447,   448,
      -1,    -1,   762,    -1,    -1,    -1,    -1,    -1,    -1,   116,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   777,    22,    23,
      -1,    -1,    -1,    69,    70,    71,    -1,    -1,    -1,   789,
     790,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,   151,    -1,   153,   496,   808,    -1,
      -1,   158,   159,   160,   814,   162,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,   315,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,   125,
     126,   127,   128,   129,    -1,   192,    -1,    -1,    -1,   196,
     136,    -1,   152,    -1,    -1,   141,   142,   143,   144,   206,
      -1,    -1,    -1,    -1,   553,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   561,    -1,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,    -1,
      -1,    -1,    -1,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,   160,    -1,   265,   266,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   617,    -1,
      -1,   278,    -1,    -1,    -1,    -1,   180,    -1,    -1,   286,
      -1,    -1,    -1,   187,   188,   189,    -1,   191,     9,    10,
      11,    -1,    -1,   197,   443,    -1,    -1,    -1,   447,   448,
      -1,   650,    -1,   310,    25,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    -1,
      -1,   680,    -1,   682,    -1,    -1,    -1,    -1,    -1,    -1,
     347,    -1,    -1,    -1,    -1,    -1,    -1,   496,    -1,   698,
      -1,    -1,   359,    -1,    -1,    -1,    -1,    -1,   262,    -1,
       9,    10,    11,    -1,    -1,   372,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   278,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,   748,
      49,    -1,    -1,    -1,   553,    -1,    -1,    -1,    -1,    -1,
     417,    -1,   561,   762,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   329,    -1,    -1,   777,    -1,
     437,   152,   439,   440,    -1,    -1,    -1,    -1,    -1,    -1,
     789,   790,    -1,   347,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   359,    -1,    -1,    -1,   808,
      -1,    -1,    -1,    -1,    -1,   814,    -1,    -1,   617,    -1,
     477,    -1,   479,    -1,    -1,    -1,    -1,    -1,    -1,   486,
      -1,    -1,   489,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   396,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     149,   650,    -1,   510,   511,   409,    -1,   514,    -1,    -1,
      -1,    -1,   519,   520,   521,    -1,   523,    -1,   525,   526,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   680,    -1,   682,    -1,    -1,    -1,   441,   442,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   698,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     567,    -1,   466,    -1,   468,    -1,    -1,    -1,    -1,   473,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,    -1,   489,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   748,
      -1,    -1,    -1,    -1,    -1,   612,   510,   511,    -1,    -1,
      -1,    -1,    -1,   762,    -1,   519,   520,   521,    -1,   523,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   634,   777,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   540,    -1,    -1,    -1,
     789,   790,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,   808,
      49,   565,    -1,    -1,   568,   814,   570,    -1,    -1,   676,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   596,    -1,    -1,    -1,    -1,    -1,   705,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   613,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,    65,    -1,    -1,    -1,    69,
      70,    71,    72,    73,   751,    75,    -1,    -1,    -1,    79,
      80,    81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,
      -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,    99,
     100,   101,    -1,   103,   104,   105,    -1,    -1,    -1,   109,
     110,   111,   686,   113,   114,   115,   116,   117,   118,    -1,
      -1,    -1,    -1,   123,   124,   125,   126,   127,   128,   129,
       3,     4,     5,     6,     7,    -1,   136,    -1,    -1,    12,
      -1,   141,   142,   143,   144,    -1,    -1,    -1,   148,    -1,
     150,   151,   152,   153,   154,   155,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    65,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,
      -1,    -1,    95,    96,    97,    98,    99,   100,   101,    -1,
     103,   104,   105,    -1,    -1,    -1,   109,   110,   111,    -1,
     113,   114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,     3,     4,     5,
       6,     7,    -1,   136,    -1,    -1,    12,    -1,   141,   142,
     143,   144,    -1,    -1,    -1,   148,    -1,   150,   151,   152,
     153,   154,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,    65,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    75,
      -1,    -1,    -1,    79,    80,    81,    82,    -1,    84,    -1,
      86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,
      96,    97,    98,    99,   100,   101,    -1,   103,   104,   105,
      -1,    -1,    -1,   109,   110,   111,    -1,   113,   114,   115,
     116,   117,   118,    -1,    -1,    -1,    -1,   123,   124,   125,
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
      75,    -1,    -1,    -1,    79,    80,    81,    82,    83,    84,
      -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,    -1,
      95,    96,    97,    98,    -1,   100,   101,    -1,   103,    -1,
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
      88,    89,    -1,    91,    -1,    -1,    -1,    95,    96,    97,
      98,    -1,   100,   101,    -1,   103,    -1,   105,    -1,    -1,
      -1,   109,   110,   111,    -1,   113,   114,   115,   116,   117,
     118,    -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,
     128,   129,     3,     4,     5,     6,     7,    -1,   136,    -1,
      -1,    12,    -1,   141,   142,   143,   144,    -1,    -1,    -1,
     148,    -1,   150,   151,    -1,   153,   154,   155,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    65,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,
      91,    -1,    -1,    -1,    95,    96,    97,    98,    -1,   100,
     101,    -1,   103,    -1,   105,    -1,    -1,    -1,   109,   110,
     111,    -1,   113,   114,   115,   116,   117,   118,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,     3,
       4,     5,     6,     7,    -1,   136,    -1,    -1,    12,    -1,
     141,   142,   143,   144,    -1,    -1,    -1,   148,    -1,   150,
     151,   152,   153,   154,   155,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,
      84,    -1,    86,    87,    88,    -1,    -1,    91,    -1,    -1,
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
      -1,    -1,    79,    80,    81,    82,    -1,    84,    85,    86,
      -1,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,
      97,    98,    -1,   100,   101,    -1,   103,    -1,   105,    -1,
      -1,    -1,   109,   110,   111,    -1,   113,   114,   115,   116,
     117,   118,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,     3,     4,     5,     6,     7,    -1,   136,
      -1,    -1,    12,    -1,   141,   142,   143,   144,    -1,    -1,
      -1,   148,    -1,   150,   151,    -1,   153,   154,   155,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,    65,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,
      80,    81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,
      -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,    -1,
     100,   101,    -1,   103,    -1,   105,    -1,    -1,    -1,   109,
     110,   111,    -1,   113,   114,   115,   116,   117,   118,    -1,
      -1,    -1,    -1,   123,   124,   125,   126,   127,   128,   129,
       3,     4,     5,     6,     7,    -1,   136,    -1,    -1,    12,
      -1,   141,   142,   143,   144,    -1,    -1,    -1,   148,    -1,
     150,   151,   152,   153,   154,   155,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    65,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,
      -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,
      -1,    -1,    95,    96,    97,    98,    -1,   100,   101,    -1,
     103,    -1,   105,    -1,    -1,    -1,   109,   110,   111,    -1,
     113,   114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,     3,     4,     5,
       6,     7,    -1,   136,    -1,    -1,    12,    -1,   141,   142,
     143,   144,    -1,    -1,    -1,   148,    -1,   150,   151,   152,
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
     123,   124,   125,   126,   127,   128,   129,    -1,    -1,    -1,
      -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,    -1,    -1,    -1,   148,    -1,   150,   151,    -1,
     153,   154,   155,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,    65,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,
      80,    81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,
      -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,    -1,
     100,   101,    -1,   103,    -1,   105,    -1,    -1,    -1,    -1,
      -1,   111,    -1,   113,   114,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,   124,   125,   126,   127,   128,   129,
      -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,
      -1,   141,   142,   143,   144,    -1,    -1,    -1,   148,    -1,
     150,   151,    -1,   153,   154,   155,     3,     4,     5,     6,
       7,    -1,    -1,    -1,    -1,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    26,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    65,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    75,    -1,
      -1,    -1,    79,    80,    81,    82,    -1,    84,    -1,    86,
      -1,    88,    -1,    -1,    91,    -1,    -1,    -1,    95,    96,
      97,    98,    -1,   100,   101,    -1,   103,    -1,   105,    -1,
      -1,    -1,    -1,    -1,   111,    -1,   113,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,     3,     4,     5,     6,     7,    -1,   136,
      -1,    -1,    12,    -1,   141,   142,   143,   144,    -1,    -1,
      -1,   148,    -1,   150,   151,    -1,   153,   154,   155,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,    65,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,
      80,    81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,
      -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,    -1,
     100,   101,    -1,   103,    -1,   105,    -1,    -1,    -1,    -1,
      -1,   111,    -1,   113,   114,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,   124,   125,   126,   127,   128,   129,
       3,     4,     5,     6,     7,    -1,   136,    -1,    -1,    12,
      -1,   141,   142,   143,   144,    -1,    -1,    -1,   148,    -1,
     150,   151,    -1,   153,   154,   155,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    79,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    98,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,
      -1,   114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     123,   124,   125,   126,   127,   128,   129,     3,     4,     5,
       6,     7,    -1,   136,    -1,    -1,    12,    -1,   141,   142,
     143,   144,    -1,    -1,    -1,   148,    -1,   150,    -1,    -1,
     153,   154,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    79,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,
     126,   127,   128,   129,     3,     4,     5,     6,     7,    -1,
     136,    -1,    -1,    12,    -1,   141,   142,   143,   144,    -1,
      -1,    -1,   148,    -1,   150,    -1,    -1,   153,   154,   155,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    -1,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      79,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   123,   124,   125,   126,   127,   128,
     129,     3,     4,     5,     6,     7,    -1,   136,    -1,    -1,
      12,    -1,   141,   142,   143,   144,    -1,    -1,    -1,   148,
      -1,   150,    -1,    -1,   153,   154,   155,    -1,    -1,    -1,
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
     142,   143,   144,    -1,    -1,    -1,   148,   149,    -1,    -1,
      -1,   153,   154,   155,    -1,    -1,    31,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,
     115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,
     125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,
      -1,   136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,
      -1,    -1,    -1,   148,    -1,    -1,    -1,    -1,   153,   154,
     155,     3,     4,     5,     6,     7,    -1,    -1,    -1,    -1,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,
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
      -1,   153,   154,   155,    -1,    -1,    31,    -1,    -1,    -1,
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
     155,    -1,    -1,    31,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,   153,   154,   155,    -1,    -1,    -1,    -1,
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
     153,   154,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      -1,    -1,    48,    -1,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,    -1,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,
     126,   127,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,
     136,    -1,    -1,    -1,    -1,   141,   142,   143,   144,     9,
      10,    11,   148,    -1,    -1,    -1,    -1,   153,   154,   155,
      -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      -1,    49,    -1,    -1,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   152,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    -1,    49,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   152,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   152,    25,    -1,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      -1,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   152,    27,
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
      44,    45,    46,    47,    -1,    49,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    25,   150,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,   150,    27,    28,    29,    30,    31,
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
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   149,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   149,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    11,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,    -1,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      25,    49,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49
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
     161,   164,   167,   168,   175,   176,   178,   181,   186,   189,
     231,   232,   235,   237,   246,   249,   253,   254,   256,   257,
     262,   263,   264,   265,   266,   267,   268,   273,   282,   284,
      71,   111,   141,   232,   253,   253,   148,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   141,   144,   160,   237,   256,   257,   264,   256,
     253,   141,   144,   160,   237,   239,   240,   264,   266,   267,
     273,   148,   243,   148,    26,   228,   253,   167,   148,   148,
     148,   148,   148,   150,   253,   150,   253,    71,    71,   150,
     231,   253,   257,   169,   253,   144,   160,   162,   163,    73,
     153,   214,   215,   117,   117,    73,   216,   148,   148,   148,
     148,   148,   148,    73,    78,   137,   138,   139,   279,   280,
     144,   151,   160,   160,   253,   165,   151,    78,   244,   279,
      78,   279,   144,   148,     8,   150,    71,    71,    31,   177,
     140,     9,    10,    11,    25,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    49,   150,    59,    60,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   148,   140,   121,    61,   151,   153,   267,   177,
     253,   144,   160,   140,   140,   144,   160,   140,   148,   245,
     140,   121,   267,   149,   253,   253,     8,   150,    82,   253,
     229,   230,   253,   231,   257,    71,   200,   253,   150,   150,
     150,    13,   150,   150,   151,   150,   160,    90,     8,   150,
     151,   254,   257,     8,   150,    13,     8,   150,   173,   174,
     257,   257,   283,   257,   149,   123,   257,   274,   275,    31,
     253,   277,   278,    61,   121,   137,   280,    72,   253,   257,
      78,   137,   280,   160,   159,   150,   151,   148,   149,   116,
     152,   166,   167,   175,   176,   253,   154,   155,    71,   236,
      71,   182,   184,    71,   148,    71,   262,   267,   273,   253,
     253,   253,    26,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,   253,   253,   239,    31,   253,   253,   253,
     253,   253,   253,   253,   253,   253,   253,   253,   253,    31,
     212,   213,   231,   257,    71,   262,    71,   151,   262,   270,
     271,   272,   253,   269,   253,   149,   160,    71,    71,   160,
     262,   212,   262,   270,   149,   149,   253,   148,   149,   150,
       8,    90,    90,    13,     8,   149,   149,    42,    43,   124,
     136,   141,   144,   160,   237,   246,   247,   248,   165,    90,
      71,   163,   253,   215,   247,    73,     8,   149,     8,   149,
     149,   150,   148,     8,   149,   255,   257,   122,   149,     8,
     251,    71,    73,    74,   281,    71,    61,   152,   152,   148,
     152,   159,   212,   148,   152,   212,    13,   119,   187,   119,
     190,   179,   124,   141,   144,   160,   209,   210,   211,   238,
     148,   148,   267,   253,    26,    63,   257,   255,   149,     8,
     148,   148,   253,   148,   261,    61,   151,   156,   152,   149,
     241,    26,   167,   253,    26,   167,   204,   229,   253,   257,
      31,   196,   257,   247,    71,    26,   167,   199,    26,   151,
     201,   247,   247,   148,    78,   144,   160,   140,   152,    71,
     152,    13,   174,   150,   257,   276,   275,    13,    31,   253,
      31,   253,   156,   253,   212,   152,   149,   149,   149,   247,
     188,   120,   192,   191,   185,   148,   144,   160,   149,     8,
      31,    73,   212,   212,   253,   239,    31,   231,   257,   212,
     212,   152,   212,   258,   269,   253,   121,   242,   165,   205,
     149,   165,   150,   122,   195,   257,   195,    13,   165,   150,
     202,   150,   202,   247,   250,   252,   160,    71,   102,   247,
     274,   253,   255,   255,   122,   156,   149,   150,   238,   193,
     183,   194,   238,   151,   209,   160,   104,   233,   211,    73,
      13,   149,   149,   245,   255,   149,   149,   149,   259,   156,
     152,   270,   206,    66,    67,   207,   150,    83,   229,   196,
     149,   149,   247,    89,   202,    92,    93,    94,   202,   152,
     122,   149,     8,   251,   148,   149,    31,   253,   152,   194,
     151,     8,   217,   149,   148,   151,    31,    73,    13,   247,
     121,   260,    66,    67,   208,   148,   167,   150,   149,    26,
     167,   198,   198,   150,    92,   150,   253,    26,   150,   203,
     152,   247,   247,   238,   255,   217,   238,    99,   106,   107,
     108,   109,   110,   111,   112,   152,   218,   222,   223,   224,
     225,   227,   180,    31,    73,   234,   165,    73,    13,   247,
     270,   148,    26,    68,   253,    26,   167,   197,   165,   150,
     203,   165,   122,    73,   152,    71,    73,   226,   232,   225,
       8,   150,   151,    73,     8,   149,   152,    13,   247,   261,
     253,   165,   150,   149,   165,    87,   165,   247,   149,    13,
      13,     8,   150,   177,    71,   165,    31,    73,   247,   149,
     167,    85,   150,   151,   247,   247,    73,    71,    13,   152,
      73,    26,   150,   165,    13,   219,   247,   165,   152,   247,
     148,   102,   170,   171,   172,   209,   148,   172,   149,   238,
     220,    73,   150,   151,   221,   149,   165,   151,   152,   165,
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
        case 5:

/* Line 1455 of yacc.c  */
#line 194 "src/language/Php53ParserImpl.y"
    { observers.CurrentQualifiedName.GrabNameAndComment((yyvsp[(1) - (1)])); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 195 "src/language/Php53ParserImpl.y"
    { observers.CurrentQualifiedName.AddName((yyvsp[(3) - (3)])); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 283 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 330 "src/language/Php53ParserImpl.y"
    { observers.FunctionStart((yyvsp[(3) - (3)]), (yyvsp[(2) - (3)]), (yyvsp[(1) - (3)])); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 331 "src/language/Php53ParserImpl.y"
    { observers.FunctionFound(); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 332 "src/language/Php53ParserImpl.y"
    { observers.FunctionEnd(); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 336 "src/language/Php53ParserImpl.y"
    { observers.ClassSetName((yyvsp[(2) - (2)])); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 337 "src/language/Php53ParserImpl.y"
    { observers.ClassFound(); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 338 "src/language/Php53ParserImpl.y"
    { observers.ClassEnd(); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 339 "src/language/Php53ParserImpl.y"
    { observers.ClassSetName((yyvsp[(2) - (2)])); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 340 "src/language/Php53ParserImpl.y"
    { observers.ClassFound(); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 341 "src/language/Php53ParserImpl.y"
    { observers.ClassEnd(); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 345 "src/language/Php53ParserImpl.y"
    { observers.ClassStart((yyvsp[(1) - (1)]), false, false, false); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 346 "src/language/Php53ParserImpl.y"
    { observers.ClassStart((yyvsp[(1) - (2)]), true, false, false); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 347 "src/language/Php53ParserImpl.y"
    { observers.ClassStart((yyvsp[(1) - (2)]), false, true, false); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 352 "src/language/Php53ParserImpl.y"
    { observers.CurrentQualifiedName.Clear(); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 353 "src/language/Php53ParserImpl.y"
    { observers.ClassSetExtends(); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 357 "src/language/Php53ParserImpl.y"
    { observers.ClassStart((yyvsp[(1) - (1)]), false, false, true); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 362 "src/language/Php53ParserImpl.y"
    { observers.CurrentQualifiedName.Clear(); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 368 "src/language/Php53ParserImpl.y"
    { observers.CurrentQualifiedName.Clear(); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 373 "src/language/Php53ParserImpl.y"
    { observers.ClassAddToImplements(); ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 457 "src/language/Php53ParserImpl.y"
    { observers.CurrentParametersList.SetName((yyvsp[(2) - (2)]), false); ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 458 "src/language/Php53ParserImpl.y"
    { observers.CurrentParametersList.SetName((yyvsp[(3) - (3)]), true); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 459 "src/language/Php53ParserImpl.y"
    { observers.CurrentParametersList.SetName((yyvsp[(3) - (5)]), true);;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 460 "src/language/Php53ParserImpl.y"
    { observers.CurrentParametersList.SetName((yyvsp[(2) - (4)]), true); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 461 "src/language/Php53ParserImpl.y"
    { observers.CurrentParametersList.SetName((yyvsp[(4) - (4)]), false); ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 462 "src/language/Php53ParserImpl.y"
    { observers.CurrentParametersList.SetName((yyvsp[(5) - (5)]), true); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 463 "src/language/Php53ParserImpl.y"
    { observers.CurrentParametersList.SetName((yyvsp[(5) - (7)]), true); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 464 "src/language/Php53ParserImpl.y"
    { observers.CurrentParametersList.SetName((yyvsp[(4) - (6)]), false); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 469 "src/language/Php53ParserImpl.y"
    { observers.CurrentParametersList.Create(); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 470 "src/language/Php53ParserImpl.y"
    { observers.CreateParameterWithOptionalClassName(); ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 471 "src/language/Php53ParserImpl.y"
    { observers.CurrentParametersList.CreateWithOptionalType((yyvsp[(1) - (1)])); ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 480 "src/language/Php53ParserImpl.y"
    { observers.ExpressionAsCallArgument(); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 481 "src/language/Php53ParserImpl.y"
    { observers.ExpressionAsCallArgument(); ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 482 "src/language/Php53ParserImpl.y"
    { observers.ExpressionAsCallArgument(); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 483 "src/language/Php53ParserImpl.y"
    { observers.ExpressionAsCallArgument(); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 484 "src/language/Php53ParserImpl.y"
    { observers.ExpressionAsCallArgument(); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 485 "src/language/Php53ParserImpl.y"
    { observers.ExpressionAsCallArgument(); ;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 512 "src/language/Php53ParserImpl.y"
    { observers.CurrentMember.Clear(); ;}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 513 "src/language/Php53ParserImpl.y"
    { observers.CurrentMember.Clear(); ;}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 514 "src/language/Php53ParserImpl.y"
    { observers.CurrentMember.SetNameAndReturnReference((yyvsp[(4) - (4)]), (yyvsp[(3) - (4)]), (yyvsp[(2) - (4)])); ;}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 515 "src/language/Php53ParserImpl.y"
    { observers.ClassMemberFound(false); ;}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 516 "src/language/Php53ParserImpl.y"
    { observers.CurrentMember.Clear(); ;}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 526 "src/language/Php53ParserImpl.y"
    { observers.CurrentMember.SetAsPublic();  observers.CurrentMember.AppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 540 "src/language/Php53ParserImpl.y"
    { observers.CurrentMember.SetAsPublic(); observers.CurrentMember.AppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 541 "src/language/Php53ParserImpl.y"
    { observers.CurrentMember.SetAsProtected(); observers.CurrentMember.AppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 542 "src/language/Php53ParserImpl.y"
    { observers.CurrentMember.SetAsPrivate(); observers.CurrentMember.AppendToComment((yyvsp[(1) - (1)]));;}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 543 "src/language/Php53ParserImpl.y"
    { observers.CurrentMember.IsStaticMember = true; observers.CurrentMember.AppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 544 "src/language/Php53ParserImpl.y"
    { observers.CurrentMember.IsAbstractMember = true; observers.CurrentMember.AppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 545 "src/language/Php53ParserImpl.y"
    { observers.CurrentMember.IsFinalMember = true; observers.CurrentMember.AppendToComment((yyvsp[(1) - (1)])); ;}
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 549 "src/language/Php53ParserImpl.y"
    { observers.CurrentMember.SetNameAndReturnReference((yyvsp[(3) - (3)]), (yyvsp[(3) - (3)]), (yyvsp[(3) - (3)])); observers.ClassMemberFound(true); ;}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 550 "src/language/Php53ParserImpl.y"
    { observers.CurrentMember.SetNameAndReturnReference((yyvsp[(3) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(3) - (5)])); observers.ClassMemberFound(true); ;}
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 551 "src/language/Php53ParserImpl.y"
    { observers.CurrentMember.SetNameAndReturnReference((yyvsp[(1) - (1)]), (yyvsp[(1) - (1)]), (yyvsp[(1) - (1)])); observers.ClassMemberFound(true); ;}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 552 "src/language/Php53ParserImpl.y"
    { observers.CurrentMember.SetNameAndReturnReference((yyvsp[(1) - (3)]), (yyvsp[(1) - (3)]), (yyvsp[(1) - (3)])); observers.ClassMemberFound(true); ;}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 557 "src/language/Php53ParserImpl.y"
    { observers.CurrentMember.SetNameAndReturnReference((yyvsp[(3) - (5)]), (yyvsp[(3) - (5)]), (yyvsp[(3) - (5)])); observers.ClassMemberFound(true); ;}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 558 "src/language/Php53ParserImpl.y"
    { observers.CurrentMember.SetAsConst((yyvsp[(2) - (4)]), (yyvsp[(1) - (4)])); observers.ClassMemberFound(true); ;}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 577 "src/language/Php53ParserImpl.y"
    {  ;}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 578 "src/language/Php53ParserImpl.y"
    { observers.VariableFound(); ;}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 579 "src/language/Php53ParserImpl.y"
    { observers.VariableFound(); ;}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 580 "src/language/Php53ParserImpl.y"
    { observers.ExpressionNewCall(); ;}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 581 "src/language/Php53ParserImpl.y"
    { observers.ExpressionNewCall(); ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 582 "src/language/Php53ParserImpl.y"
    { observers.ExpressionVariable((yyvsp[(1) - (2)])); ;}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 583 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 584 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 585 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 586 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 587 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 588 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 589 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 590 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 591 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 592 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 593 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 594 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 595 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 596 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 597 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 598 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 599 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 600 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 601 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 602 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 603 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 604 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 605 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 606 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 607 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 608 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 609 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 610 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 611 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 612 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 613 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 614 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 615 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 616 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 617 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 618 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 619 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 620 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 621 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 622 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 623 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 624 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 625 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 626 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 627 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 630 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (5)])); ;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 632 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (4)])); ;}
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 633 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 634 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 635 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 636 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 637 "src/language/Php53ParserImpl.y"
    { observers.ExpressionArray((yyvsp[(1) - (2)])); ;}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 638 "src/language/Php53ParserImpl.y"
    { observers.ExpressionVariable((yyvsp[(1) - (2)])); ;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 639 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 644 "src/language/Php53ParserImpl.y"
    { observers.ExpressionArray((yyvsp[(1) - (4)])); ;}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 645 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); /* results of backtick operator is a string */ ;}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 649 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (9)])); ;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 669 "src/language/Php53ParserImpl.y"
    { observers.FunctionCallStart(); ;}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 670 "src/language/Php53ParserImpl.y"
    { observers.FunctionCallEnd(); ;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 739 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 740 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 741 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 742 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 743 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 744 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 745 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 746 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 747 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 748 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (1)])); ;}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 749 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (3)])); ;}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 750 "src/language/Php53ParserImpl.y"
    { observers.ExpressionScalar((yyvsp[(1) - (2)])); ;}
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 816 "src/language/Php53ParserImpl.y"
    { observers.CurrentExpression.AppendToChain((yyvsp[(2) - (4)]), (yyvsp[(3) - (4)]), '(' == (yyvsp[(4) - (4)]).Token); ;}
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 817 "src/language/Php53ParserImpl.y"
    { observers.ExpressionVariables.push_back(observers.CurrentExpression); ;}
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 818 "src/language/Php53ParserImpl.y"
    { observers.ExpressionVariables.push_back(observers.CurrentExpression); ;}
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 823 "src/language/Php53ParserImpl.y"
    {;}
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 828 "src/language/Php53ParserImpl.y"
    { observers.CurrentExpression.AppendToChain((yyvsp[(1) - (3)]), (yyvsp[(2) - (3)]), '(' == (yyvsp[(3) - (3)]).Token);  ;}
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 852 "src/language/Php53ParserImpl.y"
    { observers.CurrentExpressionAsFunctionCall(); ;}
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 862 "src/language/Php53ParserImpl.y"
    { observers.ExpressionUnknown((yyvsp[(1) - (4)])); ;}
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 863 "src/language/Php53ParserImpl.y"
    { observers.ExpressionUnknown((yyvsp[(1) - (4)])); ;}
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 868 "src/language/Php53ParserImpl.y"
    { observers.ExpressionVariable((yyvsp[(1) - (1)])); ;}
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 905 "src/language/Php53ParserImpl.y"
    {;}
    break;



/* Line 1455 of yacc.c  */
#line 4605 "src/language/Php53ParserImpl.cpp"
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
#line 968 "src/language/Php53ParserImpl.y"


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

