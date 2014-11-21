/* A Bison parser, made by GNU Bison 3.0.2.  */

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         antimony_yyparse
#define yylex           antimony_yylex
#define yyerror         antimony_yyerror
#define yydebug         antimony_yydebug
#define yynerrs         antimony_yynerrs

#define yylval          antimony_yylval
#define yychar          antimony_yychar

/* Copy the first part of user declarations.  */
#line 2 "src/antimony.ypp" /* yacc.c:339  */

  //#define YYSTYPE double
#include <cassert>
#include <ctype.h>
#include <fstream>
#include <iostream>
#include <math.h>
#include <set>
#include <stdio.h>
#include <string>
#ifndef NSBML
#include <sbml/SBMLTypes.h>
#endif
#include "registry.h"
#include "module.h"
#include "unitdef.h"
#include "stringx.h"

  class Formula;
  class ReactantList;
  class AntimonyReaction;
  class Variable;

  using namespace std;
  int antimony_yylex(void);
  void antimony_yyerror(char const *);
  Registry g_registry;
  int antimony_yylloc_first_line = 1;
  int antimony_yylloc_last_line = 1;
  vector<int> antimony_yylloc_last_lines;

#line 106 "src/antimony.tab.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int antimony_yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEOF = 0,
    NUM = 259,
    AFTER = 260,
    ANTWORD = 261,
    AT = 262,
    BECOMESIRREV = 263,
    COMPARTMENT = 264,
    CONSTANT = 265,
    CONSTWORD = 266,
    DASHES = 267,
    DELETEWORD = 268,
    DNA = 269,
    ELLIPSES = 270,
    END = 271,
    EVENT = 272,
    FORMULA = 273,
    FUNCTION = 274,
    FUNCTIONWORD = 275,
    GENE = 276,
    HASWORD = 277,
    IMPORT = 278,
    INWORD = 279,
    IS = 280,
    MODNAME = 281,
    MODULE = 282,
    OPERATOR = 283,
    REACTION = 284,
    SPECIES = 285,
    TEXTSTRING = 286,
    UNITWORD = 287,
    VARWORD = 288,
    ERROR = 289
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 35 "src/antimony.ypp" /* yacc.c:355  */

  char character;
  const string* word;
  double num;
  rd_type reactionDivider;
  Formula* formula;
  Formula* spacedformula;
  Formula* commaformula;
  Module* module;
  ReactantList* reactantList;
  Variable* variable;
  Variable* variablein;
  Variable* varmaybeis;
  Variable* maybein;
  Variable* unitdef;
  bool maybemain;

#line 196 "src/antimony.tab.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE antimony_yylval;

int antimony_yyparse (void);



/* Copy the second part of user declarations.  */

#line 211 "src/antimony.tab.cpp" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

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
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   756

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  179
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  314

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   289

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      56,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    53,     2,     2,    47,    10,     4,    57,
      43,    44,     8,     7,    45,     6,    46,     9,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    49,    50,
      52,    48,    51,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    11,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,     5,    55,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   105,   105,   106,   107,   108,   109,   110,   111,   114,
     117,   117,   123,   123,   129,   130,   133,   134,   137,   137,
     138,   139,   142,   143,   144,   154,   155,   156,   159,   160,
     166,   169,   172,   173,   176,   177,   178,   181,   182,   185,
     186,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   201,   209,   219,   220,   221,   222,   223,   227,   228,
     229,   230,   231,   232,   235,   236,   237,   238,   239,   240,
     241,   242,   243,   244,   245,   246,   247,   248,   249,   257,
     258,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     272,   273,   276,   277,   278,   279,   280,   281,   282,   283,
     287,   287,   288,   288,   292,   293,   294,   298,   299,   303,
     307,   308,   309,   310,   311,   312,   314,   315,   318,   319,
     320,   321,   324,   325,   326,   327,   330,   331,   332,   333,
     336,   337,   338,   339,   342,   343,   344,   345,   348,   349,
     350,   351,   355,   356,   357,   358,   361,   362,   363,   366,
     369,   372,   373,   376,   377,   378,   379,   380,   383,   384,
     387,   387,   388,   388,   389,   389,   390,   390,   393,   394,
     397,   398,   405,   406,   407,   408,   409,   412,   413,   416
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "$undefined", "\"mathematical symbol\"",
  "'&'", "'|'", "'-'", "'+'", "'*'", "'/'", "'%'", "'^'", "\"number\"",
  "\"'after'\"", "\"element name\"", "\"'@' or 'at'\"", "\"=>\"",
  "\"'compartment'\"", "\"name of a pre-defined constant\"", "\"'const'\"",
  "\"--\"", "\"'delete'\"", "\"'DNA'\"", "\"...\"", "\"'end'\"",
  "\"'event'\"", "\"'formula'\"", "\"name of an existing function\"",
  "\"'function'\"", "\"'gene'\"", "\"'has'\"", "\"'import'\"", "\"'in'\"",
  "\"'is'\"", "\"name of an existing module\"", "\"'model' or 'module'\"",
  "\"'operator'\"", "\"'reaction'\"", "\"'species'\"", "\"text string\"",
  "\"'unit'\"", "\"'var'\"", "\"an error\"", "'('", "')'", "','", "'.'",
  "'$'", "'='", "':'", "';'", "'>'", "'<'", "'!'", "'{'", "'}'", "'\\n'",
  "'\\''", "$accept", "input", "import", "module", "$@1", "$@2",
  "maybemain", "function", "$@3", "spacedformula", "variableexportlist",
  "variable", "variablein", "varmaybein", "varmaybeis", "maybein",
  "modulebody", "modulepart", "reaction", "reactantList",
  "reactionDivider", "formula", "commaformula", "mathThing", "lineend",
  "assignment", "submodule", "$@4", "$@5", "variableimportlist",
  "submodifications", "varinitialize", "specinit", "formulainit",
  "reactioninit", "dnainit", "geneinit", "operatorinit", "compartmentinit",
  "varconstinit", "unitinit", "dnadef", "dnastrand", "dnamiddle", "event",
  "$@6", "$@7", "$@8", "$@9", "colonret", "eventmodifications",
  "assignmentlist", "deletion", "unitdef", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,    38,   124,    45,    43,    42,    47,
      37,    94,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,   282,   283,   284,   285,   286,
     287,   288,   289,    40,    41,    44,    46,    36,    61,    58,
      59,    62,    60,    33,   123,   125,    10,    39
};
# endif

#define YYPACT_NINF -252

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-252)))

