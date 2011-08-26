
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
 * @copyright  2009-2011 Roberto Perpuly
 * @license    http://www.opensource.org/licenses/mit-license.php The MIT License
 * @author     $Author: robertop2004@gmail.com $
 * @date       $Date: 2011-08-20 14:52:24 -0700 (Sat, 20 Aug 2011) $
 * @version    $Rev: 599 $ 
 */	
 #include <language/UCharBufferedFileClass.h>
 #include <language/LexicalAnalyzerClass.h>
 #include <unicode/unistr.h>
 #include <string>
 #define YYSTYPE int
 
 int php53lex(YYSTYPE* semanticValue, mvceditor::LexicalAnalyzerClass &analyzer);
 void php53error(mvceditor::LexicalAnalyzerClass &analyzer, std::string msg);



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
#define YYLAST   5290

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  157
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  181
/* YYNRULES -- Number of rules.  */
#define YYNRULES  464
/* YYNRULES -- Number of states.  */
#define YYNSTATES  894

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
     337,   348,   349,   358,   359,   367,   369,   372,   375,   376,
     379,   381,   382,   385,   386,   389,   391,   395,   396,   399,
     401,   404,   406,   411,   413,   418,   420,   425,   429,   435,
     439,   444,   449,   455,   456,   457,   464,   465,   471,   473,
     475,   477,   482,   483,   484,   492,   493,   494,   503,   504,
     507,   508,   512,   514,   515,   518,   522,   528,   533,   538,
     544,   552,   559,   560,   562,   564,   566,   567,   569,   571,
     574,   578,   582,   587,   591,   593,   595,   598,   603,   607,
     613,   615,   619,   622,   623,   624,   629,   632,   633,   643,
     645,   649,   651,   653,   654,   656,   658,   661,   663,   665,
     667,   669,   671,   673,   677,   683,   685,   689,   695,   700,
     704,   706,   707,   709,   710,   715,   717,   718,   726,   730,
     735,   736,   744,   745,   750,   753,   757,   761,   765,   769,
     773,   777,   781,   785,   789,   793,   797,   800,   803,   806,
     809,   810,   815,   816,   821,   822,   827,   828,   833,   837,
     841,   845,   849,   853,   857,   861,   865,   869,   873,   877,
     881,   884,   887,   890,   893,   897,   901,   905,   909,   913,
     917,   921,   925,   929,   933,   934,   935,   943,   944,   950,
     952,   955,   958,   961,   964,   967,   970,   973,   976,   977,
     981,   983,   988,   992,   995,   996,  1007,  1009,  1010,  1015,
    1019,  1024,  1026,  1029,  1030,  1036,  1037,  1045,  1046,  1053,
    1054,  1062,  1063,  1071,  1072,  1080,  1081,  1089,  1090,  1096,
    1098,  1100,  1104,  1107,  1109,  1113,  1116,  1118,  1120,  1121,
    1122,  1129,  1131,  1134,  1135,  1138,  1139,  1142,  1146,  1147,
    1149,  1151,  1152,  1156,  1158,  1160,  1162,  1164,  1166,  1168,
    1170,  1172,  1174,  1176,  1180,  1183,  1185,  1187,  1191,  1194,
    1197,  1200,  1205,  1207,  1211,  1213,  1215,  1217,  1221,  1224,
    1226,  1230,  1234,  1235,  1238,  1239,  1241,  1247,  1251,  1255,
    1257,  1259,  1261,  1263,  1265,  1267,  1268,  1269,  1277,  1279,
    1282,  1283,  1284,  1289,  1290,  1295,  1296,  1298,  1301,  1305,
    1309,  1311,  1313,  1315,  1317,  1320,  1322,  1327,  1332,  1334,
    1336,  1341,  1342,  1344,  1346,  1347,  1350,  1355,  1360,  1362,
    1364,  1368,  1370,  1373,  1377,  1379,  1381,  1382,  1388,  1389,
    1390,  1393,  1399,  1403,  1407,  1409,  1416,  1421,  1426,  1429,
    1432,  1435,  1437,  1440,  1442,  1443,  1449,  1453,  1457,  1464,
    1468,  1470,  1472,  1474,  1479,  1484,  1487,  1490,  1495,  1498,
    1501,  1503,  1504,  1509,  1513
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
     161,    90,    71,    -1,   167,     8,    71,    13,   294,    -1,
      99,    71,    13,   294,    -1,    -1,   168,   169,   170,    -1,
      -1,   171,    -1,   202,    -1,   203,    -1,   116,   148,   149,
     150,    -1,   172,    -1,    71,    26,    -1,   151,   168,   152,
      -1,    -1,    -1,    65,   148,   300,   149,   173,   171,   174,
     228,   232,    -1,    -1,    -1,    65,   148,   300,   149,    26,
     175,   168,   176,   230,   233,    68,   150,    -1,    -1,    -1,
      82,   148,   177,   300,   149,   178,   227,    -1,    -1,    -1,
      81,   179,   171,    82,   148,   180,   300,   149,   150,    -1,
      -1,    -1,    -1,    84,   148,   254,   150,   181,   254,   150,
     182,   254,   149,   183,   218,    -1,    -1,    91,   148,   300,
     149,   184,   222,    -1,    95,   150,    -1,    95,   300,   150,
      -1,    96,   150,    -1,    96,   300,   150,    -1,   100,   150,
      -1,   100,   257,   150,    -1,   100,   304,   150,    -1,   105,
     239,   150,    -1,   111,   241,   150,    -1,    80,   253,   150,
      -1,    75,    -1,   300,   150,    -1,   113,   148,   200,   149,
     150,    -1,    -1,    -1,    86,   148,   304,    90,   185,   217,
     216,   149,   186,   219,    -1,    -1,    -1,    86,   148,   257,
      90,   187,   304,   216,   149,   188,   219,    -1,    -1,    88,
     189,   148,   221,   149,   220,    -1,   150,    -1,    -1,    -1,
      -1,    -1,    -1,   101,   190,   151,   168,   152,   102,   148,
     191,   283,   192,    73,   149,   193,   151,   168,   152,   194,
     195,    -1,   103,   300,   150,    -1,    97,    71,   150,    -1,
     196,    -1,    -1,   197,    -1,   196,   197,    -1,    -1,    -1,
     102,   148,   283,   198,    73,   149,   199,   151,   168,   152,
      -1,   201,    -1,   200,     8,   201,    -1,   304,    -1,   205,
      -1,   207,    -1,    -1,    31,    -1,    -1,   270,   204,    71,
     206,   148,   234,   149,   151,   168,   152,    -1,    -1,   210,
      71,   211,   208,   214,   151,   242,   152,    -1,    -1,   212,
      71,   209,   213,   151,   242,   152,    -1,   117,    -1,   110,
     117,    -1,   109,   117,    -1,    -1,   119,   283,    -1,   118,
      -1,    -1,   119,   215,    -1,    -1,   120,   215,    -1,   283,
      -1,   215,     8,   283,    -1,    -1,   122,   217,    -1,   304,
      -1,    31,   304,    -1,   171,    -1,    26,   168,    85,   150,
      -1,   171,    -1,    26,   168,    87,   150,    -1,   171,    -1,
      26,   168,    89,   150,    -1,    71,    13,   294,    -1,   221,
       8,    71,    13,   294,    -1,   151,   223,   152,    -1,   151,
     150,   223,   152,    -1,    26,   223,    92,   150,    -1,    26,
     150,   223,    92,   150,    -1,    -1,    -1,   223,    93,   300,
     226,   224,   168,    -1,    -1,   223,    94,   226,   225,   168,
      -1,    26,    -1,   150,    -1,   171,    -1,    26,   168,    83,
     150,    -1,    -1,    -1,   228,    66,   148,   300,   149,   229,
     171,    -1,    -1,    -1,   230,    66,   148,   300,   149,    26,
     231,   168,    -1,    -1,    67,   171,    -1,    -1,    67,    26,
     168,    -1,   235,    -1,    -1,   236,    73,    -1,   236,    31,
      73,    -1,   236,    31,    73,    13,   294,    -1,   236,    73,
      13,   294,    -1,   235,     8,   236,    73,    -1,   235,     8,
     236,    31,    73,    -1,   235,     8,   236,    31,    73,    13,
     294,    -1,   235,     8,   236,    73,    13,   294,    -1,    -1,
     283,    -1,   124,    -1,   238,    -1,    -1,   257,    -1,   304,
      -1,    31,   302,    -1,   238,     8,   257,    -1,   238,     8,
     304,    -1,   238,     8,    31,   302,    -1,   239,     8,   240,
      -1,   240,    -1,    73,    -1,   153,   301,    -1,   153,   151,
     300,   152,    -1,   241,     8,    73,    -1,   241,     8,    73,
      13,   294,    -1,    73,    -1,    73,    13,   294,    -1,   242,
     243,    -1,    -1,    -1,   247,   244,   251,   150,    -1,   252,
     150,    -1,    -1,   248,   270,   204,    71,   245,   148,   234,
     149,   246,    -1,   150,    -1,   151,   168,   152,    -1,   249,
      -1,   112,    -1,    -1,   249,    -1,   250,    -1,   249,   250,
      -1,   106,    -1,   107,    -1,   108,    -1,   111,    -1,   110,
      -1,   109,    -1,   251,     8,    73,    -1,   251,     8,    73,
      13,   294,    -1,    73,    -1,    73,    13,   294,    -1,   252,
       8,    71,    13,   294,    -1,    99,    71,    13,   294,    -1,
     253,     8,   300,    -1,   300,    -1,    -1,   255,    -1,    -1,
     255,     8,   256,   300,    -1,   300,    -1,    -1,   123,   148,
     258,   325,   149,    13,   300,    -1,   304,    13,   300,    -1,
     304,    13,    31,   304,    -1,    -1,   304,    13,    31,    63,
     284,   259,   292,    -1,    -1,    63,   284,   260,   292,    -1,
      62,   300,    -1,   304,    24,   300,    -1,   304,    23,   300,
      -1,   304,    22,   300,    -1,   304,    21,   300,    -1,   304,
      20,   300,    -1,   304,    19,   300,    -1,   304,    18,   300,
      -1,   304,    17,   300,    -1,   304,    16,   300,    -1,   304,
      15,   300,    -1,   304,    14,   300,    -1,   303,    60,    -1,
      60,   303,    -1,   303,    59,    -1,    59,   303,    -1,    -1,
     300,    27,   261,   300,    -1,    -1,   300,    28,   262,   300,
      -1,    -1,   300,     9,   263,   300,    -1,    -1,   300,    11,
     264,   300,    -1,   300,    10,   300,    -1,   300,    29,   300,
      -1,   300,    31,   300,    -1,   300,    30,   300,    -1,   300,
      44,   300,    -1,   300,    42,   300,    -1,   300,    43,   300,
      -1,   300,    45,   300,    -1,   300,    46,   300,    -1,   300,
      47,   300,    -1,   300,    41,   300,    -1,   300,    40,   300,
      -1,    42,   300,    -1,    43,   300,    -1,    48,   300,    -1,
      50,   300,    -1,   300,    33,   300,    -1,   300,    32,   300,
      -1,   300,    35,   300,    -1,   300,    34,   300,    -1,   300,
      36,   300,    -1,   300,    39,   300,    -1,   300,    37,   300,
      -1,   300,    38,   300,    -1,   300,    49,   284,    -1,   148,
     300,   149,    -1,    -1,    -1,   300,    25,   265,   300,    26,
     266,   300,    -1,    -1,   300,    25,    26,   267,   300,    -1,
     334,    -1,    58,   300,    -1,    57,   300,    -1,    56,   300,
      -1,    55,   300,    -1,    54,   300,    -1,    53,   300,    -1,
      52,   300,    -1,    64,   290,    -1,    -1,    51,   268,   300,
      -1,   296,    -1,   124,   148,   328,   149,    -1,   154,   291,
     154,    -1,    12,   300,    -1,    -1,   270,   204,   148,   269,
     234,   149,   271,   151,   168,   152,    -1,    98,    -1,    -1,
     104,   148,   272,   149,    -1,   272,     8,    73,    -1,   272,
       8,    31,    73,    -1,    73,    -1,    31,    73,    -1,    -1,
     161,   148,   274,   237,   149,    -1,    -1,   141,   144,   161,
     148,   275,   237,   149,    -1,    -1,   144,   161,   148,   276,
     237,   149,    -1,    -1,   282,   140,    71,   148,   277,   237,
     149,    -1,    -1,   282,   140,   312,   148,   278,   237,   149,
      -1,    -1,   314,   140,    71,   148,   279,   237,   149,    -1,
      -1,   314,   140,   312,   148,   280,   237,   149,    -1,    -1,
     312,   148,   281,   237,   149,    -1,   111,    -1,   161,    -1,
     141,   144,   161,    -1,   144,   161,    -1,   161,    -1,   141,
     144,   161,    -1,   144,   161,    -1,   282,    -1,   285,    -1,
      -1,    -1,   316,   121,   286,   320,   287,   288,    -1,   316,
      -1,   288,   289,    -1,    -1,   121,   320,    -1,    -1,   148,
     149,    -1,   148,   300,   149,    -1,    -1,    78,    -1,   330,
      -1,    -1,   148,   237,   149,    -1,    69,    -1,    70,    -1,
      79,    -1,   128,    -1,   129,    -1,   143,    -1,   125,    -1,
     126,    -1,   127,    -1,   142,    -1,   136,    78,   137,    -1,
     136,   137,    -1,   293,    -1,   161,    -1,   141,   144,   161,
      -1,   144,   161,    -1,    42,   294,    -1,    43,   294,    -1,
     124,   148,   297,   149,    -1,   295,    -1,   282,   140,    71,
      -1,    72,    -1,   337,    -1,   161,    -1,   141,   144,   161,
      -1,   144,   161,    -1,   293,    -1,   155,   330,   155,    -1,
     136,   330,   137,    -1,    -1,   299,   298,    -1,    -1,     8,
      -1,   299,     8,   294,   122,   294,    -1,   299,     8,   294,
      -1,   294,   122,   294,    -1,   294,    -1,   301,    -1,   257,
      -1,   304,    -1,   304,    -1,   304,    -1,    -1,    -1,   315,
     121,   305,   320,   306,   310,   307,    -1,   315,    -1,   307,
     308,    -1,    -1,    -1,   121,   320,   309,   310,    -1,    -1,
     148,   311,   237,   149,    -1,    -1,   317,    -1,   324,   317,
      -1,   282,   140,   312,    -1,   314,   140,   312,    -1,   317,
      -1,   316,    -1,   273,    -1,   317,    -1,   324,   317,    -1,
     313,    -1,   317,    61,   319,   156,    -1,   317,   151,   300,
     152,    -1,   318,    -1,    73,    -1,   153,   151,   300,   152,
      -1,    -1,   300,    -1,   322,    -1,    -1,   312,   321,    -1,
     322,    61,   319,   156,    -1,   322,   151,   300,   152,    -1,
     323,    -1,    71,    -1,   151,   300,   152,    -1,   153,    -1,
     324,   153,    -1,   325,     8,   326,    -1,   326,    -1,   304,
      -1,    -1,   123,   148,   327,   325,   149,    -1,    -1,    -1,
     329,   298,    -1,   329,     8,   300,   122,   300,    -1,   329,
       8,   300,    -1,   300,   122,   300,    -1,   300,    -1,   329,
       8,   300,   122,    31,   302,    -1,   329,     8,    31,   302,
      -1,   300,   122,    31,   302,    -1,    31,   302,    -1,   330,
     331,    -1,   330,    78,    -1,   331,    -1,    78,   331,    -1,
      73,    -1,    -1,    73,    61,   332,   333,   156,    -1,    73,
     121,    71,    -1,   138,   300,   152,    -1,   138,    72,    61,
     300,   156,   152,    -1,   139,   304,   152,    -1,    71,    -1,
      74,    -1,    73,    -1,   114,   148,   335,   149,    -1,   115,
     148,   304,   149,    -1,     7,   300,    -1,     6,   300,    -1,
       5,   148,   300,   149,    -1,     4,   300,    -1,     3,   300,
      -1,   304,    -1,    -1,   335,     8,   336,   304,    -1,   282,
     140,    71,    -1,   314,   140,    71,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   179,   179,   183,   183,   184,   188,   189,   193,   194,
     195,   196,   197,   198,   198,   200,   200,   202,   203,   207,
     208,   212,   213,   214,   215,   219,   220,   224,   224,   225,
     230,   231,   232,   233,   238,   239,   243,   244,   244,   244,
     245,   245,   245,   246,   246,   246,   247,   247,   247,   251,
     253,   255,   248,   257,   257,   258,   259,   260,   261,   262,
     263,   264,   265,   266,   267,   268,   269,   270,   272,   273,
     271,   276,   277,   275,   279,   279,   280,   281,   282,   283,
     284,   285,   281,   287,   288,   293,   294,   298,   299,   304,
     304,   304,   309,   310,   314,   318,   322,   327,   328,   333,
     333,   339,   338,   345,   344,   354,   355,   356,   360,   361,
     365,   368,   370,   373,   375,   379,   380,   384,   385,   390,
     391,   395,   396,   401,   402,   407,   408,   413,   414,   419,
     420,   421,   422,   427,   428,   428,   429,   429,   434,   435,
     440,   441,   446,   448,   448,   452,   454,   454,   458,   460,
     464,   466,   471,   472,   477,   478,   479,   480,   481,   482,
     483,   484,   489,   490,   491,   496,   497,   502,   503,   504,
     505,   506,   507,   511,   512,   517,   518,   519,   524,   525,
     526,   527,   533,   534,   539,   539,   540,   541,   541,   547,
     548,   552,   553,   557,   558,   562,   563,   567,   568,   569,
     570,   571,   572,   576,   577,   578,   579,   583,   584,   588,
     589,   594,   595,   599,   599,   600,   604,   604,   605,   606,
     607,   607,   608,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   625,   626,   626,   627,   627,   628,   628,   629,   630,
     631,   632,   633,   634,   635,   636,   637,   638,   639,   640,
     641,   642,   643,   644,   645,   646,   647,   648,   649,   650,
     651,   652,   653,   654,   655,   656,   655,   658,   658,   660,
     661,   662,   663,   664,   665,   666,   667,   668,   669,   669,
     670,   671,   672,   673,   674,   674,   679,   682,   684,   688,
     689,   690,   691,   695,   695,   698,   698,   701,   701,   704,
     704,   707,   707,   710,   710,   713,   713,   716,   716,   722,
     723,   724,   725,   729,   730,   731,   737,   738,   743,   744,
     743,   746,   751,   752,   757,   761,   762,   763,   767,   768,
     769,   774,   775,   780,   781,   782,   783,   784,   785,   786,
     787,   788,   789,   790,   791,   796,   797,   798,   799,   800,
     801,   802,   803,   807,   811,   812,   813,   814,   815,   816,
     817,   818,   823,   824,   827,   829,   833,   834,   835,   836,
     840,   841,   846,   851,   855,   859,   860,   859,   862,   866,
     867,   872,   872,   876,   876,   879,   883,   884,   888,   889,
     894,   898,   899,   904,   905,   906,   910,   911,   912,   917,
     918,   922,   923,   928,   929,   929,   933,   934,   935,   939,
     940,   944,   945,   949,   950,   955,   956,   956,   957,   962,
     963,   967,   968,   969,   970,   971,   972,   973,   974,   978,
     979,   980,   981,   987,   988,   988,   989,   990,   991,   992,
     997,   998,   999,  1004,  1005,  1006,  1007,  1008,  1009,  1010,
    1014,  1015,  1015,  1019,  1020
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
  "unticked_function_declaration_statement", "$@29",
  "unticked_class_declaration_statement", "$@30", "$@31",
  "class_entry_type", "extends_from", "interface_entry",
  "interface_extends_list", "implements_list", "interface_list",
  "foreach_optional_arg", "foreach_variable", "for_statement",
  "foreach_statement", "declare_statement", "declare_list",
  "switch_case_list", "case_list", "$@32", "$@33", "case_separator",
  "while_statement", "elseif_list", "$@34", "new_elseif_list", "$@35",
  "else_single", "new_else_single", "parameter_list",
  "non_empty_parameter_list", "optional_class_type",
  "function_call_parameter_list", "non_empty_function_call_parameter_list",
  "global_var_list", "global_var", "static_var_list",
  "class_statement_list", "class_statement", "$@36", "$@37", "method_body",
  "variable_modifiers", "method_modifiers", "non_empty_member_modifiers",
  "member_modifier", "class_variable_declaration",
  "class_constant_declaration", "echo_expr_list", "for_expr",
  "non_empty_for_expr", "$@38", "expr_without_variable", "$@39", "$@40",
  "$@41", "$@42", "$@43", "$@44", "$@45", "$@46", "$@47", "$@48", "$@49",
  "$@50", "function", "lexical_vars", "lexical_var_list", "function_call",
  "$@51", "$@52", "$@53", "$@54", "$@55", "$@56", "$@57", "$@58",
  "class_name", "fully_qualified_class_name", "class_name_reference",
  "dynamic_class_name_reference", "$@59", "$@60",
  "dynamic_class_name_variable_properties",
  "dynamic_class_name_variable_property", "exit_expr", "backticks_expr",
  "ctor_arguments", "common_scalar", "static_scalar",
  "static_class_constant", "scalar", "static_array_pair_list",
  "possible_comma", "non_empty_static_array_pair_list", "expr",
  "r_variable", "w_variable", "rw_variable", "variable", "$@61", "$@62",
  "variable_properties", "variable_property", "$@63", "method_or_not",
  "$@64", "variable_without_objects", "static_member",
  "variable_class_name", "base_variable_with_function_calls",
  "base_variable", "reference_variable", "compound_variable", "dim_offset",
  "object_property", "$@65", "object_dim_list", "variable_name",
  "simple_indirect_reference", "assignment_list",
  "assignment_list_element", "$@66", "array_pair_list",
  "non_empty_array_pair_list", "encaps_list", "encaps_var", "$@67",
  "encaps_var_offset", "internal_functions_in_yacc", "isset_variables",
  "$@68", "class_constant", 0
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
     205,   208,   207,   209,   207,   210,   210,   210,   211,   211,
     212,   213,   213,   214,   214,   215,   215,   216,   216,   217,
     217,   218,   218,   219,   219,   220,   220,   221,   221,   222,
     222,   222,   222,   223,   224,   223,   225,   223,   226,   226,
     227,   227,   228,   229,   228,   230,   231,   230,   232,   232,
     233,   233,   234,   234,   235,   235,   235,   235,   235,   235,
     235,   235,   236,   236,   236,   237,   237,   238,   238,   238,
     238,   238,   238,   239,   239,   240,   240,   240,   241,   241,
     241,   241,   242,   242,   244,   243,   243,   245,   243,   246,
     246,   247,   247,   248,   248,   249,   249,   250,   250,   250,
     250,   250,   250,   251,   251,   251,   251,   252,   252,   253,
     253,   254,   254,   256,   255,   255,   258,   257,   257,   257,
     259,   257,   260,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     261,   257,   262,   257,   263,   257,   264,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   257,   257,
     257,   257,   257,   257,   265,   266,   257,   267,   257,   257,
     257,   257,   257,   257,   257,   257,   257,   257,   268,   257,
     257,   257,   257,   257,   269,   257,   270,   271,   271,   272,
     272,   272,   272,   274,   273,   275,   273,   276,   273,   277,
     273,   278,   273,   279,   273,   280,   273,   281,   273,   282,
     282,   282,   282,   283,   283,   283,   284,   284,   286,   287,
     285,   285,   288,   288,   289,   290,   290,   290,   291,   291,
     291,   292,   292,   293,   293,   293,   293,   293,   293,   293,
     293,   293,   293,   293,   293,   294,   294,   294,   294,   294,
     294,   294,   294,   295,   296,   296,   296,   296,   296,   296,
     296,   296,   297,   297,   298,   298,   299,   299,   299,   299,
     300,   300,   301,   302,   303,   305,   306,   304,   304,   307,
     307,   309,   308,   311,   310,   310,   312,   312,   313,   313,
     314,   315,   315,   316,   316,   316,   317,   317,   317,   318,
     318,   319,   319,   320,   321,   320,   322,   322,   322,   323,
     323,   324,   324,   325,   325,   326,   327,   326,   326,   328,
     328,   329,   329,   329,   329,   329,   329,   329,   329,   330,
     330,   330,   330,   331,   332,   331,   331,   331,   331,   331,
     333,   333,   333,   334,   334,   334,   334,   334,   334,   334,
     335,   336,   335,   337,   337
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
      10,     0,     8,     0,     7,     1,     2,     2,     0,     2,
       1,     0,     2,     0,     2,     1,     3,     0,     2,     1,
       2,     1,     4,     1,     4,     1,     4,     3,     5,     3,
       4,     4,     5,     0,     0,     6,     0,     5,     1,     1,
       1,     4,     0,     0,     7,     0,     0,     8,     0,     2,
       0,     3,     1,     0,     2,     3,     5,     4,     4,     5,
       7,     6,     0,     1,     1,     1,     0,     1,     1,     2,
       3,     3,     4,     3,     1,     1,     2,     4,     3,     5,
       1,     3,     2,     0,     0,     4,     2,     0,     9,     1,
       3,     1,     1,     0,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     3,     5,     1,     3,     5,     4,     3,
       1,     0,     1,     0,     4,     1,     0,     7,     3,     4,
       0,     7,     0,     4,     2,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       0,     4,     0,     4,     0,     4,     0,     4,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     2,     2,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     0,     0,     7,     0,     5,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     0,     3,
       1,     4,     3,     2,     0,    10,     1,     0,     4,     3,
       4,     1,     2,     0,     5,     0,     7,     0,     6,     0,
       7,     0,     7,     0,     7,     0,     7,     0,     5,     1,
       1,     3,     2,     1,     3,     2,     1,     1,     0,     0,
       6,     1,     2,     0,     2,     0,     2,     3,     0,     1,
       1,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     2,     1,     1,     3,     2,     2,
       2,     4,     1,     3,     1,     1,     1,     3,     2,     1,
       3,     3,     0,     2,     0,     1,     5,     3,     3,     1,
       1,     1,     1,     1,     1,     0,     0,     7,     1,     2,
       0,     0,     4,     0,     4,     0,     1,     2,     3,     3,
       1,     1,     1,     1,     2,     1,     4,     4,     1,     1,
       4,     0,     1,     1,     0,     2,     4,     4,     1,     1,
       3,     1,     2,     3,     1,     1,     0,     5,     0,     0,
       2,     5,     3,     3,     1,     6,     4,     4,     2,     2,
       2,     1,     2,     1,     0,     5,     3,     3,     6,     3,
       1,     1,     1,     4,     4,     2,     2,     4,     2,     2,
       1,     0,     4,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       5,     0,     3,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   288,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   335,     0,   343,
     344,     6,   364,   409,    65,   345,     0,    46,     0,     0,
       0,    74,     0,     0,     0,     0,   296,     0,     0,    77,
       0,     0,     0,     0,     0,   319,     0,     0,     0,     0,
     105,   110,     0,     0,   349,   350,   351,   346,   347,     0,
       0,   352,   348,     0,     0,    76,    29,   421,   338,     0,
     366,     4,     0,     8,    34,     9,    10,    95,    96,     0,
       0,   381,    97,   402,     0,   369,   290,     0,   380,     0,
     382,     0,   405,     0,   388,   401,   403,   408,     0,   279,
     365,     6,   319,     0,    97,   459,   458,     0,   456,   455,
     293,   260,   261,   262,   263,     0,   286,   285,   284,   283,
     282,   281,   280,     0,     0,   320,     0,   239,   384,     0,
     237,   224,     0,     0,   320,   326,   222,   327,     0,   331,
     403,     0,     0,   287,     0,    35,     0,   210,     0,    43,
     211,     0,     0,     0,    55,     0,    57,     0,     0,     0,
      59,   381,     0,   382,     0,     0,     0,    21,     0,    20,
     175,     0,     0,   174,   107,   106,   180,     0,     0,     0,
       0,     0,   216,   429,   443,     0,   354,     0,     0,     0,
     441,     0,    15,     0,   368,     0,    27,     0,   339,     0,
     340,     0,     0,     0,   303,     0,    18,   108,   103,    98,
       0,     0,   244,     0,   246,   274,   240,   242,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    66,   238,
     236,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   317,     0,   385,   411,     0,   422,   404,
       0,     0,   289,     0,   322,     0,     0,     0,   322,     0,
     341,     0,   328,   404,   336,     0,     0,     0,    64,     0,
       0,     0,   212,   215,   381,   382,     0,     0,    56,    58,
      84,     0,    60,    61,    29,    83,    23,     0,     0,    17,
       0,   176,   382,     0,    62,     0,     0,    63,     0,    92,
      94,   460,     0,     0,     0,   428,     0,   434,     0,   374,
     444,     0,   353,   442,   364,     0,     0,   440,   371,   439,
     367,     5,    12,    13,   307,   273,    36,     0,     0,   292,
     370,     7,   166,     0,     0,   101,   111,    99,   294,   463,
     398,   396,     0,     0,   248,     0,   277,     0,     0,     0,
     249,   251,   250,   265,   264,   267,   266,   268,   270,   271,
     269,   259,   258,   253,   254,   252,   255,   256,   257,   272,
       0,   218,   235,   234,   233,   232,   231,   230,   229,   228,
     227,   226,   225,   166,   464,   399,     0,   412,     0,     0,
     457,   321,     0,     0,   321,   398,   166,   223,   399,     0,
     337,    37,   209,     0,     0,    49,   213,    71,    68,     0,
       0,    53,     0,     0,     0,     0,     0,     0,   356,     0,
     355,    26,   362,    27,     0,    22,    19,     0,   173,   181,
     178,     0,     0,   461,   453,   454,    11,     0,   425,     0,
     424,   438,   383,     0,   291,   375,   430,     0,   446,     0,
     447,   449,   305,     3,     5,   166,     0,    28,    30,    31,
      32,   410,     0,     0,   165,   381,   382,     0,     0,     0,
     323,   109,   113,     0,     0,     0,   162,   309,   311,   397,
     245,   247,     0,     0,   241,   243,     0,   219,     0,   313,
     315,   419,     0,   414,   386,   413,   418,   406,   407,     0,
     329,    40,     0,    47,    44,   211,     0,     0,     0,     0,
       0,     0,     0,   359,   360,   372,     0,     0,   358,     0,
       0,    24,   177,     0,    93,    67,     0,   426,   428,     0,
       0,   433,     0,   432,   450,   452,   451,     0,     0,   166,
      16,     3,     0,     0,   169,   304,     0,    25,     0,   325,
       0,     0,   112,   115,   183,   162,   164,     0,   152,     0,
     163,   166,   166,   278,   275,   220,   318,   166,   166,     0,
     415,   395,   411,     0,   342,   333,    29,    38,     0,     0,
       0,   214,   117,     0,   117,   119,   127,     0,    29,   125,
      75,   133,   133,    54,   379,     0,   374,   357,   363,     0,
     179,   462,   428,   423,     0,   437,   436,     0,   445,     0,
       0,    14,   308,     0,     0,   381,   382,   324,   114,   183,
       0,   193,     0,   297,   162,     0,   154,     0,     0,     0,
     341,     0,     0,   420,   393,   390,     0,     0,   330,    27,
     142,     0,    29,   140,    45,    50,     0,     0,   120,     0,
       0,    27,   133,     0,   133,     0,     0,   361,   375,   373,
      78,     0,   217,     0,   431,   448,   306,    33,   172,   193,
     116,     0,   197,   198,   199,   202,   201,   200,   192,   104,
     182,   184,     0,   191,   195,     0,     0,     0,     0,     0,
     155,     0,   310,   312,   276,   221,   314,   316,   166,   387,
     416,   417,     0,   332,   145,   148,     0,    27,   211,   118,
      72,    69,   128,     0,     0,     0,     0,     0,     0,   129,
     378,   377,     0,   427,   435,   102,     0,     0,    97,   196,
       0,   186,    29,     0,    29,     0,   158,     0,   157,     0,
       0,   389,   334,   150,     0,     0,    39,    48,     0,     0,
       0,     0,   126,     0,   131,     0,   138,   139,   136,   130,
       0,    79,     0,   205,     0,     0,     0,    27,     0,   301,
       0,    27,   159,     0,   156,   394,   391,     0,     0,     0,
       0,   149,   141,    51,    29,   123,    73,    70,   132,   134,
      29,   376,     0,   208,     0,     0,   185,   187,     0,   100,
     302,     0,   298,   295,     0,   161,   395,     0,    29,     0,
       0,     0,    27,    29,    27,     0,   206,   203,     0,   207,
       0,   299,   160,   392,     0,    27,    42,   143,    29,   121,
      52,     0,    27,    80,     0,   162,   300,     0,     0,    27,
     124,     0,   204,     0,   146,   144,     0,    29,     0,    29,
     122,    27,   189,    29,   188,    27,    81,    27,    86,   190,
       0,    82,    85,    87,     0,    88,    89,     0,     0,    90,
       0,    29,    27,    91
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    80,    81,   474,   341,   178,   179,
      82,   206,   347,   477,   805,    84,   522,   660,   596,   724,
     290,   599,   158,   598,   525,   728,   831,   532,   528,   771,
     527,   770,   162,   174,   742,   812,   861,   878,   881,   882,
     883,   887,   890,   318,   319,    85,    86,   220,    87,   495,
      88,   492,   356,    89,   355,    90,   494,   571,   572,   667,
     604,   850,   806,   610,   430,   613,   673,   833,   810,   778,
     664,   725,   858,   763,   869,   766,   799,   577,   578,   579,
     483,   484,   182,   183,   187,   641,   700,   747,   838,   874,
     701,   702,   703,   704,   784,   705,   156,   291,   292,   526,
      91,   325,   650,   280,   368,   369,   363,   365,   367,   649,
     502,   125,   496,   114,   708,   790,    93,   352,   559,   475,
     581,   582,   587,   588,   403,    94,   580,   146,   147,   419,
     595,   658,   723,   153,   209,   417,    95,   441,   442,    96,
     615,   466,   616,   172,    98,   461,    99,   100,   406,   591,
     719,   761,   826,   655,   718,   101,   102,   103,   104,   105,
     106,   107,   408,   514,   590,   515,   516,   108,   459,   460,
     622,   328,   329,   199,   200,   467,   557,   109,   322,   546,
     110
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -571
static const yytype_int16 yypact[] =
{
    -571,    63,    71,  -571,  1470,  3860,  3860,  -115,  3860,  3860,
    3860,  3860,  3860,  3860,  3860,  -571,  3860,  3860,  3860,  3860,
    3860,  3860,  3860,   142,   142,  3860,   217,   -87,   -60,  -571,
    -571,   170,  -571,  -571,  -571,  -571,  3860,  -571,    43,    53,
      55,  -571,    68,  2463,  2590,   161,  -571,   177,  2717,  -571,
    3860,    75,    41,   164,   181,   247,   174,   189,   191,   198,
    -571,  -571,   203,   220,  -571,  -571,  -571,  -571,  -571,   187,
     -26,  -571,  -571,   303,  3860,  -571,  -571,   228,   166,   221,
     -78,  -571,     9,  -571,  -571,  -571,  -571,  -571,  -571,   329,
     332,  -571,   373,  -571,   268,  -571,  -571,  4418,  -571,    -4,
    1178,   259,  -571,   286,   306,  -571,   -27,  -571,    42,  -571,
    -571,  -571,  -571,   288,   373,  5098,  5098,  3860,  5098,  5098,
    5198,  -571,  -571,   384,  -571,  3860,  -571,  -571,  -571,  -571,
    -571,  -571,  -571,   290,   303,   -65,   295,  -571,  -571,   321,
    -571,  -571,   319,   303,   323,   322,  -571,  -571,   328,   344,
     -18,    42,  2844,  -571,  3860,  -571,    12,  5098,  2336,  -571,
    3860,  3860,   324,  3860,  -571,  4459,  -571,  4501,   327,   456,
    -571,   330,  5098,   479,   320,  4542,   303,   112,    18,  -571,
    -571,   -25,    19,  -571,  -571,  -571,   461,    22,   142,   142,
     142,   326,  -571,  2971,   124,   197,  -571,  3987,   142,   234,
    -571,   303,  -571,   204,   236,  4583,   333,  3860,   162,   353,
     267,   162,    67,   407,  -571,   408,  -571,   362,  -571,  -571,
      36,    35,  -571,  3860,  -571,   458,  -571,  -571,  3860,  3860,
    3860,  3860,  3860,  3860,  3860,  3860,  3860,  3860,  3860,  3860,
    3860,  3860,  3860,  3860,  3860,  3860,  3860,   217,  -571,  -571,
    -571,  3098,  3860,  3860,  3860,  3860,  3860,  3860,  3860,  3860,
    3860,  3860,  3860,  -571,    61,  -571,  3860,  3860,   228,    -9,
     338,  4625,  -571,   303,    73,    81,   110,   303,   323,    57,
     343,    57,  -571,    -8,  -571,  4666,  4708,  3860,  -571,   426,
    3860,   359,   503,  5098,   423,  1091,   446,  4750,  -571,  -571,
    -571,   926,  -571,  -571,  -571,  -571,   143,   448,    75,  -571,
    3860,  -571,  -571,    41,  -571,   926,   449,  -571,     8,  -571,
    -571,  -571,    14,   377,   380,   138,   142,  4958,   382,   524,
    -571,   463,  -571,  -571,   474,  4123,   390,  -571,  -571,  -571,
     246,  -571,  -571,  -571,  -571,  -571,  -571,  1597,  4164,  -571,
    -571,  -571,  3225,   523,     7,  -571,   435,  -571,  -571,   414,
     415,    -8,    42,  3860,  5175,  3860,  -571,  3860,  3860,  3860,
    2513,  2640,  2765,  2892,  2892,  2892,  2892,  1313,  1313,  1313,
    1313,   781,   781,   317,   317,   317,   384,   384,   384,  -571,
     127,  5198,  5198,  5198,  5198,  5198,  5198,  5198,  5198,  5198,
    5198,  5198,  5198,  3225,   417,   418,   -22,  5098,   399,  4205,
    -571,    93,   414,   417,   323,  -571,  3225,  -571,  -571,   -22,
    -571,   544,  5098,   424,  4791,  -571,  -571,  -571,  -571,   558,
      21,  -571,   926,   926,   425,   -34,   432,   303,    85,   438,
    -571,  -571,  -571,   427,   510,  -571,  -571,  4249,  -571,  -571,
     569,   142,   433,  -571,  -571,  -571,  -571,   437,  -571,    27,
    -571,  -571,  -571,  3352,  -571,  3479,  -571,   342,  -571,  3860,
    -571,  -571,  -571,   434,  -571,  3225,   439,  -571,  -571,  -571,
    -571,  -571,   142,   440,   580,    28,    77,   926,   447,   303,
     323,  -571,   470,     7,   443,   452,   172,  -571,  -571,    -8,
    5138,  5198,  3860,  5057,  5220,  5241,   217,  -571,   453,  -571,
    -571,  -571,  3860,  -571,  -571,    -7,  -571,  -571,  -571,   455,
    -571,  -571,  2336,  -571,  -571,  3860,  3860,   142,    -6,   926,
     525,  1750,    -2,  -571,  -571,   926,   469,   303,   102,   527,
     493,  -571,  -571,   926,  -571,  -571,   142,  -571,   138,   594,
     142,  5098,   142,  5000,  -571,  -571,  -571,   454,   411,  3225,
    -571,   460,   459,   466,  -571,  -571,  3606,  -571,   303,   323,
       7,   465,   610,  -571,  -571,   172,  -571,   475,   611,   158,
    -571,  3225,  3225,  1283,  -571,  -571,  -571,  3225,  3225,  4290,
    -571,   477,  3860,  3860,  -571,  -571,  -571,  -571,  3860,  1903,
     473,  5098,   504,   142,   504,  -571,  -571,   615,  -571,  -571,
    -571,   480,   481,  -571,   513,   488,   632,   241,  -571,   494,
    -571,  -571,   138,  -571,  3860,  -571,  -571,  3733,  -571,   489,
     495,  -571,  -571,   496,   142,    30,   912,   323,   610,  -571,
       7,   616,   499,   541,   165,   576,   637,   502,   507,  3860,
     343,   508,   532,  -571,  -571,  -571,   516,  4331,   531,   325,
    -571,  4833,  -571,  -571,  -571,  -571,    -6,   534,  -571,   535,
     926,   570,  -571,   331,  -571,   -35,   926,  -571,   926,  -571,
    -571,    31,  5198,   142,  5098,  -571,  -571,  -571,  -571,   677,
    -571,   614,  -571,  -571,  -571,  -571,  -571,  -571,  -571,  -571,
    -571,  -571,   588,   450,  -571,    23,   536,   542,   540,   238,
     679,   926,  -571,  -571,  1283,  -571,  -571,  -571,  3225,   574,
    -571,  -571,   -22,  -571,  -571,    15,   546,   620,  3860,  -571,
    -571,  -571,  -571,   547,   337,   549,  3860,    11,   114,  -571,
    -571,   582,     7,  -571,  -571,  -571,   693,   636,   373,  -571,
     641,  -571,  -571,   277,  -571,   640,   701,   926,  -571,   567,
     -22,  -571,  -571,   263,   573,  2336,  -571,  -571,   568,   581,
    2056,  2056,  -571,   579,  -571,  4377,  -571,  -571,  -571,  -571,
     926,  -571,   926,   704,    24,   662,   722,   585,   665,  -571,
      33,   590,   731,   926,  -571,  -571,  -571,   597,   720,   680,
    3860,  -571,  -571,  -571,  -571,  -571,  -571,  -571,  -571,  -571,
    -571,  -571,   674,  -571,   926,   678,  -571,  -571,   926,  -571,
    -571,   279,  -571,  -571,   926,  -571,   477,  3860,  -571,   600,
    4875,  2209,   666,  -571,   225,   605,  -571,   742,   608,  -571,
     685,  -571,  -571,  -571,  4916,   692,  -571,  -571,  -571,  -571,
    -571,   612,   249,  -571,   926,   172,  -571,   735,  2336,   681,
    -571,   613,  -571,   622,  -571,  -571,   623,  -571,   206,  -571,
    -571,   625,  -571,  -571,  -571,   351,  -571,   626,   661,  -571,
     624,  -571,   661,  -571,     7,  -571,  -571,   702,   630,  -571,
     629,  -571,   638,  -571
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -571,  -571,  -318,  -571,   -23,  -571,  -571,  -571,  -571,   484,
    -571,  -264,  -571,  -571,     2,  -571,  -571,  -571,  -571,  -571,
    -571,  -571,  -571,  -571,  -571,  -571,  -571,  -571,  -571,  -571,
    -571,  -571,  -571,  -571,  -571,  -571,  -571,  -571,  -571,  -571,
    -101,  -571,  -571,  -571,   345,   457,   467,  -109,  -571,  -571,
    -571,  -571,  -571,  -571,  -571,  -571,  -571,  -571,   223,   190,
     131,  -571,    29,  -571,  -571,  -571,  -570,  -571,  -571,    37,
    -571,  -571,  -571,  -571,  -571,  -571,  -571,  -562,  -571,   155,
    -395,  -571,  -571,   490,  -571,   163,  -571,  -571,  -571,  -571,
    -571,  -571,  -571,   103,  -571,  -571,  -571,  -510,  -571,  -571,
     -38,  -571,  -571,  -571,  -571,  -571,  -571,  -571,  -571,  -571,
    -571,  -571,  -571,     0,  -571,  -571,  -571,  -571,  -571,  -571,
    -571,  -571,  -571,  -571,  -571,   551,  -343,  -229,  -571,  -571,
    -571,  -571,  -571,  -571,  -571,   160,  -160,   278,  -571,  -571,
    -571,   192,  -571,   657,   635,  -463,   364,   820,  -571,  -571,
    -571,  -571,  -571,   -21,  -571,  -207,  -571,    86,  -571,   -19,
     -24,  -571,   226,  -407,  -571,  -571,  -571,   -17,   200,   271,
    -571,  -571,  -571,   318,  -135,  -571,  -571,  -571,  -571,  -571,
    -571
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -401
static const yytype_int16 yytable[] =
{
     135,   135,   150,   144,    92,   270,    83,   149,   508,   151,
     171,   491,   520,   642,   360,   600,   451,   215,   389,   564,
     287,   519,   453,   473,   611,   603,   308,   313,   177,   530,
     316,   750,   815,   117,   266,   548,  -167,   776,  -170,   548,
     443,   821,   675,   266,   536,   111,   111,   203,    33,   511,
     204,    33,   266,   266,   592,   249,   250,   405,   736,   737,
     333,   152,  -320,     3,   339,   111,   213,    33,   360,   405,
     214,    -2,   415,   333,   418,   339,   333,   339,   111,   213,
     562,   764,   765,   214,   269,  -168,   112,   625,   154,   626,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   734,   196,   738,   112,   359,   357,    33,   139,
     139,   274,   148,  -400,   180,    33,   133,   739,   201,   134,
     278,  -396,  -400,   294,   267,   202,   310,   283,    77,   512,
      33,    77,   404,   267,    33,   133,  -384,  -384,   134,  -397,
     194,   440,   267,   267,   593,   337,   111,    77,   488,   612,
     573,   489,   412,   306,    33,   440,   561,   452,   135,   216,
     289,   777,   288,   454,   630,   135,   135,   135,   309,   314,
     531,   688,   317,   751,   816,   135,   549,  -167,   340,  -170,
     743,   413,   822,    33,   358,   330,   647,   648,    77,   645,
     506,   159,   651,   652,   181,   268,   155,   361,   111,   513,
      33,   160,   307,   161,   362,   197,   198,   736,   737,   111,
      77,    33,   513,   111,    77,    33,   163,   213,   769,   176,
     744,   344,   350,   150,   144,  -320,  -168,   573,   149,   213,
     151,   646,   168,   444,    77,   194,   111,   213,   112,   194,
     361,   472,  -322,   111,   208,   331,   213,   362,   169,   112,
     411,   361,   361,   112,   414,   361,   213,   361,   362,   362,
     194,   457,   362,    77,   362,   195,   779,   139,   133,   755,
     194,   134,   440,   440,   139,   139,   139,   585,   438,   133,
      77,   184,   134,   133,   139,   177,   134,   213,   111,   576,
      33,    77,   438,   863,   194,    77,   576,   690,   185,   211,
     197,   198,   135,   135,   197,   198,   488,   194,   788,   489,
     840,   756,   337,   488,   485,   762,   489,  -137,  -137,  -137,
     186,  -153,   188,   759,   196,   197,   198,   440,   112,   797,
     798,   490,   659,   148,   332,   197,   198,   189,   499,   190,
     194,  -135,  -135,  -135,   671,   337,   191,    92,   213,   478,
     789,   192,   841,   796,   342,   343,   872,   873,   142,   197,
     198,   143,   244,   245,   246,   485,   247,   135,   193,   440,
      77,   338,   197,   198,   111,   440,  -322,  -137,   485,   207,
     213,  -321,   361,   440,   344,   213,  -321,   137,   140,   362,
     213,   -41,   -41,   -41,   472,   361,   210,   212,   727,   781,
     217,  -135,   362,   218,   219,   197,   198,   263,   221,   438,
     438,   139,   139,   554,   538,   555,   556,  -147,  -147,  -147,
     222,   223,   224,   735,   736,   737,   264,   265,   135,   773,
     736,   737,   201,   247,   273,   275,   225,   485,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,   135,
     247,   276,   279,   277,   438,   282,   569,   213,   281,   301,
     490,   304,   296,   490,   315,   324,   139,   300,   351,   353,
     302,   354,   150,   144,   366,   346,   358,   149,   787,   151,
     791,   416,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   135,   135,   438,   349,   423,   425,
     440,   426,   438,   427,   617,   513,   440,   429,   440,   445,
     438,   485,   450,   135,   597,   135,   455,   135,   635,   135,
     456,   464,   465,   609,   468,   469,   487,   139,  -384,  -384,
     832,   886,   471,   485,   485,   637,   834,   490,  -194,   485,
     485,   440,   490,   513,   493,   517,   692,   693,   694,   695,
     696,   697,   497,   498,   845,   509,   510,   629,   139,   852,
     521,   529,   523,   535,   136,   136,   537,   145,   539,   540,
     135,   541,   543,   545,   859,   547,   560,   563,   566,   565,
     570,   568,   148,   449,   574,   619,   607,   440,   618,   135,
     575,   663,   586,   871,   594,   875,   332,   624,   632,   877,
     628,   135,   631,   139,   139,   633,   639,   490,   640,   644,
     440,   490,   440,   665,   643,   654,   666,   892,   670,   303,
     672,   674,   139,   440,   139,   676,   139,   677,   139,   785,
     678,   685,   680,   135,   686,   707,   687,   438,   706,   710,
     711,   712,   722,   438,   440,   438,   713,   716,   440,   733,
     135,    97,   115,   116,   440,   118,   119,   120,   121,   122,
     123,   124,   720,   126,   127,   128,   129,   130,   131,   132,
     485,   717,   141,   730,   731,   746,    46,   752,   438,   139,
     753,   754,   757,   157,   440,   760,   767,   772,   361,   774,
     165,   167,   748,   768,   780,   362,   782,   175,   139,   783,
     533,   534,   786,   792,   793,   691,   795,   814,   802,   490,
     139,   800,   692,   693,   694,   695,   696,   697,   698,   808,
     803,   205,   136,   817,   438,   818,   361,   819,   820,   136,
     136,   136,   823,   362,   824,   827,   828,   835,   829,   136,
     846,   837,   139,   851,   853,   854,   855,   438,   856,   438,
    -151,   864,   860,   880,   867,   567,   866,   801,   699,   139,
     438,   868,   884,   870,   271,   888,   691,   876,   879,   889,
     891,   885,   272,   692,   693,   694,   695,   696,   697,   698,
     893,   438,   446,   638,   669,   438,   544,   729,   145,   709,
     807,   438,   689,   448,   479,   843,   749,   606,   679,   285,
     715,   286,   809,   614,   480,    97,   311,   293,   656,   623,
     297,   620,   681,   241,   242,   243,   244,   245,   246,   745,
     247,   438,   490,   849,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   138,   138,     0,     0,     0,     0,     0,
     327,     0,   439,     0,   335,     0,     0,     0,     0,     0,
     865,   490,     0,     0,   348,     0,   439,     0,   173,     0,
       0,     0,     0,     0,     0,     0,   136,   136,     0,     0,
     364,     0,     0,     0,     0,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,     0,     0,     0,     0,   391,   392,
     393,   394,   395,   396,   397,   398,   399,   400,   401,   402,
    -171,     0,     0,   407,   409,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,     0,     0,     0,
       0,   136,     0,     0,   422,     0,     0,   424,   732,     0,
       0,     0,     0,     0,   740,     0,   741,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   447,   432,   433,
       0,  -384,  -384,     0,     0,     0,     0,     0,     0,     0,
       0,   295,     0,   439,   439,     0,     0,     0,     0,   758,
       0,     0,     0,     0,     0,    29,    30,   111,     0,     0,
       0,   312,   136,     0,    97,    35,     0,     0,   320,   321,
     323,     0,     0,     0,     0,     0,     0,     0,   336,     0,
     500,     0,   501,     0,   503,   504,   505,     0,     0,     0,
       0,     0,     0,   136,     0,   794,     0,   112,   439,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     434,    64,    65,    66,    67,    68,     0,   145,   811,     0,
     813,  -171,   435,     0,     0,     0,     0,   436,    71,    72,
     437,   825,     0,     0,     0,     0,     0,     0,   136,   136,
     439,     0,     0,     0,     0,     0,   439,     0,     0,     0,
       0,     0,   836,     0,   439,     0,   839,   136,     0,   136,
       0,   136,   842,   136,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   261,   262,     0,     0,     0,     0,
     551,     0,   553,     0,     0,     0,   558,     0,     0,     0,
       0,     0,   862,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   458,   462,     0,     0,     0,
    -384,  -384,     0,     0,   136,     0,     0,     0,     0,   583,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   589,
       0,     0,   486,   136,     0,     0,     0,     0,     0,    97,
       0,   428,   293,   601,     0,   136,     0,     0,    97,     0,
       0,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,     0,     0,     0,     0,     0,     0,     0,
     507,     0,     0,     0,     0,     0,     0,   136,     0,     0,
       0,   439,     0,   486,     0,     0,     0,   439,     0,   439,
       0,     0,     0,     0,   136,     0,   486,  -384,  -384,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   407,
     657,     0,     0,     0,     0,   661,    97,     0,     0,     0,
       0,     0,   439,     0,     0,     0,     0,     0,     0,     0,
       0,   320,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   682,     0,     0,   684,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   486,     0,     0,     0,     0,
       0,     0,   462,     0,     0,     0,   714,     0,   439,     0,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,   439,   247,   439,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   439,     0,     0,   602,   605,  -401,
    -401,  -401,  -401,   239,   240,   241,   242,   243,   244,   245,
     246,     0,   247,     0,     0,   439,   621,     0,   458,   439,
     462,     0,   462,     0,     0,   439,     0,     0,     0,   486,
       0,     0,     0,     0,     0,   293,   636,     0,     0,     0,
       0,     0,     0,   775,     0,     0,     0,     0,     0,     0,
       0,   486,   486,     0,     0,   439,     0,   486,   486,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    97,   668,     0,     0,     0,    97,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   458,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   462,     0,     0,   830,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     6,     7,     8,     9,     0,     0,
       0,     0,    10,     0,   844,     0,   605,     0,    97,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   462,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,    97,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    25,    26,    27,    28,     0,     0,   486,    29,
      30,    31,    32,    33,     0,    34,     0,     0,     0,    35,
      36,    37,    38,     0,    39,     0,    40,     0,    41,     0,
       0,    42,     0,     0,     0,    43,    44,    45,    46,    47,
      48,    49,     0,    50,    51,    52,     0,     0,     0,    53,
      54,    55,     0,    56,    57,    58,    59,    60,    61,     0,
       0,     0,     0,    62,    63,    64,    65,    66,    67,    68,
       5,     6,     7,     8,     9,     0,    69,     0,     0,    10,
       0,    70,    71,    72,    73,     0,     0,     0,    74,     0,
      75,    76,     0,    77,    78,    79,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,    28,     0,     0,     0,    29,    30,    31,    32,
      33,     0,    34,     0,     0,     0,    35,    36,    37,    38,
       0,    39,     0,    40,     0,    41,     0,     0,    42,     0,
       0,     0,    43,    44,    45,    46,     0,    48,    49,     0,
      50,     0,    52,     0,     0,     0,    53,    54,    55,     0,
      56,    57,    58,   476,    60,    61,     0,     0,     0,     0,
      62,    63,    64,    65,    66,    67,    68,     0,     0,     0,
       0,     0,     0,    69,     0,     0,     0,     0,   113,    71,
      72,    73,     0,     0,     0,    74,     0,    75,    76,     0,
      77,    78,    79,     5,     6,     7,     8,     9,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   608,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    25,    26,    27,    28,     0,     0,     0,    29,
      30,    31,    32,    33,     0,    34,     0,     0,     0,    35,
      36,    37,    38,     0,    39,     0,    40,     0,    41,     0,
       0,    42,     0,     0,     0,    43,    44,    45,    46,     0,
      48,    49,     0,    50,     0,    52,     0,     0,     0,     0,
       0,    55,     0,    56,    57,    58,     0,     0,     0,     0,
       0,     0,     0,    62,    63,    64,    65,    66,    67,    68,
       0,     0,     0,     0,     0,     0,    69,     0,     0,     0,
       0,   113,    71,    72,    73,     0,     0,     0,    74,     0,
      75,    76,     0,    77,    78,    79,     5,     6,     7,     8,
       9,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   662,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,    28,     0,
       0,     0,    29,    30,    31,    32,    33,     0,    34,     0,
       0,     0,    35,    36,    37,    38,     0,    39,     0,    40,
       0,    41,     0,     0,    42,     0,     0,     0,    43,    44,
      45,    46,     0,    48,    49,     0,    50,     0,    52,     0,
       0,     0,     0,     0,    55,     0,    56,    57,    58,     0,
       0,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,     0,     0,     0,     0,     0,     0,    69,
       0,     0,     0,     0,   113,    71,    72,    73,     0,     0,
       0,    74,     0,    75,    76,     0,    77,    78,    79,     5,
       6,     7,     8,     9,     0,     0,     0,     0,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   804,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
      27,    28,     0,     0,     0,    29,    30,    31,    32,    33,
       0,    34,     0,     0,     0,    35,    36,    37,    38,     0,
      39,     0,    40,     0,    41,     0,     0,    42,     0,     0,
       0,    43,    44,    45,    46,     0,    48,    49,     0,    50,
       0,    52,     0,     0,     0,     0,     0,    55,     0,    56,
      57,    58,     0,     0,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,     0,     0,     0,     0,
       0,     0,    69,     0,     0,     0,     0,   113,    71,    72,
      73,     0,     0,     0,    74,     0,    75,    76,     0,    77,
      78,    79,     5,     6,     7,     8,     9,     0,     0,     0,
       0,    10,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   848,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,     0,     0,     0,     0,    13,     0,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,    28,     0,     0,     0,    29,    30,
      31,    32,    33,     0,    34,     0,     0,     0,    35,    36,
      37,    38,     0,    39,     0,    40,     0,    41,     0,     0,
      42,     0,     0,     0,    43,    44,    45,    46,     0,    48,
      49,     0,    50,     0,    52,     0,     0,     0,     0,     0,
      55,     0,    56,    57,    58,     0,     0,     0,     0,     0,
       0,     0,    62,    63,    64,    65,    66,    67,    68,     5,
       6,     7,     8,     9,     0,    69,     0,     0,    10,     0,
     113,    71,    72,    73,     0,     0,     0,    74,     0,    75,
      76,     0,    77,    78,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,    12,
       0,     0,     0,     0,    13,     0,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,     0,    25,    26,
      27,    28,     0,     0,     0,    29,    30,    31,    32,    33,
       0,    34,     0,     0,     0,    35,    36,    37,    38,     0,
      39,     0,    40,     0,    41,     0,     0,    42,     0,     0,
       0,    43,    44,    45,    46,     0,    48,    49,     0,    50,
       0,    52,     0,     0,     0,     0,     0,    55,     0,    56,
      57,    58,     0,     0,     0,     0,     0,     0,     0,    62,
      63,    64,    65,    66,    67,    68,     5,     6,     7,     8,
       9,     0,    69,     0,     0,    10,     0,   113,    71,    72,
      73,     0,     0,     0,    74,     0,    75,    76,     0,    77,
      78,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    11,    12,     0,     0,     0,
       0,    13,     0,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,    25,    26,    27,     0,     0,
       0,     0,    29,    30,   111,    32,    33,     0,     0,     0,
       0,     0,    35,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,    46,   247,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   112,     0,     0,    57,    58,     0,
       0,     0,     0,     0,     0,     0,    62,    63,    64,    65,
      66,    67,    68,     5,     6,     7,     8,     9,     0,    69,
       0,     0,    10,     0,   113,    71,    72,    73,     0,     0,
       0,    74,     0,   164,     0,     0,    77,    78,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    11,    12,     0,     0,     0,     0,    13,     0,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    25,    26,    27,     0,     0,     0,     0,    29,
      30,   111,    32,    33,     0,     0,     0,     0,     0,    35,
       0,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,    46,   247,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   112,     0,     0,    57,    58,     0,     0,     0,     0,
       0,     0,     0,    62,    63,    64,    65,    66,    67,    68,
       5,     6,     7,     8,     9,     0,    69,     0,     0,    10,
       0,   113,    71,    72,    73,     0,     0,     0,    74,     0,
     166,     0,     0,    77,    78,    79,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,     0,     0,     0,     0,    29,    30,   111,    32,
      33,     0,     0,     0,     0,     0,    35,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,     0,   247,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,     0,
       0,    57,    58,     0,     0,     0,     0,     0,     0,     0,
      62,    63,    64,    65,    66,    67,    68,     5,     6,     7,
       8,     9,     0,    69,     0,     0,    10,     0,   113,    71,
      72,    73,     0,     0,     0,    74,     0,   170,     0,     0,
      77,    78,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    11,    12,     0,     0,
       0,     0,    13,     0,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,     0,    25,    26,    27,     0,
       0,     0,     0,    29,    30,   111,    32,    33,     0,     0,
       0,     0,     0,    35,  -401,  -401,  -401,  -401,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
       0,   247,    46,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   112,     0,     0,    57,    58,
       0,     0,     0,     0,     0,     0,     0,    62,    63,    64,
      65,    66,    67,    68,     5,     6,     7,     8,     9,     0,
      69,     0,     0,    10,     0,   113,    71,    72,    73,     0,
       0,     0,    74,   284,     0,     0,     0,    77,    78,    79,
       0,     0,   326,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,    77,    78,    79,     0,     0,   390,
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
       0,    77,    78,    79,     0,     0,   482,     0,     0,     0,
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
      79,     0,     0,   550,     0,     0,     0,     0,     0,     0,
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
      74,     0,     0,     0,     0,    77,    78,    79,     0,     0,
     552,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
     113,    71,    72,    73,     0,     0,     0,    74,     0,     0,
       0,     0,    77,    78,    79,     0,     0,   634,     0,     0,
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
      78,    79,     0,     0,   683,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,    77,    78,    79,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    11,
      12,     0,     0,     0,     0,    13,     0,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,     0,    25,
      26,    27,     0,     0,     0,     0,    29,    30,   111,   334,
      33,     0,     0,     0,     0,     0,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   112,     0,
       0,    57,    58,     0,     0,     0,     0,     0,     0,     0,
      62,    63,    64,    65,    66,    67,    68,     0,     0,     0,
       0,     0,     0,    69,     0,     0,     0,     0,   113,    71,
      72,    73,   222,   223,   224,    74,     0,     0,     0,     0,
      77,    78,    79,     0,     0,     0,     0,     0,   225,     0,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,     0,   247,   222,   223,   224,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   225,
       0,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,     0,   247,   222,   223,   224,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     225,     0,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,     0,   247,     0,     0,     0,   222,   223,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   225,   470,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,     0,   247,   222,
     223,   224,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   225,   481,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,     0,   247,
     222,   223,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   225,   518,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,     0,
     247,     0,     0,     0,     0,     0,   222,   223,   224,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   542,   225,   776,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,     0,   247,   222,   223,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   653,   225,     0,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,     0,   247,   222,   223,
     224,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   721,   225,     0,   226,   227,   228,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,     0,   247,     0,
     222,   223,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   225,   777,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,     0,
     247,   222,   223,   224,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   225,   248,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
       0,   247,   222,   223,   224,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   225,   298,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,     0,   247,     0,   222,   223,   224,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     225,   299,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,     0,   247,   222,   223,   224,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   225,   305,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,     0,   247,     0,   222,   223,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   345,   225,     0,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,     0,   247,     0,   222,
     223,   224,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   410,   225,     0,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,     0,   247,
     222,   223,   224,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   420,   225,     0,   226,   227,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,     0,
     247,     0,   222,   223,   224,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   421,   225,     0,
     226,   227,   228,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   242,   243,   244,   245,
     246,     0,   247,     0,   222,   223,   224,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   431,
     225,     0,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,     0,   247,   222,   223,   224,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     524,   225,     0,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,     0,   247,     0,   222,   223,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   726,   225,     0,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,     0,   247,     0,   222,
     223,   224,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   847,   225,     0,   226,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,     0,   247,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   857,   222,   223,   224,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     463,     0,   225,   584,   226,   227,   228,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,     0,   247,   222,   223,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   627,   225,     0,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,     0,   247,   223,   224,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   225,     0,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   224,   247,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     225,     0,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   225,   247,   226,   227,   228,   229,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,     0,   247,   227,   228,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,   242,   243,   244,   245,   246,     0,   247,
     228,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   243,   244,   245,   246,     0,
     247
};

static const yytype_int16 yycheck[] =
{
      23,    24,    26,    26,     4,   114,     4,    26,   403,    26,
      48,   354,   419,   575,   221,   525,     8,     8,   247,   482,
       8,   416,     8,   341,    26,    31,     8,     8,    51,     8,
       8,     8,     8,   148,    61,     8,     8,    26,     8,     8,
     304,     8,   612,    61,    78,    71,    71,    70,    73,    71,
      73,    73,    61,    61,    61,    59,    60,   264,    93,    94,
     195,   148,   140,     0,   199,    71,   144,    73,   275,   276,
     148,     0,   279,   208,   281,   210,   211,   212,    71,   144,
     475,    66,    67,   148,   108,     8,   111,   550,   148,   552,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,   672,   137,   674,   111,    71,    71,    73,    23,
      24,   134,    26,   140,    73,    73,   141,   152,   144,   144,
     143,   148,   140,   161,   151,   151,   151,   151,   153,   151,
      73,   153,    71,   151,    73,   141,    59,    60,   144,   148,
      73,   301,   151,   151,   151,    78,    71,   153,   141,   151,
     493,   144,    71,   176,    73,   315,   474,   149,   181,   150,
     158,   150,   150,   149,   559,   188,   189,   190,   150,   150,
     149,   634,   150,   150,   150,   198,   149,   149,   201,   149,
     149,    71,   149,    73,   148,    61,   581,   582,   153,    31,
      63,   148,   587,   588,   153,   153,    26,   221,    71,   406,
      73,   148,    90,   148,   221,   138,   139,    93,    94,    71,
     153,    73,   419,    71,   153,    73,   148,   144,   728,   144,
     683,   148,   155,   247,   247,   140,   149,   570,   247,   144,
     247,    73,    71,    90,   153,    73,    71,   144,   111,    73,
     264,   148,   140,    71,    78,   121,   144,   264,    71,   111,
     273,   275,   276,   111,   277,   279,   144,   281,   275,   276,
      73,   123,   279,   153,   281,    78,   152,   181,   141,    31,
      73,   144,   432,   433,   188,   189,   190,   506,   301,   141,
     153,   117,   144,   141,   198,   308,   144,   144,    71,   124,
      73,   153,   315,   855,    73,   153,   124,   640,   117,    78,
     138,   139,   325,   326,   138,   139,   141,    73,    31,   144,
      31,    73,    78,   141,   352,   722,   144,    92,    93,    94,
      73,   149,   148,   718,   137,   138,   139,   487,   111,    66,
      67,   354,   596,   247,   137,   138,   139,   148,   362,   148,
      73,    92,    93,    94,   608,    78,   148,   347,   144,   347,
      73,   148,    73,   760,   150,   151,   150,   151,   141,   138,
     139,   144,    45,    46,    47,   403,    49,   390,   148,   529,
     153,   137,   138,   139,    71,   535,   140,   152,   416,   151,
     144,   140,   406,   543,   148,   144,   140,    23,    24,   406,
     144,    66,    67,    68,   148,   419,    78,    79,   662,   742,
      71,   152,   419,    71,    31,   138,   139,   148,   140,   432,
     433,   325,   326,    71,   437,    73,    74,    66,    67,    68,
       9,    10,    11,    92,    93,    94,   140,   121,   451,    92,
      93,    94,   144,    49,   144,   140,    25,   475,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,   482,
      49,   140,   140,   144,   487,   121,   489,   144,   140,    13,
     493,   151,   148,   496,    13,   149,   390,   150,    71,    71,
     150,   119,   506,   506,    26,   152,   148,   506,   752,   506,
     754,   148,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,   527,   528,   529,   154,    82,   150,
     670,     8,   535,    90,   537,   722,   676,    71,   678,    71,
     543,   559,    73,   546,   522,   548,   149,   550,   566,   552,
     150,   149,     8,   531,    71,    61,    13,   451,    59,    60,
     804,   884,   152,   581,   582,   568,   810,   570,    98,   587,
     588,   711,   575,   760,   119,   156,   106,   107,   108,   109,
     110,   111,   148,   148,   828,   148,   148,   156,   482,   833,
      26,    13,   148,   148,    23,    24,   144,    26,   140,   152,
     603,    71,    13,   150,   848,   148,   152,   148,     8,   149,
     120,   144,   506,   315,   151,   102,    71,   757,    71,   622,
     148,   599,   149,   867,   149,   869,   137,    13,   149,   873,
     156,   634,   152,   527,   528,   149,   151,   640,     8,     8,
     780,   644,   782,   150,   149,   148,   122,   891,    13,   150,
     150,   150,   546,   793,   548,   122,   550,   149,   552,   748,
       8,   152,   148,   666,   149,   104,   150,   670,   149,    73,
      13,   149,   121,   676,   814,   678,   149,   149,   818,    89,
     683,     4,     5,     6,   824,     8,     9,    10,    11,    12,
      13,    14,   156,    16,    17,    18,    19,    20,    21,    22,
     718,   149,    25,   149,   149,    71,    98,   151,   711,   603,
     148,   151,    13,    36,   854,   121,   150,   150,   722,   150,
      43,    44,   702,    83,   122,   722,    13,    50,   622,    73,
     432,   433,    71,    73,    13,    99,   149,    13,   150,   742,
     634,   148,   106,   107,   108,   109,   110,   111,   112,   150,
     149,    74,   181,    71,   757,    13,   760,   152,    73,   188,
     189,   190,   152,   760,    13,   148,    26,    73,    68,   198,
     150,    73,   666,    87,   149,    13,   148,   780,    73,   782,
      68,    26,   150,   102,   151,   487,    85,   765,   152,   683,
     793,   149,   148,   150,   117,    73,    99,   152,   152,   149,
     151,   882,   125,   106,   107,   108,   109,   110,   111,   112,
     152,   814,   308,   570,   604,   818,   451,   666,   247,   644,
     771,   824,   639,   313,   347,   826,   703,   529,   616,   152,
     650,   154,   775,   535,   347,   158,   181,   160,   592,   548,
     163,   543,   622,    42,    43,    44,    45,    46,    47,   152,
      49,   854,   855,   831,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,
     193,    -1,   301,    -1,   197,    -1,    -1,    -1,    -1,    -1,
     858,   884,    -1,    -1,   207,    -1,   315,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   325,   326,    -1,    -1,
     223,    -1,    -1,    -1,    -1,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   242,
     243,   244,   245,   246,    -1,    -1,    -1,    -1,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,   262,
       8,    -1,    -1,   266,   267,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,   390,    -1,    -1,   287,    -1,    -1,   290,   670,    -1,
      -1,    -1,    -1,    -1,   676,    -1,   678,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   310,    42,    43,
      -1,    59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   161,    -1,   432,   433,    -1,    -1,    -1,    -1,   711,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    -1,    -1,
      -1,   181,   451,    -1,   347,    79,    -1,    -1,   188,   189,
     190,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   198,    -1,
     363,    -1,   365,    -1,   367,   368,   369,    -1,    -1,    -1,
      -1,    -1,    -1,   482,    -1,   757,    -1,   111,   487,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     124,   125,   126,   127,   128,   129,    -1,   506,   780,    -1,
     782,   149,   136,    -1,    -1,    -1,    -1,   141,   142,   143,
     144,   793,    -1,    -1,    -1,    -1,    -1,    -1,   527,   528,
     529,    -1,    -1,    -1,    -1,    -1,   535,    -1,    -1,    -1,
      -1,    -1,   814,    -1,   543,    -1,   818,   546,    -1,   548,
      -1,   550,   824,   552,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
     463,    -1,   465,    -1,    -1,    -1,   469,    -1,    -1,    -1,
      -1,    -1,   854,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   325,   326,    -1,    -1,    -1,
      59,    60,    -1,    -1,   603,    -1,    -1,    -1,    -1,   502,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   512,
      -1,    -1,   352,   622,    -1,    -1,    -1,    -1,    -1,   522,
      -1,    90,   525,   526,    -1,   634,    -1,    -1,   531,    -1,
      -1,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     390,    -1,    -1,    -1,    -1,    -1,    -1,   666,    -1,    -1,
      -1,   670,    -1,   403,    -1,    -1,    -1,   676,    -1,   678,
      -1,    -1,    -1,    -1,   683,    -1,   416,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   592,
     593,    -1,    -1,    -1,    -1,   598,   599,    -1,    -1,    -1,
      -1,    -1,   711,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   451,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   624,    -1,    -1,   627,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   475,    -1,    -1,    -1,    -1,
      -1,    -1,   482,    -1,    -1,    -1,   649,    -1,   757,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,   780,    49,   782,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   793,    -1,    -1,   527,   528,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,    -1,   814,   546,    -1,   548,   818,
     550,    -1,   552,    -1,    -1,   824,    -1,    -1,    -1,   559,
      -1,    -1,    -1,    -1,    -1,   728,   566,    -1,    -1,    -1,
      -1,    -1,    -1,   736,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   581,   582,    -1,    -1,   854,    -1,   587,   588,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   765,   603,    -1,    -1,    -1,   770,   771,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   622,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   634,    -1,    -1,   800,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,    -1,    -1,
      -1,    -1,    12,    -1,   827,    -1,   666,    -1,   831,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   683,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,   858,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,    65,    -1,    -1,   718,    69,
      70,    71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,
      80,    81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,
      -1,    91,    -1,    -1,    -1,    95,    96,    97,    98,    99,
     100,   101,    -1,   103,   104,   105,    -1,    -1,    -1,   109,
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
      -1,    84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,
      -1,    -1,    95,    96,    97,    98,    -1,   100,   101,    -1,
     103,    -1,   105,    -1,    -1,    -1,   109,   110,   111,    -1,
     113,   114,   115,   116,   117,   118,    -1,    -1,    -1,    -1,
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
     127,   128,   129,    -1,    -1,    -1,    -1,    -1,    -1,   136,
      -1,    -1,    -1,    -1,   141,   142,   143,   144,    -1,    -1,
      -1,   148,    -1,   150,   151,    -1,   153,   154,   155,     3,
       4,     5,     6,     7,    -1,    -1,    -1,    -1,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,
      84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,
      -1,    95,    96,    97,    98,    -1,   100,   101,    -1,   103,
      -1,   105,    -1,    -1,    -1,    -1,    -1,   111,    -1,   113,
     114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
     124,   125,   126,   127,   128,   129,    -1,    -1,    -1,    -1,
      -1,    -1,   136,    -1,    -1,    -1,    -1,   141,   142,   143,
     144,    -1,    -1,    -1,   148,    -1,   150,   151,    -1,   153,
     154,   155,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    26,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    65,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    -1,    75,    -1,    -1,    -1,    79,    80,
      81,    82,    -1,    84,    -1,    86,    -1,    88,    -1,    -1,
      91,    -1,    -1,    -1,    95,    96,    97,    98,    -1,   100,
     101,    -1,   103,    -1,   105,    -1,    -1,    -1,    -1,    -1,
     111,    -1,   113,   114,   115,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   123,   124,   125,   126,   127,   128,   129,     3,
       4,     5,     6,     7,    -1,   136,    -1,    -1,    12,    -1,
     141,   142,   143,   144,    -1,    -1,    -1,   148,    -1,   150,
     151,    -1,   153,   154,   155,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      -1,    75,    -1,    -1,    -1,    79,    80,    81,    82,    -1,
      84,    -1,    86,    -1,    88,    -1,    -1,    91,    -1,    -1,
      -1,    95,    96,    97,    98,    -1,   100,   101,    -1,   103,
      -1,   105,    -1,    -1,    -1,    -1,    -1,   111,    -1,   113,
     114,   115,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
     124,   125,   126,   127,   128,   129,     3,     4,     5,     6,
       7,    -1,   136,    -1,    -1,    12,    -1,   141,   142,   143,
     144,    -1,    -1,    -1,   148,    -1,   150,   151,    -1,   153,
     154,   155,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    -1,
      -1,    48,    -1,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    -1,    -1,    -1,
      -1,    -1,    79,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    98,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   111,    -1,    -1,   114,   115,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   123,   124,   125,   126,
     127,   128,   129,     3,     4,     5,     6,     7,    -1,   136,
      -1,    -1,    12,    -1,   141,   142,   143,   144,    -1,    -1,
      -1,   148,    -1,   150,    -1,    -1,   153,   154,   155,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    -1,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,    79,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    98,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   111,    -1,    -1,   114,   115,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   123,   124,   125,   126,   127,   128,   129,
       3,     4,     5,     6,     7,    -1,   136,    -1,    -1,    12,
      -1,   141,   142,   143,   144,    -1,    -1,    -1,   148,    -1,
     150,    -1,    -1,   153,   154,   155,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,    79,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    98,    -1,    -1,    -1,    -1,
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
      -1,    -1,   148,   149,    -1,    -1,    -1,   153,   154,   155,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
     123,   124,   125,   126,   127,   128,   129,    -1,    -1,    -1,
      -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,   141,   142,
     143,   144,     9,    10,    11,   148,    -1,    -1,    -1,    -1,
     153,   154,   155,    -1,    -1,    -1,    -1,    -1,    25,    -1,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,
      -1,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,    -1,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    25,   152,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,     9,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    25,   152,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    -1,    49,
       9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    25,   152,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    -1,
      49,    -1,    -1,    -1,    -1,    -1,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   152,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   152,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   152,    25,    -1,    27,    28,    29,    30,
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
      -1,    49,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    25,   150,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    -1,    49,    -1,     9,    10,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,   150,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    -1,    49,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    25,   150,    27,    28,    29,    30,    31,    32,    33,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   149,     9,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,    -1,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    -1,    49,     9,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    49,    10,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    11,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      25,    -1,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    25,    49,    27,    28,    29,    30,    31,
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
       0,   158,   159,     0,   160,     3,     4,     5,     6,     7,
      12,    42,    43,    48,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    62,    63,    64,    65,    69,
      70,    71,    72,    73,    75,    79,    80,    81,    82,    84,
      86,    88,    91,    95,    96,    97,    98,    99,   100,   101,
     103,   104,   105,   109,   110,   111,   113,   114,   115,   116,
     117,   118,   123,   124,   125,   126,   127,   128,   129,   136,
     141,   142,   143,   144,   148,   150,   151,   153,   154,   155,
     161,   162,   167,   171,   172,   202,   203,   205,   207,   210,
     212,   257,   270,   273,   282,   293,   296,   300,   301,   303,
     304,   312,   313,   314,   315,   316,   317,   318,   324,   334,
     337,    71,   111,   141,   270,   300,   300,   148,   300,   300,
     300,   300,   300,   300,   300,   268,   300,   300,   300,   300,
     300,   300,   300,   141,   144,   161,   282,   303,   304,   314,
     303,   300,   141,   144,   161,   282,   284,   285,   314,   316,
     317,   324,   148,   290,   148,    26,   253,   300,   179,   148,
     148,   148,   189,   148,   150,   300,   150,   300,    71,    71,
     150,   257,   300,   304,   190,   300,   144,   161,   165,   166,
      73,   153,   239,   240,   117,   117,    73,   241,   148,   148,
     148,   148,   148,   148,    73,    78,   137,   138,   139,   330,
     331,   144,   151,   161,   161,   300,   168,   151,    78,   291,
     330,    78,   330,   144,   148,     8,   150,    71,    71,    31,
     204,   140,     9,    10,    11,    25,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    49,   150,    59,
      60,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,   148,   140,   121,    61,   151,   153,   317,
     204,   300,   300,   144,   161,   140,   140,   144,   161,   140,
     260,   140,   121,   317,   149,   300,   300,     8,   150,   171,
     177,   254,   255,   300,   257,   304,   148,   300,   150,   150,
     150,    13,   150,   150,   151,   150,   161,    90,     8,   150,
     151,   301,   304,     8,   150,    13,     8,   150,   200,   201,
     304,   304,   335,   304,   149,   258,    31,   300,   328,   329,
      61,   121,   137,   331,    72,   300,   304,    78,   137,   331,
     161,   164,   150,   151,   148,   149,   152,   169,   300,   154,
     155,    71,   274,    71,   119,   211,   209,    71,   148,    71,
     312,   317,   324,   263,   300,   264,    26,   265,   261,   262,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   300,   300,   300,   300,   300,   300,   284,
      31,   300,   300,   300,   300,   300,   300,   300,   300,   300,
     300,   300,   300,   281,    71,   312,   305,   300,   319,   300,
     149,   161,    71,    71,   161,   312,   148,   292,   312,   286,
     149,   149,   300,    82,   300,   150,     8,    90,    90,    71,
     221,   149,    42,    43,   124,   136,   141,   144,   161,   282,
     293,   294,   295,   168,    90,    71,   166,   300,   240,   294,
      73,     8,   149,     8,   149,   149,   150,   123,   304,   325,
     326,   302,   304,   122,   149,     8,   298,   332,    71,    61,
     152,   152,   148,   159,   163,   276,   116,   170,   171,   202,
     203,   152,    31,   237,   238,   257,   304,    13,   141,   144,
     161,   283,   208,   119,   213,   206,   269,   148,   148,   317,
     300,   300,   267,   300,   300,   300,    63,   304,   237,   148,
     148,    71,   151,   312,   320,   322,   323,   156,   152,   237,
     320,    26,   173,   148,   149,   181,   256,   187,   185,    13,
       8,   149,   184,   294,   294,   148,    78,   144,   161,   140,
     152,    71,   152,    13,   201,   150,   336,   148,     8,   149,
      31,   300,    31,   300,    71,    73,    74,   333,   300,   275,
     152,   159,   237,   148,   302,   149,     8,   294,   144,   161,
     120,   214,   215,   283,   151,   148,   124,   234,   235,   236,
     283,   277,   278,   300,    26,   284,   149,   279,   280,   300,
     321,   306,    61,   151,   149,   287,   175,   171,   180,   178,
     254,   300,   304,    31,   217,   304,   294,    71,    26,   171,
     220,    26,   151,   222,   294,   297,   299,   161,    71,   102,
     294,   304,   327,   326,    13,   302,   302,   122,   156,   156,
     237,   152,   149,   149,    31,   257,   304,   161,   215,   151,
       8,   242,   234,   149,     8,    31,    73,   237,   237,   266,
     259,   237,   237,   152,   148,   310,   319,   300,   288,   168,
     174,   300,    26,   171,   227,   150,   122,   216,   304,   216,
      13,   168,   150,   223,   150,   223,   122,   149,     8,   298,
     148,   325,   300,    31,   300,   152,   149,   150,   302,   242,
     283,    99,   106,   107,   108,   109,   110,   111,   112,   152,
     243,   247,   248,   249,   250,   252,   149,   104,   271,   236,
      73,    13,   149,   149,   300,   292,   149,   149,   311,   307,
     156,   152,   121,   289,   176,   228,   149,   168,   182,   217,
     149,   149,   294,    89,   223,    92,    93,    94,   223,   152,
     294,   294,   191,   149,   302,   152,    71,   244,   270,   250,
       8,   150,   151,   148,   151,    31,    73,    13,   294,   237,
     121,   308,   320,   230,    66,    67,   232,   150,    83,   254,
     188,   186,   150,    92,   150,   300,    26,   150,   226,   152,
     122,   283,    13,    73,   251,   204,    71,   168,    31,    73,
     272,   168,    73,    13,   294,   149,   320,    66,    67,   233,
     148,   171,   150,   149,    26,   171,   219,   219,   150,   226,
     225,   294,   192,   294,    13,     8,   150,    71,    13,   152,
      73,     8,   149,   152,    13,   294,   309,   148,    26,    68,
     300,   183,   168,   224,   168,    73,   294,    73,   245,   294,
      31,    73,   294,   310,   300,   168,   150,   149,    26,   171,
     218,    87,   168,   149,    13,   148,    73,   149,   229,   168,
     150,   193,   294,   234,    26,   171,    85,   151,   149,   231,
     150,   168,   150,   151,   246,   168,   152,   168,   194,   152,
     102,   195,   196,   197,   148,   197,   283,   198,    73,   149,
     199,   151,   168,   152
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
      yyerror (analyzer, YY_("syntax error: cannot back up")); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, mvceditor::LexicalAnalyzerClass &analyzer)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, analyzer)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    mvceditor::LexicalAnalyzerClass &analyzer;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (analyzer);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, mvceditor::LexicalAnalyzerClass &analyzer)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, analyzer)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    mvceditor::LexicalAnalyzerClass &analyzer;
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, mvceditor::LexicalAnalyzerClass &analyzer)
#else
static void
yy_reduce_print (yyvsp, yyrule, analyzer)
    YYSTYPE *yyvsp;
    int yyrule;
    mvceditor::LexicalAnalyzerClass &analyzer;
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, mvceditor::LexicalAnalyzerClass &analyzer)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, analyzer)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    mvceditor::LexicalAnalyzerClass &analyzer;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (analyzer);

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
int yyparse (mvceditor::LexicalAnalyzerClass &analyzer);
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
yyparse (mvceditor::LexicalAnalyzerClass &analyzer)
#else
int
yyparse (analyzer)
    mvceditor::LexicalAnalyzerClass &analyzer;
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

    { ;}
    break;

  case 3:

    {;}
    break;

  case 4:

    {;}
    break;

  case 6:

    {;}
    break;

  case 7:

    {;}
    break;

  case 8:

    {;}
    break;

  case 9:

    {;}
    break;

  case 10:

    {;}
    break;

  case 11:

    {;}
    break;

  case 12:

    {;}
    break;

  case 13:

    {;}
    break;

  case 14:

    {;}
    break;

  case 15:

    {;}
    break;

  case 16:

    {;}
    break;

  case 17:

    {;}
    break;

  case 18:

    {;}
    break;

  case 21:

    {;}
    break;

  case 22:

    {;}
    break;

  case 23:

    {;}
    break;

  case 24:

    {;}
    break;

  case 25:

    {;}
    break;

  case 26:

    {;}
    break;

  case 27:

    {;}
    break;

  case 28:

    {;}
    break;

  case 33:

    {;}
    break;

  case 34:

    {;}
    break;

  case 35:

    {;}
    break;

  case 37:

    {;}
    break;

  case 38:

    {;}
    break;

  case 39:

    {;}
    break;

  case 40:

    {;}
    break;

  case 41:

    {;}
    break;

  case 42:

    {;}
    break;

  case 43:

    {;}
    break;

  case 44:

    {;}
    break;

  case 45:

    {;}
    break;

  case 46:

    {;}
    break;

  case 47:

    {;}
    break;

  case 48:

    {;}
    break;

  case 49:

    {;}
    break;

  case 50:

    {;}
    break;

  case 51:

    {;}
    break;

  case 52:

    {;}
    break;

  case 53:

    {;}
    break;

  case 54:

    {;}
    break;

  case 55:

    {;}
    break;

  case 56:

    {;}
    break;

  case 57:

    {;}
    break;

  case 58:

    {;}
    break;

  case 59:

    {;}
    break;

  case 60:

    {;}
    break;

  case 61:

    {;}
    break;

  case 65:

    {;}
    break;

  case 66:

    {;}
    break;

  case 68:

    {;}
    break;

  case 69:

    {;}
    break;

  case 70:

    {;}
    break;

  case 71:

    {;}
    break;

  case 72:

    {;}
    break;

  case 73:

    {;}
    break;

  case 74:

    {;}
    break;

  case 75:

    {;}
    break;

  case 77:

    {;}
    break;

  case 78:

    {;}
    break;

  case 79:

    {;}
    break;

  case 80:

    {;}
    break;

  case 81:

    {;}
    break;

  case 82:

    {;}
    break;

  case 83:

    {;}
    break;

  case 84:

    {;}
    break;

  case 85:

    {;}
    break;

  case 86:

    {;}
    break;

  case 87:

    {;}
    break;

  case 88:

    {;}
    break;

  case 89:

    {;}
    break;

  case 90:

    {;}
    break;

  case 91:

    {;}
    break;

  case 94:

    {;}
    break;

  case 95:

    {;}
    break;

  case 96:

    {;}
    break;

  case 97:

    {;}
    break;

  case 98:

    {;}
    break;

  case 99:

    {;}
    break;

  case 100:

    {;}
    break;

  case 101:

    {;}
    break;

  case 102:

    {;}
    break;

  case 103:

    {;}
    break;

  case 104:

    {;}
    break;

  case 105:

    {;}
    break;

  case 106:

    {;}
    break;

  case 107:

    {;}
    break;

  case 108:

    {;}
    break;

  case 109:

    {;}
    break;

  case 110:

    {;}
    break;

  case 115:

    {;}
    break;

  case 116:

    {;}
    break;

  case 117:

    {;}
    break;

  case 118:

    {;}
    break;

  case 119:

    {;}
    break;

  case 120:

    {;}
    break;

  case 127:

    {;}
    break;

  case 128:

    {;}
    break;

  case 129:

    {;}
    break;

  case 130:

    {;}
    break;

  case 131:

    {;}
    break;

  case 132:

    {;}
    break;

  case 133:

    {;}
    break;

  case 134:

    {;}
    break;

  case 135:

    {;}
    break;

  case 136:

    {;}
    break;

  case 137:

    {;}
    break;

  case 143:

    {;}
    break;

  case 144:

    {;}
    break;

  case 146:

    {;}
    break;

  case 147:

    {;}
    break;

  case 154:

    {;}
    break;

  case 155:

    {;}
    break;

  case 156:

    {;}
    break;

  case 157:

    {;}
    break;

  case 158:

    {;}
    break;

  case 159:

    {;}
    break;

  case 160:

    {;}
    break;

  case 161:

    {;}
    break;

  case 162:

    {;}
    break;

  case 163:

    {;}
    break;

  case 164:

    {;}
    break;

  case 165:

    {;}
    break;

  case 166:

    {;}
    break;

  case 167:

    {;}
    break;

  case 168:

    {;}
    break;

  case 169:

    {;}
    break;

  case 170:

    {;}
    break;

  case 171:

    {;}
    break;

  case 172:

    {;}
    break;

  case 173:

    {;}
    break;

  case 174:

    {;}
    break;

  case 175:

    {;}
    break;

  case 176:

    {;}
    break;

  case 177:

    {;}
    break;

  case 178:

    {;}
    break;

  case 179:

    {;}
    break;

  case 180:

    {;}
    break;

  case 181:

    {;}
    break;

  case 184:

    {;}
    break;

  case 187:

    {;}
    break;

  case 188:

    {;}
    break;

  case 189:

    {;}
    break;

  case 190:

    {;}
    break;

  case 191:

    {;}
    break;

  case 192:

    {;}
    break;

  case 193:

    {;}
    break;

  case 194:

    {;}
    break;

  case 195:

    {;}
    break;

  case 196:

    {;}
    break;

  case 197:

    {;}
    break;

  case 198:

    {;}
    break;

  case 199:

    {;}
    break;

  case 200:

    {;}
    break;

  case 201:

    {;}
    break;

  case 202:

    {;}
    break;

  case 203:

    {;}
    break;

  case 204:

    {;}
    break;

  case 205:

    {;}
    break;

  case 206:

    {;}
    break;

  case 207:

    {;}
    break;

  case 208:

    {;}
    break;

  case 209:

    {;}
    break;

  case 210:

    {;}
    break;

  case 211:

    {;}
    break;

  case 212:

    {;}
    break;

  case 213:

    {;}
    break;

  case 214:

    {;}
    break;

  case 215:

    {;}
    break;

  case 216:

    {;}
    break;

  case 217:

    {;}
    break;

  case 218:

    {;}
    break;

  case 219:

    {;}
    break;

  case 220:

    {;}
    break;

  case 221:

    {;}
    break;

  case 222:

    {;}
    break;

  case 223:

    {;}
    break;

  case 224:

    {;}
    break;

  case 225:

    {;}
    break;

  case 226:

    {;}
    break;

  case 227:

    {;}
    break;

  case 228:

    {;}
    break;

  case 229:

    {;}
    break;

  case 230:

    {;}
    break;

  case 231:

    {;}
    break;

  case 232:

    {;}
    break;

  case 233:

    {;}
    break;

  case 234:

    {;}
    break;

  case 235:

    {;}
    break;

  case 236:

    {;}
    break;

  case 237:

    {;}
    break;

  case 238:

    {;}
    break;

  case 239:

    {;}
    break;

  case 240:

    {;}
    break;

  case 241:

    {;}
    break;

  case 242:

    {;}
    break;

  case 243:

    {;}
    break;

  case 244:

    {;}
    break;

  case 245:

    {;}
    break;

  case 246:

    {;}
    break;

  case 247:

    {;}
    break;

  case 248:

    {;}
    break;

  case 249:

    {;}
    break;

  case 250:

    {;}
    break;

  case 251:

    {;}
    break;

  case 252:

    {;}
    break;

  case 253:

    {;}
    break;

  case 254:

    {;}
    break;

  case 255:

    {;}
    break;

  case 256:

    {;}
    break;

  case 257:

    {;}
    break;

  case 258:

    {;}
    break;

  case 259:

    {;}
    break;

  case 260:

    { ;}
    break;

  case 261:

    { ;}
    break;

  case 262:

    {;}
    break;

  case 263:

    {;}
    break;

  case 264:

    {;}
    break;

  case 265:

    {;}
    break;

  case 266:

    {;}
    break;

  case 267:

    {;}
    break;

  case 268:

    {;}
    break;

  case 269:

    {;}
    break;

  case 270:

    {;}
    break;

  case 271:

    {;}
    break;

  case 272:

    {;}
    break;

  case 273:

    {;}
    break;

  case 274:

    {;}
    break;

  case 275:

    {;}
    break;

  case 276:

    {;}
    break;

  case 277:

    {;}
    break;

  case 278:

    {;}
    break;

  case 279:

    {;}
    break;

  case 280:

    {;}
    break;

  case 281:

    {;}
    break;

  case 282:

    {;}
    break;

  case 283:

    {;}
    break;

  case 284:

    {;}
    break;

  case 285:

    {;}
    break;

  case 286:

    {;}
    break;

  case 287:

    {;}
    break;

  case 288:

    {;}
    break;

  case 289:

    {;}
    break;

  case 290:

    {;}
    break;

  case 291:

    {;}
    break;

  case 292:

    {;}
    break;

  case 293:

    {;}
    break;

  case 294:

    {;}
    break;

  case 295:

    {;}
    break;

  case 296:

    {;}
    break;

  case 299:

    {;}
    break;

  case 300:

    {;}
    break;

  case 301:

    {;}
    break;

  case 302:

    {;}
    break;

  case 303:

    {;}
    break;

  case 304:

    {;}
    break;

  case 305:

    {;}
    break;

  case 306:

    {;}
    break;

  case 307:

    {;}
    break;

  case 308:

    {;}
    break;

  case 309:

    {;}
    break;

  case 310:

    {;}
    break;

  case 311:

    {;}
    break;

  case 312:

    {;}
    break;

  case 313:

    {;}
    break;

  case 314:

    {;}
    break;

  case 315:

    {;}
    break;

  case 316:

    {;}
    break;

  case 317:

    {;}
    break;

  case 318:

    {;}
    break;

  case 319:

    {;}
    break;

  case 320:

    {;}
    break;

  case 321:

    {;}
    break;

  case 322:

    {;}
    break;

  case 323:

    {;}
    break;

  case 324:

    {;}
    break;

  case 325:

    {;}
    break;

  case 326:

    {;}
    break;

  case 327:

    {;}
    break;

  case 328:

    {;}
    break;

  case 329:

    {;}
    break;

  case 330:

    {;}
    break;

  case 331:

    {;}
    break;

  case 334:

    {;}
    break;

  case 335:

    {;}
    break;

  case 336:

    {;}
    break;

  case 337:

    {;}
    break;

  case 338:

    {;}
    break;

  case 339:

    {;}
    break;

  case 340:

    {;}
    break;

  case 341:

    {;}
    break;

  case 342:

    {;}
    break;

  case 343:

    {;}
    break;

  case 344:

    {;}
    break;

  case 345:

    {;}
    break;

  case 346:

    {;}
    break;

  case 347:

    {;}
    break;

  case 348:

    {;}
    break;

  case 349:

    {;}
    break;

  case 350:

    {;}
    break;

  case 351:

    {;}
    break;

  case 352:

    {;}
    break;

  case 353:

    {;}
    break;

  case 354:

    {;}
    break;

  case 355:

    {;}
    break;

  case 356:

    {;}
    break;

  case 357:

    {;}
    break;

  case 358:

    {;}
    break;

  case 359:

    {;}
    break;

  case 360:

    {;}
    break;

  case 361:

    {;}
    break;

  case 362:

    {;}
    break;

  case 363:

    {;}
    break;

  case 364:

    {;}
    break;

  case 365:

    {;}
    break;

  case 366:

    {;}
    break;

  case 367:

    {;}
    break;

  case 368:

    {;}
    break;

  case 369:

    {;}
    break;

  case 370:

    {;}
    break;

  case 371:

    {;}
    break;

  case 372:

    {;}
    break;

  case 373:

    {;}
    break;

  case 376:

    {;}
    break;

  case 377:

    {;}
    break;

  case 378:

    {;}
    break;

  case 379:

    {;}
    break;

  case 380:

    {;}
    break;

  case 381:

    {;}
    break;

  case 382:

    {;}
    break;

  case 383:

    {;}
    break;

  case 384:

    {;}
    break;

  case 385:

    {;}
    break;

  case 386:

    {;}
    break;

  case 387:

    {;}
    break;

  case 388:

    {;}
    break;

  case 389:

    {;}
    break;

  case 390:

    {;}
    break;

  case 391:

    {;}
    break;

  case 392:

    {;}
    break;

  case 393:

    {;}
    break;

  case 394:

    {;}
    break;

  case 395:

    {;}
    break;

  case 396:

    {;}
    break;

  case 397:

    {;}
    break;

  case 398:

    {;}
    break;

  case 399:

    {;}
    break;

  case 400:

    {;}
    break;

  case 401:

    {;}
    break;

  case 402:

    {;}
    break;

  case 403:

    {;}
    break;

  case 404:

    {;}
    break;

  case 405:

    {;}
    break;

  case 406:

    {;}
    break;

  case 407:

    {;}
    break;

  case 408:

    {;}
    break;

  case 409:

    {;}
    break;

  case 410:

    {;}
    break;

  case 411:

    {;}
    break;

  case 412:

    {;}
    break;

  case 413:

    {;}
    break;

  case 414:

    {;}
    break;

  case 415:

    {;}
    break;

  case 416:

    {;}
    break;

  case 417:

    {;}
    break;

  case 418:

    {;}
    break;

  case 419:

    {;}
    break;

  case 420:

    {;}
    break;

  case 421:

    {;}
    break;

  case 422:

    {;}
    break;

  case 425:

    {;}
    break;

  case 426:

    {;}
    break;

  case 427:

    {;}
    break;

  case 428:

    {;}
    break;

  case 429:

    {;}
    break;

  case 430:

    {;}
    break;

  case 431:

    {;}
    break;

  case 432:

    {;}
    break;

  case 433:

    {;}
    break;

  case 434:

    {;}
    break;

  case 435:

    {;}
    break;

  case 436:

    {;}
    break;

  case 437:

    {;}
    break;

  case 438:

    {;}
    break;

  case 439:

    {;}
    break;

  case 440:

    {;}
    break;

  case 441:

    {;}
    break;

  case 442:

    {;}
    break;

  case 443:

    {;}
    break;

  case 444:

    {;}
    break;

  case 445:

    {;}
    break;

  case 446:

    {;}
    break;

  case 447:

    {;}
    break;

  case 448:

    {;}
    break;

  case 449:

    {;}
    break;

  case 450:

    {;}
    break;

  case 451:

    {;}
    break;

  case 452:

    {;}
    break;

  case 453:

    {;}
    break;

  case 454:

    {;}
    break;

  case 455:

    {;}
    break;

  case 456:

    {;}
    break;

  case 457:

    {;}
    break;

  case 458:

    {;}
    break;

  case 459:

    {;}
    break;

  case 460:

    {;}
    break;

  case 461:

    {;}
    break;

  case 462:

    {;}
    break;

  case 463:

    {;}
    break;

  case 464:

    {;}
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
      yyerror (analyzer, YY_("syntax error"));
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
	    yyerror (analyzer, yymsg);
	  }
	else
	  {
	    yyerror (analyzer, YY_("syntax error"));
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
		  yystos[yystate], yyvsp, analyzer);
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
  yyerror (analyzer, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, analyzer);
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





int php53lex(YYSTYPE* semanticValue, mvceditor::LexicalAnalyzerClass &analyzer) {
	int ret = analyzer.NextToken();
	*semanticValue = ret;

	// ignore these token; there are no parse rules for them
	if (T_OPEN_TAG == ret) {
		ret = analyzer.NextToken();
		*semanticValue = ret;
	}
	if (T_DOC_COMMENT == ret) {
		
		// advance past all DOC comments (there can be more than one consecutive)
		while (T_DOC_COMMENT == ret) {
			ret = analyzer.NextToken();
			*semanticValue = ret;
		}
	}
	if (T_CLOSE_TAG == ret) {
		ret = ';';
		*semanticValue = ret;
	}
	return ret;
}

void php53error(mvceditor::LexicalAnalyzerClass &analyzer, std::string msg) {
	int capacity = msg.length() + 1;
	int written = u_sprintf(analyzer.ParserError.getBuffer(capacity), "%s", msg.c_str());
	analyzer.ParserError.releaseBuffer(written);
}