#define YYTABLE_NINF -55

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -252,    41,  -252,  -252,    81,  -252,  -252,    81,   313,    81,
      81,    81,    81,   175,    81,   -26,   -11,   166,    81,    81,
      81,    81,   426,  -252,    81,  -252,  -252,  -252,  -252,  -252,
     162,   116,   118,  -252,    34,     0,  -252,    34,    34,    34,
      42,    54,    66,   100,   108,   147,   156,   158,    34,    34,
    -252,    81,    34,    94,    -2,   424,   -27,  -252,   -15,  -252,
      81,    81,    81,    81,    81,  -252,    81,  -252,    84,    81,
      -2,  -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,
    -252,  -252,   119,  -252,  -252,  -252,   -19,    81,    81,    81,
      81,    81,    81,    81,  -252,    -2,  -252,    81,   169,    81,
    -252,   157,  -252,   165,   159,  -252,    23,    93,  -252,   194,
      96,  -252,  -252,  -252,    81,    81,    81,    81,    81,    81,
      81,    81,  -252,  -252,    92,  -252,    81,  -252,   207,   214,
    -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,
    -252,  -252,   185,   190,   192,   196,  -252,    -2,  -252,  -252,
    -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,    92,   204,
      81,   205,  -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,
      -2,  -252,   -16,   577,  -252,  -252,    76,   577,  -252,   209,
    -252,    84,     0,  -252,  -252,  -252,  -252,  -252,  -252,    81,
      -2,  -252,    -2,    15,  -252,  -252,  -252,  -252,  -252,  -252,
    -252,  -252,  -252,    -2,  -252,  -252,   577,   577,    97,  -252,
    -252,  -252,  -252,   199,   146,  -252,   577,    81,    -2,   153,
     213,   700,   577,    81,    81,   475,  -252,   577,    96,   577,
      -2,  -252,  -252,  -252,  -252,  -252,   244,  -252,    17,   173,
      -2,  -252,    81,    81,   620,  -252,    -2,    -2,  -252,  -252,
      81,    36,   526,   146,   577,   212,  -252,   138,  -252,    34,
      81,   102,    -2,   186,  -252,  -252,   577,   146,   191,  -252,
      81,  -252,    17,  -252,  -252,   131,   577,    34,    -2,   247,
    -252,   700,  -252,    17,  -252,   526,    -2,  -252,   577,   109,
    -252,  -252,    34,   215,   660,   146,  -252,   102,  -252,    24,
      45,   123,  -252,    17,  -252,    81,  -252,    81,  -252,  -252,
      -2,  -252,  -252,  -252
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,     7,     0,    28,    64,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    16,     0,     0,
       0,     0,     0,     8,     0,    90,    91,     3,     4,     6,
      32,    49,     0,     5,     0,     0,    50,     0,     0,     0,
     110,   111,   112,   113,   114,   115,   116,   117,     0,     0,
     151,   157,     0,     0,    55,   160,    32,    33,    34,   142,
       0,     0,     0,     0,     0,   128,     0,   147,   153,   154,
     177,   130,   122,    18,    21,    20,   134,     9,   102,    17,
      15,    14,     0,   138,   126,   118,   150,     0,     0,     0,
       0,     0,     0,     0,   146,    30,   158,     0,     0,     0,
      64,     0,    64,    53,     0,    41,     0,     0,    62,     0,
      53,    42,    43,    44,     0,     0,     0,     0,     0,     0,
       0,     0,    47,    45,   155,    46,     0,    48,     0,     0,
      82,    81,    83,    84,    89,    85,    67,    64,    68,    65,
      69,    64,     0,    86,    87,    88,    64,    66,    71,   170,
      64,    64,   144,   132,   124,   136,   140,   120,   156,     0,
     104,    12,    64,   143,   131,   123,   135,   139,   127,   119,
      31,    29,     0,   179,    99,    96,    93,    92,    64,     0,
      64,    54,     0,   152,    64,    59,    61,    60,    58,     0,
      56,    63,    54,     0,   121,   125,   129,   133,   137,   141,
     145,   148,   159,   178,    76,    77,   162,    79,     0,    74,
      73,    72,    75,     0,     0,    36,    35,    25,   105,     0,
       0,    53,   149,     0,     0,   164,   100,    97,    53,    98,
      57,    64,   170,    70,    64,    78,     0,   168,     0,     0,
      26,   107,     0,    25,    53,    39,    95,    94,    64,   170,
     104,     0,    37,     0,    80,     0,   169,     0,   161,    64,
       0,    37,   106,     0,    13,    40,   166,     0,     0,    64,
       0,    52,     0,    64,    64,     0,    22,    64,    27,     0,
     103,    53,   170,     0,   107,    37,    38,   163,   171,   172,
      19,    24,    23,     0,    53,     0,   165,    37,    51,     0,
       0,     0,    11,     0,   101,     0,   175,     0,   173,   109,
     108,   167,   176,   174
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,   -10,
      27,    -1,    11,    13,   306,  -251,    -8,     1,  -252,   -99,
      95,    88,  -252,  -252,   -13,  -252,  -252,  -252,  -252,    26,
      -6,  -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,  -252,
    -252,  -252,   171,   272,  -252,  -252,  -252,  -252,  -252,  -164,
    -231,    38,  -252,  -101
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    27,    28,   220,   221,    82,    29,   159,   275,
     239,    56,    57,    58,    59,   271,   244,   245,    34,    35,
     110,   173,   208,   148,    36,    37,    38,   250,   160,   219,
     261,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,   149,   232,   249,   282,   238,
     214,   258,    53,   174
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      30,   253,    33,    54,   182,    97,   106,   107,    68,    70,
     280,   193,    31,    77,    32,   150,   108,   223,   267,    98,
      86,   105,   107,    95,   111,   112,   113,    98,   185,   162,
      98,     5,    78,   151,   298,   122,   123,   186,     5,   125,
     127,     2,     3,   107,    98,   213,   304,   -53,   -53,   215,
     124,   295,   109,     4,   147,     5,     6,   -53,     7,     5,
       8,     9,    10,    11,    24,   231,   187,    12,   158,    13,
      14,    24,    15,   256,   188,    16,    17,    18,    19,    20,
     305,    21,    22,    23,    25,   224,   269,   114,    24,   272,
      26,    25,    24,   -53,    55,     5,   170,    26,   172,   115,
     176,   307,   181,   283,    96,   189,   190,     5,     4,   192,
       5,   116,   202,   128,   129,   130,   131,   132,   133,   134,
     135,   136,    98,     5,   -33,   203,    99,   138,    24,   251,
      98,   303,   139,   161,   270,   309,   140,     5,    98,   126,
      24,   233,   234,    24,    25,   117,   -33,   279,   100,   -33,
      26,   101,   141,   118,   299,   290,    24,   142,   300,   218,
     143,   144,   145,   146,   -33,   -33,   102,   103,   -54,   -54,
      24,     5,   147,   -33,    79,   104,   147,     4,   -54,     5,
     178,    25,    96,   171,    98,     9,   274,    26,   230,    73,
     177,   236,   119,    80,    97,   237,   175,   241,   242,   179,
      81,   120,    74,   121,    24,   147,   147,   184,    98,    75,
     191,   204,    24,   180,   -54,   147,   240,   259,   260,   205,
      30,   147,   246,   247,   147,   206,   147,   192,   147,   207,
     281,   260,    31,   209,    32,   284,   242,   257,   210,   216,
     211,   262,   240,    30,   212,   265,   277,   217,   -10,   218,
     222,   147,   226,   147,   235,    31,   243,    32,   255,   278,
     273,   293,   291,   301,   277,   147,   225,   292,   227,   286,
     263,   257,   229,   294,   183,   147,   268,   228,   297,   291,
      30,    69,   257,     0,   147,     0,     0,   147,   147,     0,
       0,     0,    31,    30,    32,   265,     0,     0,   257,   257,
     310,     0,   257,     0,   257,    31,   257,    32,     0,     0,
     287,     0,     0,     0,    67,     0,     0,    71,    72,   252,
      76,   296,   254,     0,    83,    84,    85,     5,    94,     0,
      60,     0,     0,     0,     0,    61,   266,   306,   308,    62,
       0,   311,    63,   312,     0,   313,     0,   276,     0,    64,
      65,    66,     0,     0,     0,     0,     0,   285,     0,     0,
      24,   288,   289,     0,     0,   276,   152,   153,   154,   155,
     156,     0,   157,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   163,   164,   165,   166,   167,   168,   169,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     194,   195,   196,   197,   198,   199,   200,   201,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,     5,     0,
       5,     0,   138,    87,     0,     0,     0,   139,    88,     0,
       0,   140,    89,     0,     0,    90,     0,     0,     0,     0,
       0,     0,    91,    92,    93,     0,     0,   141,     0,     0,
       0,    24,   142,    24,     0,   143,   144,   145,   146,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   248,     5,
       0,     0,     0,   138,     0,     0,     0,     0,   139,     0,
       0,     0,   140,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   141,     0,
       0,     0,    24,   142,     0,     0,   143,   144,   145,   146,
     128,   129,   130,   131,   132,   133,   134,   135,   136,     0,
       5,     0,     0,     0,   138,     0,     0,     0,     0,   139,
       0,     0,     0,   140,     0,     0,     0,     0,   270,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   141,
       0,     0,     0,    24,   142,     0,     0,   143,   144,   145,
     146,   128,   129,   130,   131,   132,   133,   134,   135,   136,
       0,     5,     0,     0,     0,   138,     0,     0,     0,     0,
     139,     0,     0,     0,   140,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     141,     0,     0,     0,    24,   142,     0,     0,   143,   144,
     145,   146,     4,     0,     5,     6,     0,     7,     0,     8,
       9,    10,    11,     0,   264,     0,    12,     0,     0,    14,
       0,     0,     0,     0,    16,     0,    18,    19,    20,     0,
      21,    22,     0,     0,     0,     0,     0,    24,     0,     0,
      25,     0,     4,     0,     5,     6,    26,     7,     0,     8,
       9,    10,    11,     0,   302,     0,    12,     0,     0,    14,
       0,     0,     0,     0,    16,     0,    18,    19,    20,     0,
      21,    22,     0,     0,     0,     0,     0,    24,     0,     0,
      25,     0,     4,     0,     5,     6,    26,     7,     0,     8,
       9,    10,    11,     0,     0,     0,    12,     0,     0,    14,
       0,     0,     0,     0,    16,     0,    18,    19,    20,     0,
      21,    22,     0,     0,     0,     0,     0,    24,     0,     0,
      25,     0,     0,     0,     0,     0,    26
};

static const yytype_int16 yycheck[] =
{
       1,   232,     1,     4,   103,    32,     6,     7,     9,    10,
     261,   110,     1,    39,     1,    30,    16,    33,   249,    46,
      21,    34,     7,    24,    37,    38,    39,    46,     5,    48,
      46,    14,    43,    48,   285,    48,    49,    14,    14,    52,
      53,     0,     1,     7,    46,   146,   297,     6,     7,   150,
      51,   282,    52,    12,    55,    14,    15,    16,    17,    14,
      19,    20,    21,    22,    47,    50,    43,    26,    69,    28,
      29,    47,    31,    56,    51,    34,    35,    36,    37,    38,
      56,    40,    41,    42,    50,     9,    50,    45,    47,   253,
      56,    50,    47,    52,     6,    14,    97,    56,    99,    45,
     101,    56,   103,   267,    20,    12,   107,    14,    12,   110,
      14,    45,    20,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    46,    14,     8,   126,     8,    18,    47,   228,
      46,   295,    23,    14,    32,    12,    27,    14,    46,    45,
      47,    44,    45,    47,    50,    45,    30,    45,    30,    33,
      56,    33,    43,    45,    45,    24,    47,    48,    49,   160,
      51,    52,    53,    54,    48,    49,    48,    49,     6,     7,
      47,    14,   173,    57,     8,    57,   177,    12,    16,    14,
      15,    50,    20,    14,    46,    20,    48,    56,   189,    14,
     102,    45,    45,    27,    32,    49,    39,    44,    45,    34,
      34,    45,    27,    45,    47,   206,   207,    48,    46,    34,
      16,     4,    47,    48,    52,   216,   217,    44,    45,     5,
     221,   222,   223,   224,   225,   137,   227,   228,   229,   141,
      44,    45,   221,    48,   221,    44,    45,   238,    48,   151,
      48,   242,   243,   244,    48,   244,   259,    43,    43,   250,
     162,   252,    43,   254,    55,   244,    43,   244,    14,   260,
      48,    14,   275,    48,   277,   266,   178,   277,   180,   270,
     243,   272,   184,   281,   103,   276,   250,   182,   284,   292,
     281,     9,   283,    -1,   285,    -1,    -1,   288,   289,    -1,
      -1,    -1,   281,   294,   281,   294,    -1,    -1,   299,   300,
     301,    -1,   303,    -1,   305,   294,   307,   294,    -1,    -1,
     272,    -1,    -1,    -1,     8,    -1,    -1,    11,    12,   231,
      14,   283,   234,    -1,    18,    19,    20,    14,    22,    -1,
      17,    -1,    -1,    -1,    -1,    22,   248,   299,   300,    26,
      -1,   303,    29,   305,    -1,   307,    -1,   259,    -1,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,   269,    -1,    -1,
      47,   273,   274,    -1,    -1,   277,    60,    61,    62,    63,
      64,    -1,    66,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    92,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     114,   115,   116,   117,   118,   119,   120,   121,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    -1,
      14,    -1,    18,    17,    -1,    -1,    -1,    23,    22,    -1,
      -1,    27,    26,    -1,    -1,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    36,    37,    38,    -1,    -1,    43,    -1,    -1,
      -1,    47,    48,    47,    -1,    51,    52,    53,    54,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    23,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    47,    48,    -1,    -1,    51,    52,    53,    54,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    -1,
      14,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,    23,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    32,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    47,    48,    -1,    -1,    51,    52,    53,
      54,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      -1,    14,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      23,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    47,    48,    -1,    -1,    51,    52,
      53,    54,    12,    -1,    14,    15,    -1,    17,    -1,    19,
      20,    21,    22,    -1,    24,    -1,    26,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    34,    -1,    36,    37,    38,    -1,
      40,    41,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      50,    -1,    12,    -1,    14,    15,    56,    17,    -1,    19,
      20,    21,    22,    -1,    24,    -1,    26,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    34,    -1,    36,    37,    38,    -1,
      40,    41,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      50,    -1,    12,    -1,    14,    15,    56,    17,    -1,    19,
      20,    21,    22,    -1,    -1,    -1,    26,    -1,    -1,    29,
      -1,    -1,    -1,    -1,    34,    -1,    36,    37,    38,    -1,
      40,    41,    -1,    -1,    -1,    -1,    -1,    47,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    56
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    59,     0,     1,    12,    14,    15,    17,    19,    20,
      21,    22,    26,    28,    29,    31,    34,    35,    36,    37,
      38,    40,    41,    42,    47,    50,    56,    60,    61,    65,
      69,    70,    71,    75,    76,    77,    82,    83,    84,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   110,    69,    79,    69,    70,    71,    72,
      17,    22,    26,    29,    36,    37,    38,    72,    69,   101,
      69,    72,    72,    14,    27,    34,    72,    39,    43,     8,
      27,    34,    64,    72,    72,    72,    69,    17,    22,    26,
      29,    36,    37,    38,    72,    69,    20,    32,    46,     8,
      30,    33,    48,    49,    57,    82,     6,     7,    16,    52,
      78,    82,    82,    82,    45,    45,    45,    45,    45,    45,
      45,    45,    82,    82,    69,    82,    45,    82,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    18,    23,
      27,    43,    48,    51,    52,    53,    54,    69,    81,   103,
      30,    48,    72,    72,    72,    72,    72,    72,    69,    66,
      86,    14,    48,    72,    72,    72,    72,    72,    72,    72,
      69,    14,    69,    79,   111,    39,    69,    79,    15,    34,
      48,    69,    77,   100,    48,     5,    14,    43,    51,    12,
      69,    16,    69,    77,    72,    72,    72,    72,    72,    72,
      72,    72,    20,    69,     4,     5,    79,    79,    80,    48,
      48,    48,    48,   111,   108,   111,    79,    43,    69,    87,
      62,    63,    79,    33,     9,    79,    43,    79,    78,    79,
      69,    50,   104,    44,    45,    55,    45,    49,   107,    68,
      69,    44,    45,    43,    74,    75,    69,    69,    13,   105,
      85,    77,    79,   108,    79,    14,    56,    69,   109,    44,
      45,    88,    69,    68,    24,    75,    79,   108,    87,    50,
      32,    73,   107,    48,    48,    67,    79,    82,    69,    45,
      73,    44,   106,   107,    44,    79,    69,   109,    79,    79,
      24,    82,    67,    14,    74,   108,   109,    88,    73,    45,
      49,    48,    24,   107,    73,    56,   109,    56,   109,    12,
      69,   109,   109,   109
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    59,    59,    59,    59,    59,    59,    60,
      62,    61,    63,    61,    61,    61,    64,    64,    66,    65,
      65,    65,    67,    67,    67,    68,    68,    68,    69,    69,
      69,    70,    71,    71,    72,    72,    72,    73,    73,    74,
      74,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    76,    76,    77,    77,    77,    77,    77,    78,    78,
      78,    78,    78,    78,    79,    79,    79,    79,    79,    79,
      79,    79,    79,    79,    79,    79,    79,    79,    79,    80,
      80,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      82,    82,    83,    83,    83,    83,    83,    83,    83,    83,
      85,    84,    86,    84,    87,    87,    87,    88,    88,    88,
      89,    89,    89,    89,    89,    89,    89,    89,    90,    90,
      90,    90,    91,    91,    91,    91,    92,    92,    92,    92,
      93,    93,    93,    93,    94,    94,    94,    94,    95,    95,
      95,    95,    96,    96,    96,    96,    97,    97,    97,    98,
      98,    99,    99,   100,   100,   100,   100,   100,   101,   101,
     103,   102,   104,   102,   105,   102,   106,   102,   107,   107,
     108,   108,   109,   109,   109,   109,   109,   110,   110,   111
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     2,     2,     2,     2,     2,     2,
       0,     9,     0,     6,     2,     2,     0,     1,     0,     8,
       2,     2,     1,     2,     2,     0,     1,     3,     1,     3,
       2,     3,     1,     1,     1,     3,     3,     0,     2,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     1,
       1,     8,     6,     0,     1,     2,     3,     4,     2,     2,
       2,     2,     1,     2,     0,     2,     2,     2,     2,     2,
       4,     2,     3,     3,     3,     3,     3,     3,     4,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     5,     5,     3,     4,     4,     3,
       0,     9,     0,     7,     0,     1,     3,     0,     5,     5,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       3,     3,     2,     3,     3,     3,     2,     3,     2,     3,
       2,     3,     3,     3,     2,     3,     3,     3,     2,     3,
       3,     3,     2,     3,     3,     3,     2,     2,     3,     4,
       2,     1,     3,     2,     2,     2,     3,     1,     2,     3,
       0,     6,     0,     8,     0,     8,     0,    10,     1,     2,
       0,     5,     3,     5,     6,     5,     6,     2,     3,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


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
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
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

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

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
      yychar = yylex ();
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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 106 "src/antimony.ypp" /* yacc.c:1646  */
    {}
#line 1608 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 4:
#line 107 "src/antimony.ypp" /* yacc.c:1646  */
    { /*cout << endl << $2->ToString() << endl << endl;*/ }
#line 1614 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 5:
#line 108 "src/antimony.ypp" /* yacc.c:1646  */
    {}
#line 1620 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 109 "src/antimony.ypp" /* yacc.c:1646  */
    {}
#line 1626 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 110 "src/antimony.ypp" /* yacc.c:1646  */
    {YYABORT;}
#line 1632 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 8:
#line 111 "src/antimony.ypp" /* yacc.c:1646  */
    {YYABORT;}
#line 1638 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 114 "src/antimony.ypp" /* yacc.c:1646  */
    { if (g_registry.OpenFile(*((yyvsp[0].word)))==0) YYABORT;}
#line 1644 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 117 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.NewCurrentModule((yyvsp[0].word), (yyvsp[-1].maybemain));}
#line 1650 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 118 "src/antimony.ypp" /* yacc.c:1646  */
    {
                  (yyval.module) = g_registry.CurrentModule();
                  if ((yyval.module)->Finalize()) YYABORT;
                  g_registry.RevertToPreviousModule();
                }
#line 1660 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 123 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.NewCurrentModule((yyvsp[0].word), (yyvsp[-1].maybemain));}
#line 1666 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 124 "src/antimony.ypp" /* yacc.c:1646  */
    {
                  (yyval.module) = g_registry.CurrentModule();
                  if ((yyval.module)->Finalize()) YYABORT;
                  g_registry.RevertToPreviousModule();
                }
#line 1676 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 129 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetError("module '" + *((yyvsp[0].word)) + "' already defined."); YYABORT;}
#line 1682 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 130 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetError("Cannot define '" + *((yyvsp[0].word)) + "' as a module because it is already a defined function."); YYABORT;}
#line 1688 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 133 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.maybemain) = false;}
#line 1694 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 134 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.maybemain) = true;}
#line 1700 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 137 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.NewUserFunction((yyvsp[0].word));}
#line 1706 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 137 "src/antimony.ypp" /* yacc.c:1646  */
    {if (g_registry.SetUserFunction((yyvsp[-1].formula))) YYABORT;}
#line 1712 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 138 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetError("Cannot use '" + *((yyvsp[0].word)) +"' as a function name because it is already the name of a module."); YYABORT;}
#line 1718 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 139 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetError("Cannot define '" + *((yyvsp[0].word)) + "' as a new function because it is already a defined function."); YYABORT;}
#line 1724 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 142 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.formula) = (yyvsp[0].formula);}
#line 1730 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 143 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.formula) = (yyvsp[0].formula);}
#line 1736 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 144 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.formula) = (yyvsp[-1].formula);}
#line 1742 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 154 "src/antimony.ypp" /* yacc.c:1646  */
    {}
#line 1748 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 155 "src/antimony.ypp" /* yacc.c:1646  */
    {if (g_registry.AddVariableToCurrentExportList((yyvsp[0].variable))) YYABORT; }
#line 1754 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 156 "src/antimony.ypp" /* yacc.c:1646  */
    { if (g_registry.AddVariableToCurrentExportList((yyvsp[0].variable))) YYABORT; }
#line 1760 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 28:
#line 159 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.variable) = g_registry.AddVariableToCurrent((yyvsp[0].word)); }
#line 1766 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 29:
#line 160 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.variable) = (yyvsp[-2].variable)->GetSubVariable((yyvsp[0].word));
                  if ((yyval.variable) == NULL) {
                    g_registry.SetError("'" + *((yyvsp[0].word)) + "' is not a subvariable of '" + (yyvsp[-2].variable)->GetNameDelimitedBy(".") + "'.");
                    YYABORT;
                  }
                }
#line 1777 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 30:
#line 166 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.variable) = (yyvsp[0].variable); if ((yyval.variable)->SetIsConst(true)) YYABORT;}
#line 1783 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 31:
#line 169 "src/antimony.ypp" /* yacc.c:1646  */
    {if ((yyvsp[-2].variable)->SetCompartment((yyvsp[0].variable))) YYABORT; (yyval.variable) = (yyvsp[-2].variable);}
#line 1789 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 32:
#line 172 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.variable) = (yyvsp[0].variable);}
#line 1795 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 33:
#line 173 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.variable) = (yyvsp[0].variable);}
#line 1801 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 34:
#line 176 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.variable) = (yyvsp[0].variable);}
#line 1807 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 35:
#line 177 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.variable) = (yyvsp[-2].variable); if ((yyvsp[-2].variable)->SetFormula((yyvsp[0].formula))) YYABORT; }
#line 1813 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 36:
#line 178 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.variable) = (yyvsp[-2].variable); if ((yyvsp[-2].variable)->SetUnit((yyvsp[0].variable))) YYABORT; }
#line 1819 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 37:
#line 181 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.variable) = NULL;}
#line 1825 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 38:
#line 182 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.variable) = (yyvsp[0].variable);}
#line 1831 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 39:
#line 185 "src/antimony.ypp" /* yacc.c:1646  */
    {}
#line 1837 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 40:
#line 186 "src/antimony.ypp" /* yacc.c:1646  */
    {}
#line 1843 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 41:
#line 189 "src/antimony.ypp" /* yacc.c:1646  */
    {}
#line 1849 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 42:
#line 190 "src/antimony.ypp" /* yacc.c:1646  */
    {}
#line 1855 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 43:
#line 191 "src/antimony.ypp" /* yacc.c:1646  */
    {}
#line 1861 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 44:
#line 192 "src/antimony.ypp" /* yacc.c:1646  */
    {}
#line 1867 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 45:
#line 193 "src/antimony.ypp" /* yacc.c:1646  */
    {}
#line 1873 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 46:
#line 194 "src/antimony.ypp" /* yacc.c:1646  */
    {}
#line 1879 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 47:
#line 195 "src/antimony.ypp" /* yacc.c:1646  */
    {}
#line 1885 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 48:
#line 196 "src/antimony.ypp" /* yacc.c:1646  */
    {}
#line 1891 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 49:
#line 197 "src/antimony.ypp" /* yacc.c:1646  */
    {}
#line 1897 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 50:
#line 198 "src/antimony.ypp" /* yacc.c:1646  */
    {}
#line 1903 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 51:
#line 202 "src/antimony.ypp" /* yacc.c:1646  */
    {
                  Variable* var = g_registry.AddNewReactionToCurrent((yyvsp[-4].reactionDivider), (yyvsp[-1].formula), (yyvsp[-7].variable));
                  if (var == NULL) YYABORT;
                  if ((yyvsp[0].variable) != NULL) {
                    if ((yyvsp[-7].variable)->SetCompartment((yyvsp[0].variable))) YYABORT;
                  }
                }
#line 1915 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 52:
#line 210 "src/antimony.ypp" /* yacc.c:1646  */
    {
                  Variable* var = g_registry.AddNewReactionToCurrent((yyvsp[-4].reactionDivider), (yyvsp[-1].formula));
                  if (var == NULL) YYABORT;
                  if ((yyvsp[0].variable) != NULL) {
                    if (var->SetCompartment((yyvsp[0].variable))) YYABORT;
                  }
                }
#line 1927 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 53:
#line 219 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.reactantList) = g_registry.NewBlankReactantList(); }
#line 1933 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 54:
#line 220 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.reactantList) = g_registry.NewBlankReactantList(); (yyval.reactantList)->AddReactant((yyvsp[0].variable)); }
#line 1939 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 55:
#line 221 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.reactantList) = g_registry.NewBlankReactantList(); (yyval.reactantList)->AddReactant((yyvsp[0].variable), (yyvsp[-1].num)); }
#line 1945 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 56:
#line 222 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.reactantList) = (yyvsp[-2].reactantList); (yyvsp[-2].reactantList)->AddReactant((yyvsp[0].variable)); }
#line 1951 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 57:
#line 223 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.reactantList) = (yyvsp[-3].reactantList); (yyvsp[-3].reactantList)->AddReactant((yyvsp[0].variable), (yyvsp[-1].num)); }
#line 1957 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 58:
#line 227 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.reactionDivider) = rdBecomes;}
#line 1963 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 59:
#line 228 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.reactionDivider) = rdInhibits;}
#line 1969 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 60:
#line 229 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.reactionDivider) = rdInfluences;}
#line 1975 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 61:
#line 230 "src/antimony.ypp" /* yacc.c:1646  */
    {if (*(yyvsp[0].word) != "o") {g_registry.SetError("'-" + *(yyvsp[0].word) + "' is not a valid set of characters to demark reactions.  Try '->' for reactions, and '-|', '-o', and '-(' for interactions."); YYABORT;} (yyval.reactionDivider) = rdActivates;}
#line 1981 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 62:
#line 231 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.reactionDivider) = rdBecomesIrreversibly;}
#line 1987 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 63:
#line 232 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.reactionDivider) = rdBecomes;}
#line 1993 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 64:
#line 235 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.formula) = g_registry.NewBlankFormula(); }
#line 1999 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 65:
#line 236 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.formula) = (yyvsp[-1].formula); (yyvsp[-1].formula)->AddEllipses();}
#line 2005 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 66:
#line 237 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.formula) = (yyvsp[-1].formula); (yyvsp[-1].formula)->AddVariable((yyvsp[0].variable)); }
#line 2011 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 238 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.formula) = (yyvsp[-1].formula); (yyvsp[-1].formula)->AddNum((yyvsp[0].num)); }
#line 2017 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 239 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.formula) = (yyvsp[-1].formula); (yyvsp[-1].formula)->AddText((yyvsp[0].word)); }
#line 2023 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 240 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.formula) = (yyvsp[-1].formula); (yyvsp[-1].formula)->AddText((yyvsp[0].word)); }
#line 2029 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 241 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.formula) = (yyvsp[-3].formula); (yyvsp[-1].formula)->AddParentheses(); (yyval.formula)->AddFormula((yyvsp[-1].formula)); }
#line 2035 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 242 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.formula) = (yyvsp[-1].formula); (yyvsp[-1].formula)->AddMathThing((yyvsp[0].character)); }
#line 2041 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 243 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.formula) = (yyvsp[-2].formula); (yyvsp[-2].formula)->AddMathThing('<'); (yyvsp[-2].formula)->AddMathThing('='); }
#line 2047 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 244 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.formula) = (yyvsp[-2].formula); (yyvsp[-2].formula)->AddMathThing('>'); (yyvsp[-2].formula)->AddMathThing('='); }
#line 2053 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 245 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.formula) = (yyvsp[-2].formula); (yyvsp[-2].formula)->AddMathThing('='); (yyvsp[-2].formula)->AddMathThing('='); }
#line 2059 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 246 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.formula) = (yyvsp[-2].formula); (yyvsp[-2].formula)->AddMathThing('!'); (yyvsp[-2].formula)->AddMathThing('='); }
#line 2065 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 247 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.formula) = (yyvsp[-2].formula); (yyvsp[-2].formula)->AddMathThing('&'); (yyvsp[-2].formula)->AddMathThing('&'); }
#line 2071 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 248 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.formula) = (yyvsp[-2].formula); (yyvsp[-2].formula)->AddMathThing('|'); (yyvsp[-2].formula)->AddMathThing('|'); }
#line 2077 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 250 "src/antimony.ypp" /* yacc.c:1646  */
    {
                  //Need to create a variable to be this unit definition, or find one that already has this unit definition, and then use that name.
                  (yyval.formula) = (yyvsp[-3].formula);
                  (yyval.formula)->AddVariable((yyvsp[-1].variable));
                }
#line 2087 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 257 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.formula) = (yyvsp[0].formula);}
#line 2093 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 258 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.formula) = (yyvsp[-2].formula); (yyval.formula)->AddMathThing(','); (yyval.formula)->AddFormula((yyvsp[0].formula)); }
#line 2099 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 261 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.character) = '+';}
#line 2105 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 262 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.character) = '-';}
#line 2111 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 263 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.character) = '*';}
#line 2117 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 84:
#line 264 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.character) = '/';}
#line 2123 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 85:
#line 265 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.character) = '^';}
#line 2129 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 86:
#line 266 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.character) = '>';}
#line 2135 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 87:
#line 267 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.character) = '<';}
#line 2141 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 88:
#line 268 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.character) = '!';}
#line 2147 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 89:
#line 269 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyval.character) = '%';}
#line 2153 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 272 "src/antimony.ypp" /* yacc.c:1646  */
    {}
#line 2159 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 91:
#line 273 "src/antimony.ypp" /* yacc.c:1646  */
    {}
#line 2165 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 92:
#line 276 "src/antimony.ypp" /* yacc.c:1646  */
    {if ((yyvsp[-2].variable)->SetFormula((yyvsp[0].formula))) YYABORT; }
#line 2171 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 93:
#line 277 "src/antimony.ypp" /* yacc.c:1646  */
    {if ((yyvsp[-2].variable)->Synchronize((yyvsp[0].variable), NULL)) YYABORT;}
#line 2177 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 94:
#line 278 "src/antimony.ypp" /* yacc.c:1646  */
    {if ((yyvsp[-4].variable)->Synchronize((yyvsp[-2].variable), (yyvsp[0].variable))) YYABORT;}
#line 2183 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 95:
#line 279 "src/antimony.ypp" /* yacc.c:1646  */
    {if ((yyvsp[-4].variable)->Synchronize((yyvsp[0].variable), (yyvsp[-2].variable))) YYABORT;}
#line 2189 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 96:
#line 280 "src/antimony.ypp" /* yacc.c:1646  */
    {if ((yyvsp[-2].variable)->SetDisplayName(*((yyvsp[0].word)))) YYABORT;}
#line 2195 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 281 "src/antimony.ypp" /* yacc.c:1646  */
    {if ((yyvsp[-3].variable)->SetAssignmentRule((yyvsp[0].formula))) YYABORT;}
#line 2201 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 282 "src/antimony.ypp" /* yacc.c:1646  */
    {if ((yyvsp[-3].variable)->SetRateRule((yyvsp[0].formula))) YYABORT;}
#line 2207 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 283 "src/antimony.ypp" /* yacc.c:1646  */
    {if ((yyvsp[-2].variable)->SetUnit((yyvsp[0].variable))) YYABORT; }
#line 2213 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 287 "src/antimony.ypp" /* yacc.c:1646  */
    {if ((yyvsp[-3].variable)->SetModule((yyvsp[-1].word))) YYABORT;}
#line 2219 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 287 "src/antimony.ypp" /* yacc.c:1646  */
    {if ((yyvsp[0].variable) != NULL) {if ((yyvsp[-8].variable)->SetCompartment((yyvsp[0].variable))) YYABORT;}}
#line 2225 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 288 "src/antimony.ypp" /* yacc.c:1646  */
    {if(g_registry.CurrentModule()->SetModule((yyvsp[-1].word))) YYABORT;}
#line 2231 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 288 "src/antimony.ypp" /* yacc.c:1646  */
    {if ((yyvsp[0].variable) != NULL) {if (g_registry.GetCurrentSubmodel()->SetCompartment((yyvsp[0].variable))) YYABORT;}}
#line 2237 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 292 "src/antimony.ypp" /* yacc.c:1646  */
    {}
#line 2243 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 293 "src/antimony.ypp" /* yacc.c:1646  */
    {if (g_registry.AddVariableToCurrentImportList((yyvsp[0].variable))) YYABORT; }
#line 2249 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 294 "src/antimony.ypp" /* yacc.c:1646  */
    { if (g_registry.AddVariableToCurrentImportList((yyvsp[0].variable))) YYABORT; }
#line 2255 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 298 "src/antimony.ypp" /* yacc.c:1646  */
    {}
#line 2261 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 299 "src/antimony.ypp" /* yacc.c:1646  */
    {if (CaselessStrCmp(*(yyvsp[-2].word), "extentconv")) {g_registry.GetCurrentSubmodel()->SetExtentConversionFactor((yyvsp[0].variable));}
                else if (CaselessStrCmp(*(yyvsp[-2].word), "timeconv")) {if (g_registry.GetCurrentSubmodel()->SetTimeConversionFactor((yyvsp[0].variable))) YYABORT;}
                else { g_registry.SetError("Illegal term '" + *(yyvsp[-2].word) + "' in submodel declaration.  You may use the terms 'extentconv' and 'timeconv' to set the extent and time conversion factors for this submodel, respectively."); YYABORT;}}
#line 2269 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 303 "src/antimony.ypp" /* yacc.c:1646  */
    {if (CaselessStrCmp(*(yyvsp[-2].word), "extentconv")) {g_registry.GetCurrentSubmodel()->SetExtentConversionFactor((yyvsp[0].num));}
                else if (CaselessStrCmp(*(yyvsp[-2].word), "timeconv")) {if (g_registry.GetCurrentSubmodel()->SetTimeConversionFactor((yyvsp[0].num))) YYABORT;}
                else { g_registry.SetError("Illegal term '" + *(yyvsp[-2].word) + "' in submodel declaration.  You may use the terms 'extentconv' and 'timeconv' to set the extent and time conversion factors for this submodel, respectively."); YYABORT;}}
#line 2277 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 307 "src/antimony.ypp" /* yacc.c:1646  */
    { }
#line 2283 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 308 "src/antimony.ypp" /* yacc.c:1646  */
    { }
#line 2289 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 309 "src/antimony.ypp" /* yacc.c:1646  */
    { }
#line 2295 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 310 "src/antimony.ypp" /* yacc.c:1646  */
    { }
#line 2301 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 311 "src/antimony.ypp" /* yacc.c:1646  */
    { }
#line 2307 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 312 "src/antimony.ypp" /* yacc.c:1646  */
    { }
#line 2313 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 314 "src/antimony.ypp" /* yacc.c:1646  */
    { }
#line 2319 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 315 "src/antimony.ypp" /* yacc.c:1646  */
    { }
#line 2325 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 318 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetConstness(constDEFAULT); (yyvsp[0].variable)->SetRegConst(); if ((yyvsp[0].variable)->SetType(varSpeciesUndef)) YYABORT; }
#line 2331 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 319 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetConstness(constVAR); (yyvsp[0].variable)->SetRegConst(); if ((yyvsp[0].variable)->SetType(varSpeciesUndef)) YYABORT; }
#line 2337 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 320 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetConstness(constCONST); (yyvsp[0].variable)->SetRegConst(); if ((yyvsp[0].variable)->SetType(varSpeciesUndef)) YYABORT; }
#line 2343 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 321 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyvsp[0].variable)->SetRegConst(); if ((yyvsp[0].variable)->SetType(varSpeciesUndef)) YYABORT; }
#line 2349 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 324 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetConstness(constDEFAULT); (yyvsp[0].variable)->SetRegConst(); if ((yyvsp[0].variable)->SetType(varFormulaUndef)) YYABORT; }
#line 2355 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 123:
#line 325 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetConstness(constVAR); (yyvsp[0].variable)->SetRegConst(); if ((yyvsp[0].variable)->SetType(varFormulaUndef)) YYABORT; }
#line 2361 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 326 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetConstness(constCONST); (yyvsp[0].variable)->SetRegConst(); if ((yyvsp[0].variable)->SetType(varFormulaUndef)) YYABORT; }
#line 2367 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 327 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyvsp[0].variable)->SetRegConst(); if ((yyvsp[0].variable)->SetType(varFormulaUndef)) YYABORT; }
#line 2373 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 126:
#line 330 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetConstness(constDEFAULT); (yyvsp[0].variable)->SetRegConst(); if ((yyvsp[0].variable)->SetType(varReactionUndef)) YYABORT; }
#line 2379 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 331 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetConstness(constVAR); (yyvsp[0].variable)->SetRegConst(); if ((yyvsp[0].variable)->SetType(varReactionUndef)) YYABORT; }
#line 2385 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 332 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetError("Reactions may not be set 'const'."); YYABORT; }
#line 2391 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 333 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyvsp[0].variable)->SetRegConst(); if ((yyvsp[0].variable)->SetType(varReactionUndef)) YYABORT; }
#line 2397 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 336 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetConstness(constDEFAULT); (yyvsp[0].variable)->SetRegConst(); if ((yyvsp[0].variable)->SetType(varDNA)) YYABORT; }
#line 2403 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 337 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetConstness(constVAR); (yyvsp[0].variable)->SetRegConst(); if ((yyvsp[0].variable)->SetType(varDNA)) YYABORT; }
#line 2409 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 338 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetConstness(constCONST); (yyvsp[0].variable)->SetRegConst(); if ((yyvsp[0].variable)->SetType(varDNA)) YYABORT; }
#line 2415 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 339 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyvsp[0].variable)->SetRegConst(); if ((yyvsp[0].variable)->SetType(varDNA)) YYABORT; }
#line 2421 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 342 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetConstness(constDEFAULT); (yyvsp[0].variable)->SetRegConst(); if ((yyvsp[0].variable)->SetType(varReactionGene)) YYABORT; }
#line 2427 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 343 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetConstness(constVAR); (yyvsp[0].variable)->SetRegConst(); if ((yyvsp[0].variable)->SetType(varReactionGene)) YYABORT; }
#line 2433 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 344 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetError("Genes may not be set 'const'."); YYABORT; }
#line 2439 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 345 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyvsp[0].variable)->SetRegConst(); if ((yyvsp[0].variable)->SetType(varReactionGene)) YYABORT; }
#line 2445 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 348 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetConstness(constDEFAULT); (yyvsp[0].variable)->SetRegConst(); if ((yyvsp[0].variable)->SetType(varFormulaOperator)) YYABORT; }
#line 2451 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 349 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetConstness(constVAR); (yyvsp[0].variable)->SetRegConst(); if ((yyvsp[0].variable)->SetType(varFormulaOperator)) YYABORT; }
#line 2457 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 350 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetConstness(constCONST); (yyvsp[0].variable)->SetRegConst(); if ((yyvsp[0].variable)->SetType(varFormulaOperator)) YYABORT; }
#line 2463 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 351 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyvsp[0].variable)->SetRegConst(); if ((yyvsp[0].variable)->SetType(varFormulaOperator)) YYABORT; }
#line 2469 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 355 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetConstness(constDEFAULT); (yyvsp[0].variable)->SetRegConst(); if ((yyvsp[0].variable)->SetType(varCompartment)) YYABORT; }
#line 2475 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 356 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetConstness(constVAR); (yyvsp[0].variable)->SetRegConst(); if ((yyvsp[0].variable)->SetType(varCompartment)) YYABORT; }
#line 2481 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 357 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetConstness(constCONST); (yyvsp[0].variable)->SetRegConst(); if ((yyvsp[0].variable)->SetType(varCompartment)) YYABORT; }
#line 2487 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 358 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyvsp[0].variable)->SetRegConst(); if ((yyvsp[0].variable)->SetType(varCompartment)) YYABORT; }
#line 2493 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 361 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetConstness(constVAR); (yyvsp[0].variable)->SetRegConst();}
#line 2499 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 362 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetConstness(constCONST); (yyvsp[0].variable)->SetRegConst();}
#line 2505 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 363 "src/antimony.ypp" /* yacc.c:1646  */
    {(yyvsp[0].variable)->SetRegConst();}
#line 2511 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 366 "src/antimony.ypp" /* yacc.c:1646  */
    {if ((yyvsp[-2].variable)->SetType(varUnitDefinition)) YYABORT;
                                               if ((yyvsp[0].formula)->MakeAllVariablesUnits()) YYABORT;
                                               if ((yyvsp[-2].variable)->GetUnitDef()->SetFromFormula((yyvsp[0].formula))) YYABORT;}
#line 2519 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 369 "src/antimony.ypp" /* yacc.c:1646  */
    {if ((yyvsp[0].variable)->SetType(varUnitDefinition)) YYABORT;}
#line 2525 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 372 "src/antimony.ypp" /* yacc.c:1646  */
    {if (g_registry.SaveWorkingStrand()) YYABORT;}
#line 2531 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 373 "src/antimony.ypp" /* yacc.c:1646  */
    {if (g_registry.SetStrandAs((yyvsp[-2].variable))) YYABORT;}
#line 2537 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 376 "src/antimony.ypp" /* yacc.c:1646  */
    {if (g_registry.SetNewUpstreamOpen((yyvsp[0].variable))) YYABORT;}
#line 2543 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 377 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetOpenUpstream(); }
#line 2549 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 378 "src/antimony.ypp" /* yacc.c:1646  */
    {if (g_registry.SetDownstreamEnd((yyvsp[0].variable))) YYABORT;}
#line 2555 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 156:
#line 379 "src/antimony.ypp" /* yacc.c:1646  */
    {g_registry.SetOpenUpstream(); if(g_registry.SetDownstreamEnd((yyvsp[0].variable))) YYABORT;}
#line 2561 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 157:
#line 380 "src/antimony.ypp" /* yacc.c:1646  */
    { }
#line 2567 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 158:
#line 383 "src/antimony.ypp" /* yacc.c:1646  */
    {if (g_registry.SetNewDownstreamOpen((yyvsp[-1].variable))) YYABORT;}
#line 2573 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 384 "src/antimony.ypp" /* yacc.c:1646  */
    {if (g_registry.SetDownstreamOpen((yyvsp[-1].variable))) YYABORT;}
#line 2579 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 387 "src/antimony.ypp" /* yacc.c:1646  */
    {if (g_registry.SetNewCurrentEvent((yyvsp[0].formula))) YYABORT;}
#line 2585 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 387 "src/antimony.ypp" /* yacc.c:1646  */
    {}
#line 2591 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 388 "src/antimony.ypp" /* yacc.c:1646  */
    {if (g_registry.SetNewCurrentEvent((yyvsp[-2].formula), (yyvsp[0].formula))) YYABORT;}
#line 2597 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 388 "src/antimony.ypp" /* yacc.c:1646  */
    {}
#line 2603 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 389 "src/antimony.ypp" /* yacc.c:1646  */
    {if (g_registry.SetNewCurrentEvent((yyvsp[0].formula), (yyvsp[-3].variable))) YYABORT;}
#line 2609 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 389 "src/antimony.ypp" /* yacc.c:1646  */
    {}
#line 2615 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 390 "src/antimony.ypp" /* yacc.c:1646  */
    {if (g_registry.SetNewCurrentEvent((yyvsp[-2].formula), (yyvsp[0].formula), (yyvsp[-5].variable))) YYABORT;}
#line 2621 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 390 "src/antimony.ypp" /* yacc.c:1646  */
    {}
#line 2627 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 393 "src/antimony.ypp" /* yacc.c:1646  */
    {}
#line 2633 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 394 "src/antimony.ypp" /* yacc.c:1646  */
    {}
#line 2639 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 397 "src/antimony.ypp" /* yacc.c:1646  */
    {}
#line 2645 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 398 "src/antimony.ypp" /* yacc.c:1646  */
    {if (CaselessStrCmp(*(yyvsp[-2].word), "priority")) {g_registry.GetCurrentEvent()->SetPriority(*(yyvsp[0].formula));}
                else if (CaselessStrCmp(*(yyvsp[-2].word), "t0")) {if (g_registry.GetCurrentEvent()->SetInitialValue(*(yyvsp[0].formula))) YYABORT;}
                else if (CaselessStrCmp(*(yyvsp[-2].word), "fromTrigger")) {if (g_registry.GetCurrentEvent()->SetUseValuesFromTriggerTime(*(yyvsp[0].formula))) YYABORT;}
                else if (CaselessStrCmp(*(yyvsp[-2].word), "persistent")) {if (g_registry.GetCurrentEvent()->SetPersistent(*(yyvsp[0].formula))) YYABORT;}
                else { g_registry.SetError("Illegal term '" + *(yyvsp[-2].word) + "' in event defintion.  You may use the terms 'priority', 't0', 'fromTrigger', and 'persistent' here to set those properties of an event."); YYABORT;}}
#line 2655 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 405 "src/antimony.ypp" /* yacc.c:1646  */
    {if (g_registry.GetCurrentEvent()->AddResult((yyvsp[-2].variable), (yyvsp[0].formula))) YYABORT;}
#line 2661 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 406 "src/antimony.ypp" /* yacc.c:1646  */
    {if (g_registry.GetCurrentEvent()->AddResult((yyvsp[-4].variable), (yyvsp[-2].formula))) YYABORT;}
#line 2667 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 407 "src/antimony.ypp" /* yacc.c:1646  */
    {if (g_registry.GetCurrentEvent()->AddResult((yyvsp[-5].variable), (yyvsp[-3].formula))) YYABORT;}
#line 2673 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 408 "src/antimony.ypp" /* yacc.c:1646  */
    {if (g_registry.GetCurrentEvent()->AddResult((yyvsp[-4].variable), (yyvsp[-2].formula))) YYABORT;}
#line 2679 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 409 "src/antimony.ypp" /* yacc.c:1646  */
    {if (g_registry.GetCurrentEvent()->AddResult((yyvsp[-5].variable), (yyvsp[-3].formula))) YYABORT;}
#line 2685 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 412 "src/antimony.ypp" /* yacc.c:1646  */
    {if (g_registry.CurrentModule()->AddDeletion((yyvsp[0].variable))) YYABORT;}
#line 2691 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 413 "src/antimony.ypp" /* yacc.c:1646  */
    {if (g_registry.CurrentModule()->AddDeletion((yyvsp[0].variable))) YYABORT;}
#line 2697 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 416 "src/antimony.ypp" /* yacc.c:1646  */
    {
                    if ((yyvsp[0].formula)->MakeAllVariablesUnits()) YYABORT;
                    if ((yyvsp[0].formula)->IsSingleVariable()) {
                      (yyval.variable) = g_registry.CurrentModule()->GetVariable(((yyvsp[0].formula)->GetVariables())[0]);
                      if ((yyval.variable)==NULL) YYABORT;
                    }
                    else {
                      UnitDef* ud = new UnitDef("", g_registry.CurrentModule()->GetModuleName());
                      if ((yyvsp[0].formula)->MakeAllVariablesUnits()) YYABORT;
                      if (ud->SetFromFormula((yyvsp[0].formula))) YYABORT;
                      (yyval.variable) = g_registry.CurrentModule()->AddOrFindUnitDef(ud);
                    }
                }
#line 2715 "src/antimony.tab.cpp" /* yacc.c:1646  */
    break;


#line 2719 "src/antimony.tab.cpp" /* yacc.c:1646  */
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
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
        yyerror (yymsgp);
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
                      yytoken, &yylval);
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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
                  yystos[yystate], yyvsp);
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
  yyerror (YY_("memory exhausted"));
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
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
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
  return yyresult;
}
#line 430 "src/antimony.ypp" /* yacc.c:1906  */



void antimony_yyerror(char const *s)
{
  if (g_registry.GetError()=="") {
    g_registry.SetError(s);
  }
}

int antimony_yylex(void)
{
  char cc = 0;
  g_registry.input->get(cc);

  //If we're done with the file:
  if (g_registry.input->eof()) {
    if (g_registry.SwitchToPreviousFile()) {
      if (g_registry.CurrentModule()->Finalize()) {
        return ERROR;
      }
      return 0;
    }
    else {
      antimony_yylloc_first_line = antimony_yylloc_last_lines.back();
      antimony_yylloc_last_line = antimony_yylloc_last_lines.back();
      antimony_yylloc_last_lines.pop_back();
      return antimony_yylex();
    }
  }
  if (!g_registry.input->good()) {
    //Something else went wrong!
    g_registry.SetError("Unparseable content in line " + DoubleToString(antimony_yylloc_last_line) + ".");
    return ERROR;
  }

  antimony_yylloc_first_line = antimony_yylloc_last_line;

  // Skip white space.
  while ((cc == ' ' ||
         cc == '\t') &&
         !g_registry.input->eof()) {
    g_registry.input->get(cc);
  }
  if (g_registry.input->eof()) return antimony_yylex();
  // Skip carriage returns after '\':
  if (cc == '\\') {
    g_registry.input->get(cc);
    if (cc == '\r' || cc == '\n' || cc == ' ') {
      while ((cc == '\r' || cc == '\n' || cc == ' ') && !g_registry.input->eof()) {
        g_registry.input->get(cc);
      }
      ++antimony_yylloc_last_line;
      g_registry.input->unget();
      return antimony_yylex();
    }
    else {
      g_registry.input->unget();
      cc = '\\';
    }
 }

  // Parse words
  if (isalpha(cc) || cc == '_') {
    string word;
    while ((isalpha(cc) || isdigit(cc) || cc == '_') && !g_registry.input->eof()) {
      word += cc;
      g_registry.input->get(cc);
    }
    if (!g_registry.input->eof()) {
      g_registry.input->unget();
    }
    if (CaselessStrCmp(word, "module")) {
      return MODULE;
    }
    if (CaselessStrCmp(word, "model")) {
      return MODULE;
    }
    if (CaselessStrCmp(word, "end")) {
      return END;
    }
    if (CaselessStrCmp(word, "species")) {
      return SPECIES;
    }
    if (CaselessStrCmp(word, "formula")) {
      return FORMULA;
    }
    if (CaselessStrCmp(word, "reaction")) {
      return REACTION;
    }
    if (CaselessStrCmp(word, "DNA")) {
      return DNA;
    }
    if (CaselessStrCmp(word, "gene")) {
      return GENE;
    }
    if (CaselessStrCmp(word, "operator")) {
      return OPERATOR;
    }
    if (CaselessStrCmp(word, "compartment")) {
      return COMPARTMENT;
    }
    if (CaselessStrCmp(word, "has")) {
      return HASWORD;
    }
    if (CaselessStrCmp(word, "in")) {
      return INWORD;
    }
    if (CaselessStrCmp(word, "is")) {
      return IS;
    }
    if (CaselessStrCmp(word, "var")) {
      return VARWORD;
    }
    if (CaselessStrCmp(word, "const")) {
      return CONSTWORD;
    }
    if (CaselessStrCmp(word, "ext")) {
      return CONSTWORD;
    }
    if (CaselessStrCmp(word, "import")) {
      return IMPORT;
    }
    if (CaselessStrCmp(word, "event")) {
      return EVENT;
    }
    if (CaselessStrCmp(word, "at")) {
      return AT;
    }
    if (CaselessStrCmp(word, "after")) {
      return AFTER;
    }
    if (CaselessStrCmp(word, "function")) {
      return FUNCTIONWORD;
    }
    if (CaselessStrCmp(word, "unit")) {
      return UNITWORD;
    }
    if (CaselessStrCmp(word, "delete")) {
      return DELETEWORD;
    }
    
    if (g_registry.IsFunction(word) != NULL) {
      antimony_yylval.word = g_registry.IsFunction(word);
      return FUNCTION;
    }
    if (g_registry.IsConstant(word) != NULL) {
      antimony_yylval.word = g_registry.IsConstant(word);
      return CONSTANT;
    }
    //Otherwise, it's a user-defined variable:
    antimony_yylval.word = g_registry.AddWord(word);
    //cout << "\tRead word '" << word << "'." << endl;
    if (g_registry.IsModuleName(word)) {
      return MODNAME;
    }
    return ANTWORD;
  }

  // Parse numbers
  if (isdigit(cc) || (cc=='.' && isdigit(g_registry.input->peek()))) {
    double number;
    g_registry.input->unget();
    streampos numbegin = g_registry.input->tellg();
    *g_registry.input >> number;
    streampos numend = g_registry.input->tellg();
    if (g_registry.input->fail()) {
      //The gcc 4.4.3 parser fails if there's an 'e' after a number with no exponent.
      g_registry.input->clear();
      g_registry.input->seekg(numbegin);
      int numint;
      *g_registry.input >> numint;
      antimony_yylval.num = numint;
      if (g_registry.input->peek() == '.') {
        g_registry.input->get();
        *g_registry.input >> numint;
        double fraction = numint;
        while (fraction >= 1.0) {
          fraction = fraction/10;
        }
        antimony_yylval.num += fraction;
      }
      return NUM;
    }
    assert(g_registry.input->good());
    antimony_yylval.num = number;
    //However, pre-4.4.3 parsers would read the 'e' anyway, and we don't want it to, so unget the 'e'.
    g_registry.input->unget();
    if (!g_registry.input->good()) {
      //Sometimes you can't do this?  For some reason?  If this happens we'll assume there was no 'e'.
      g_registry.input->clear();
    }
    else {
      g_registry.input->get(cc);
      if (cc == 'e' || cc == 'E') {
        g_registry.input->unget();
      }
    }
    return NUM;
  }

  //Parse reaction dividers and dashes
  if (cc == '-') {
    g_registry.input->get(cc);
    if (cc == '-') {
      while ((cc == '-') && !g_registry.input->eof()) {
        g_registry.input->get(cc);
      }
      g_registry.input->unget();
      return DASHES;
    }
    g_registry.input->unget();
    cc = '-';
    return cc;
  }

  //Parse '=>'
  if (cc == '=') {
    g_registry.input->get(cc);
    if (cc == '>') {
      return BECOMESIRREV;
    }
    g_registry.input->unget();
    cc = '=';
    return cc;
  }

  //Skip comments:
  if (cc == '/') {
    g_registry.input->get(cc);
    if (cc == '/') {
      while (cc != '\n' && cc != '\r' && !g_registry.input->eof()) {
        g_registry.input->get(cc);
      }
      if (!g_registry.input->eof()) {
        g_registry.input->unget();
      }
      return antimony_yylex();
    }
    else if (cc == '*') {
      bool nextstar = false;
      g_registry.input->get(cc);
      while ((!g_registry.input->eof()) && !(nextstar && cc == '/')) {
        if (cc == '*') {
          nextstar = true;
        }
        else {
          nextstar = false;
        }
        g_registry.input->get(cc);
      }
      return antimony_yylex();
    }
    else {
      g_registry.input->unget();
      cc = '/';
    }
  }
  else if (cc == '#') {
      while (cc != '\n' && cc != '\r' && !g_registry.input->eof()) {
        g_registry.input->get(cc);
      }
      if (!g_registry.input->eof()) {
        g_registry.input->unget();
      }
      return antimony_yylex();
  }

  //Parse ellipses
  if (cc == '.') {
    char c1, c2;
    g_registry.input->get(c1);
    g_registry.input->get(c2);
    if (c1=='.' && c2=='.') {
      return ELLIPSES;
    }
    g_registry.input->unget();
    g_registry.input->unget();
  }

  //Parse text strings
  if (cc == '"') {
    string textstring;
    long ccount = 0;
    g_registry.input->get(cc);
    while (cc != '"' && cc != '\r' && cc != '\n' && !g_registry.input->eof()) {
      textstring += cc;
      ccount++;
      g_registry.input->get(cc);
    }
    if (cc == '\r' || cc == '\n' || g_registry.input->eof()) {
      for (; ccount > 0; ccount--) {
        g_registry.input->unget();
      }
      cc = '"';
    }
    else {
      antimony_yylval.word = g_registry.AddWord(textstring);
      return TEXTSTRING;
    }
  }

  //Parse '@'
  if (cc == '@') {
    return AT;
  }

  //This converts PC and Mac end-of-line characters to \n:
  if (cc == '\r') {
    g_registry.input->get(cc);
    if (cc != '\n') {
      g_registry.input->unget();
    }
    cc = '\n';
  }
  if (cc == '\n') {
    ++antimony_yylloc_last_line;
  }
  return cc;
}
