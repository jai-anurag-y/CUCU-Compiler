/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "cucu.y"

	#include <stdio.h>
	#include <stdlib.h>
	int yylex(void);
	int yyerror(char* errormsg);
	extern FILE *yyin, *yyout, *lexout;
	

#line 80 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    MAIN = 258,                    /* MAIN  */
    RETURN = 259,                  /* RETURN  */
    INT = 260,                     /* INT  */
    MAIN_ARG = 261,                /* MAIN_ARG  */
    CHAR_PTR = 262,                /* CHAR_PTR  */
    IF = 263,                      /* IF  */
    ELSE = 264,                    /* ELSE  */
    WHILE = 265,                   /* WHILE  */
    T_RUE = 266,                   /* T_RUE  */
    F_ALSE = 267,                  /* F_ALSE  */
    O_CURL = 268,                  /* O_CURL  */
    E_CURL = 269,                  /* E_CURL  */
    COMMA = 270,                   /* COMMA  */
    SEMI = 271,                    /* SEMI  */
    NUM = 272,                     /* NUM  */
    ID = 273,                      /* ID  */
    STRING = 274,                  /* STRING  */
    ASSIGN = 275,                  /* ASSIGN  */
    AND = 276,                     /* AND  */
    OR = 277,                      /* OR  */
    EQ = 278,                      /* EQ  */
    NEQ = 279,                     /* NEQ  */
    LT = 280,                      /* LT  */
    LTE = 281,                     /* LTE  */
    GT = 282,                      /* GT  */
    GTE = 283,                     /* GTE  */
    ADD = 284,                     /* ADD  */
    SUB = 285,                     /* SUB  */
    MUL = 286,                     /* MUL  */
    DIV = 287,                     /* DIV  */
    O_PAREN = 288,                 /* O_PAREN  */
    E_PAREN = 289                  /* E_PAREN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define MAIN 258
#define RETURN 259
#define INT 260
#define MAIN_ARG 261
#define CHAR_PTR 262
#define IF 263
#define ELSE 264
#define WHILE 265
#define T_RUE 266
#define F_ALSE 267
#define O_CURL 268
#define E_CURL 269
#define COMMA 270
#define SEMI 271
#define NUM 272
#define ID 273
#define STRING 274
#define ASSIGN 275
#define AND 276
#define OR 277
#define EQ 278
#define NEQ 279
#define LT 280
#define LTE 281
#define GT 282
#define GTE 283
#define ADD 284
#define SUB 285
#define MUL 286
#define DIV 287
#define O_PAREN 288
#define E_PAREN 289

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "cucu.y"

    int num;
    char *str;

#line 206 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_MAIN = 3,                       /* MAIN  */
  YYSYMBOL_RETURN = 4,                     /* RETURN  */
  YYSYMBOL_INT = 5,                        /* INT  */
  YYSYMBOL_MAIN_ARG = 6,                   /* MAIN_ARG  */
  YYSYMBOL_CHAR_PTR = 7,                   /* CHAR_PTR  */
  YYSYMBOL_IF = 8,                         /* IF  */
  YYSYMBOL_ELSE = 9,                       /* ELSE  */
  YYSYMBOL_WHILE = 10,                     /* WHILE  */
  YYSYMBOL_T_RUE = 11,                     /* T_RUE  */
  YYSYMBOL_F_ALSE = 12,                    /* F_ALSE  */
  YYSYMBOL_O_CURL = 13,                    /* O_CURL  */
  YYSYMBOL_E_CURL = 14,                    /* E_CURL  */
  YYSYMBOL_COMMA = 15,                     /* COMMA  */
  YYSYMBOL_SEMI = 16,                      /* SEMI  */
  YYSYMBOL_NUM = 17,                       /* NUM  */
  YYSYMBOL_ID = 18,                        /* ID  */
  YYSYMBOL_STRING = 19,                    /* STRING  */
  YYSYMBOL_ASSIGN = 20,                    /* ASSIGN  */
  YYSYMBOL_AND = 21,                       /* AND  */
  YYSYMBOL_OR = 22,                        /* OR  */
  YYSYMBOL_EQ = 23,                        /* EQ  */
  YYSYMBOL_NEQ = 24,                       /* NEQ  */
  YYSYMBOL_LT = 25,                        /* LT  */
  YYSYMBOL_LTE = 26,                       /* LTE  */
  YYSYMBOL_GT = 27,                        /* GT  */
  YYSYMBOL_GTE = 28,                       /* GTE  */
  YYSYMBOL_ADD = 29,                       /* ADD  */
  YYSYMBOL_SUB = 30,                       /* SUB  */
  YYSYMBOL_MUL = 31,                       /* MUL  */
  YYSYMBOL_DIV = 32,                       /* DIV  */
  YYSYMBOL_O_PAREN = 33,                   /* O_PAREN  */
  YYSYMBOL_E_PAREN = 34,                   /* E_PAREN  */
  YYSYMBOL_YYACCEPT = 35,                  /* $accept  */
  YYSYMBOL_code = 36,                      /* code  */
  YYSYMBOL_variable_declaration = 37,      /* variable_declaration  */
  YYSYMBOL_function_declaration = 38,      /* function_declaration  */
  YYSYMBOL_function_definition = 39,       /* function_definition  */
  YYSYMBOL_func_args = 40,                 /* func_args  */
  YYSYMBOL_stmt = 41,                      /* stmt  */
  YYSYMBOL_assign_stmt = 42,               /* assign_stmt  */
  YYSYMBOL_return_stmt = 43,               /* return_stmt  */
  YYSYMBOL_func_call = 44,                 /* func_call  */
  YYSYMBOL_func_call_args = 45,            /* func_call_args  */
  YYSYMBOL_branch = 46,                    /* branch  */
  YYSYMBOL_loop = 47,                      /* loop  */
  YYSYMBOL_bool_expr = 48,                 /* bool_expr  */
  YYSYMBOL_expr = 49,                      /* expr  */
  YYSYMBOL_int = 50,                       /* int  */
  YYSYMBOL_char = 51,                      /* char  */
  YYSYMBOL_func_body = 52,                 /* func_body  */
  YYSYMBOL_stmt_list = 53,                 /* stmt_list  */
  YYSYMBOL_id = 54,                        /* id  */
  YYSYMBOL_number = 55,                    /* number  */
  YYSYMBOL_string = 56                     /* string  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  9
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   329

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  64
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  126

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   289


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int8 yyrline[] =
{
       0,    34,    34,    35,    36,    37,    38,    39,    41,    42,
      43,    44,    47,    48,    49,    50,    53,    54,    55,    56,
      59,    60,    61,    62,    67,    68,    69,    70,    71,    72,
      74,    75,    75,    76,    76,    78,    79,    82,    83,    86,
      88,    89,    90,    91,    92,    93,    94,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   108,   109,   110,   110,
     111,   111,   112,   113,   114
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "MAIN", "RETURN",
  "INT", "MAIN_ARG", "CHAR_PTR", "IF", "ELSE", "WHILE", "T_RUE", "F_ALSE",
  "O_CURL", "E_CURL", "COMMA", "SEMI", "NUM", "ID", "STRING", "ASSIGN",
  "AND", "OR", "EQ", "NEQ", "LT", "LTE", "GT", "GTE", "ADD", "SUB", "MUL",
  "DIV", "O_PAREN", "E_PAREN", "$accept", "code", "variable_declaration",
  "function_declaration", "function_definition", "func_args", "stmt",
  "assign_stmt", "return_stmt", "func_call", "func_call_args", "branch",
  "loop", "bool_expr", "expr", "int", "char", "func_body", "stmt_list",
  "id", "number", "string", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-44)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -1,   -44,   -44,     5,   -44,   -44,   -44,   -11,   -11,   -44,
     -44,   -44,   -44,   -44,    36,    89,   -44,    61,     4,   -44,
      -2,    14,   -44,    61,   207,   -44,   -44,   103,     1,   -11,
     -11,   -44,     9,   130,     7,   240,   -44,    61,    61,    61,
      61,    61,    61,    57,    -6,    10,   217,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,   267,   -11,   -11,   -44,    31,
     148,    51,    88,   -44,   -44,   -44,   166,   -44,    66,    66,
     -16,   -16,   -44,   -44,   -44,   224,    61,    61,   -44,   183,
      61,    71,    98,    59,   -44,   -44,    -1,    -1,   -44,   -44,
     -44,   277,   297,   289,   -44,   -44,   236,    70,    72,   258,
     -44,   -44,    61,    61,    61,    61,    61,    61,   200,   200,
     -44,   -44,    96,    61,    99,    99,   -44,   -44,   -44,   -44,
     114,   -44,   -44,   -44,   200,   -44
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,    56,    57,     0,     2,     3,     4,     0,     0,     1,
       5,     6,     7,    62,     0,     0,     8,     0,     0,    10,
       0,     0,    63,     0,     0,    55,    54,     0,     0,     0,
       0,    64,     0,     0,     0,     0,     9,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    13,    29,    59,
      24,    26,    25,    27,    28,     0,     0,     0,    17,    55,
       0,    20,    22,    11,    15,    19,     0,    47,    52,    53,
      48,    49,    50,    51,    31,     0,     0,     0,    61,     0,
       0,     0,     0,     0,    12,    16,     0,     0,    14,    18,
      32,     0,    46,     0,    58,    60,     0,     0,     0,    35,
      21,    23,     0,     0,     0,     0,     0,     0,     0,     0,
      30,    33,     0,     0,    42,    43,    40,    44,    41,    45,
      37,    39,    34,    36,     0,    38
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -44,   -44,    58,   129,   136,   -19,   -43,   -44,   -44,   -44,
      20,   -44,   -44,   -22,    -9,    42,    44,   -20,   -44,    -7,
     -44,   -44
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,    48,     5,     6,    28,    49,    50,    51,    52,
      98,    53,    54,    99,    92,    56,    57,    58,    79,    25,
      26,    32
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      14,    15,    34,    78,     1,     9,     2,    13,    24,     1,
       1,     2,     2,    65,    35,    41,    42,    31,    55,     1,
      59,     2,    61,    62,    55,    63,    59,    76,    68,    69,
      70,    71,    72,    73,    75,    60,    95,    55,    27,    59,
      85,    66,     7,    77,     8,     7,    89,     8,    33,    81,
      82,    55,    16,    59,    91,    93,    17,    55,     4,    59,
      29,    10,    30,    29,    83,    30,    86,   100,   101,    18,
      55,    96,    59,    74,    22,    13,    22,    13,    22,    13,
     114,   115,   116,   117,   118,   119,   111,    16,   120,   121,
      23,    17,    23,    97,    23,    39,    40,    41,    42,    55,
      55,    59,    59,    87,   125,    19,   112,    43,     1,    20,
       2,    44,   122,    45,    19,    55,    46,    59,    20,    47,
      22,    13,    21,   124,   104,   105,   106,   107,    29,    29,
      30,    30,    11,   123,    43,     1,    23,     2,    44,    12,
      45,     0,     0,    46,     0,     0,    64,    22,    13,     0,
       0,     0,    43,     1,     0,     2,    44,     0,    45,     0,
       0,    46,     0,    23,    84,    22,    13,     0,     0,     0,
      43,     1,     0,     2,    44,     0,    45,     0,     0,    46,
       0,    23,    88,    22,    13,     0,     0,    43,     1,     0,
       2,    44,     0,    45,     0,     0,     0,    94,     0,    23,
      22,    13,     0,     0,    43,     1,     0,     2,    44,     0,
      45,     0,     0,    46,     0,     0,    23,    22,    13,     0,
       0,    43,     1,    36,     2,    44,     0,    45,    37,    38,
       0,     0,     0,    23,    22,    13,    39,    40,    41,    42,
      90,     0,     0,     0,     0,    37,    38,     0,     0,     0,
      23,     0,   110,    39,    40,    41,    42,    37,    38,     0,
       0,    37,    38,     0,     0,    39,    40,    41,    42,    39,
      40,    41,    42,   113,    67,     0,     0,     0,     0,     0,
       0,   102,   103,   104,   105,   106,   107,    80,    37,    38,
       0,     0,     0,     0,     0,     0,    39,    40,    41,    42,
     102,   103,   104,   105,   106,   107,     0,     0,     0,     0,
       0,   108,   102,   103,   104,   105,   106,   107,    37,    38,
       0,     0,     0,   109,     0,     0,    39,    40,    41,    42
};

static const yytype_int8 yycheck[] =
{
       7,     8,    21,    46,     5,     0,     7,    18,    17,     5,
       5,     7,     7,    33,    23,    31,    32,    19,    27,     5,
      27,     7,    29,    30,    33,    16,    33,    33,    37,    38,
      39,    40,    41,    42,    43,    34,    79,    46,    34,    46,
      60,    34,     0,    33,     0,     3,    66,     3,    34,    56,
      57,    60,    16,    60,    76,    77,    20,    66,     0,    66,
      18,     3,    18,    21,    33,    21,    15,    86,    87,    33,
      79,    80,    79,    16,    17,    18,    17,    18,    17,    18,
     102,   103,   104,   105,   106,   107,    16,    16,   108,   109,
      33,    20,    33,    34,    33,    29,    30,    31,    32,   108,
     109,   108,   109,    15,   124,    16,    34,     4,     5,    20,
       7,     8,    16,    10,    16,   124,    13,   124,    20,    16,
      17,    18,    33,     9,    25,    26,    27,    28,    86,    87,
      86,    87,     3,   113,     4,     5,    33,     7,     8,     3,
      10,    -1,    -1,    13,    -1,    -1,    16,    17,    18,    -1,
      -1,    -1,     4,     5,    -1,     7,     8,    -1,    10,    -1,
      -1,    13,    -1,    33,    16,    17,    18,    -1,    -1,    -1,
       4,     5,    -1,     7,     8,    -1,    10,    -1,    -1,    13,
      -1,    33,    16,    17,    18,    -1,    -1,     4,     5,    -1,
       7,     8,    -1,    10,    -1,    -1,    -1,    14,    -1,    33,
      17,    18,    -1,    -1,     4,     5,    -1,     7,     8,    -1,
      10,    -1,    -1,    13,    -1,    -1,    33,    17,    18,    -1,
      -1,     4,     5,    16,     7,     8,    -1,    10,    21,    22,
      -1,    -1,    -1,    33,    17,    18,    29,    30,    31,    32,
      16,    -1,    -1,    -1,    -1,    21,    22,    -1,    -1,    -1,
      33,    -1,    16,    29,    30,    31,    32,    21,    22,    -1,
      -1,    21,    22,    -1,    -1,    29,    30,    31,    32,    29,
      30,    31,    32,    15,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    31,    32,
      23,    24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,
      -1,    34,    23,    24,    25,    26,    27,    28,    21,    22,
      -1,    -1,    -1,    34,    -1,    -1,    29,    30,    31,    32
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     7,    36,    37,    38,    39,    50,    51,     0,
      37,    38,    39,    18,    54,    54,    16,    20,    33,    16,
      20,    33,    17,    33,    49,    54,    55,    34,    40,    50,
      51,    19,    56,    34,    40,    49,    16,    21,    22,    29,
      30,    31,    32,     4,     8,    10,    13,    16,    37,    41,
      42,    43,    44,    46,    47,    49,    50,    51,    52,    54,
      34,    54,    54,    16,    16,    52,    34,    34,    49,    49,
      49,    49,    49,    49,    16,    49,    33,    33,    41,    53,
      20,    54,    54,    33,    16,    52,    15,    15,    16,    52,
      16,    48,    49,    48,    14,    41,    49,    34,    45,    48,
      40,    40,    23,    24,    25,    26,    27,    28,    34,    34,
      16,    16,    34,    15,    48,    48,    48,    48,    48,    48,
      52,    52,    16,    45,     9,    52
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    36,    36,    36,    36,    36,    37,    37,
      37,    37,    38,    38,    38,    38,    39,    39,    39,    39,
      40,    40,    40,    40,    41,    41,    41,    41,    41,    41,
      42,    43,    43,    44,    44,    45,    45,    46,    46,    47,
      48,    48,    48,    48,    48,    48,    48,    49,    49,    49,
      49,    49,    49,    49,    49,    49,    50,    51,    52,    52,
      53,    53,    54,    55,    56
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     2,     2,     3,     5,
       3,     5,     6,     5,     6,     5,     6,     5,     6,     5,
       2,     4,     2,     4,     1,     1,     1,     1,     1,     1,
       4,     2,     3,     4,     5,     1,     3,     5,     7,     5,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     1,     1,     3,     1,
       2,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* code: variable_declaration  */
#line 34 "cucu.y"
                                     {fprintf(yyout,"\n");}
#line 1359 "y.tab.c"
    break;

  case 3: /* code: function_declaration  */
#line 35 "cucu.y"
                                       {fprintf(yyout,"\n");}
#line 1365 "y.tab.c"
    break;

  case 4: /* code: function_definition  */
#line 36 "cucu.y"
                                       {fprintf(yyout,"\n");}
#line 1371 "y.tab.c"
    break;

  case 5: /* code: code variable_declaration  */
#line 37 "cucu.y"
                                     {fprintf(yyout,"\n");}
#line 1377 "y.tab.c"
    break;

  case 6: /* code: code function_declaration  */
#line 38 "cucu.y"
                                    {fprintf(yyout,"\n");}
#line 1383 "y.tab.c"
    break;

  case 7: /* code: code function_definition  */
#line 39 "cucu.y"
                                    {fprintf(yyout,"\n");}
#line 1389 "y.tab.c"
    break;

  case 9: /* variable_declaration: int id ASSIGN expr SEMI  */
#line 42 "cucu.y"
                                     {fprintf(yyout,"assign : =\n");}
#line 1395 "y.tab.c"
    break;

  case 11: /* variable_declaration: char id ASSIGN string SEMI  */
#line 44 "cucu.y"
                                     {fprintf(yyout,"assign : =\n");}
#line 1401 "y.tab.c"
    break;

  case 12: /* function_declaration: int id O_PAREN func_args E_PAREN SEMI  */
#line 47 "cucu.y"
                                                                       {fprintf(yyout,"Completed func declaration\n\n");}
#line 1407 "y.tab.c"
    break;

  case 13: /* function_declaration: int id O_PAREN E_PAREN SEMI  */
#line 48 "cucu.y"
                                                            {fprintf(yyout,"Completed func declaration\n\n");}
#line 1413 "y.tab.c"
    break;

  case 14: /* function_declaration: char id O_PAREN func_args E_PAREN SEMI  */
#line 49 "cucu.y"
                                                            {fprintf(yyout,"Completed func declaration\n\n");}
#line 1419 "y.tab.c"
    break;

  case 15: /* function_declaration: char id O_PAREN E_PAREN SEMI  */
#line 50 "cucu.y"
                                                            {fprintf(yyout,"Completed func declaration\n\n");}
#line 1425 "y.tab.c"
    break;

  case 16: /* function_definition: int id O_PAREN func_args E_PAREN func_body  */
#line 53 "cucu.y"
                                                                       {fprintf(yyout,"Completed func defined\n\n");}
#line 1431 "y.tab.c"
    break;

  case 17: /* function_definition: int id O_PAREN E_PAREN func_body  */
#line 54 "cucu.y"
                                                            {fprintf(yyout,"Completed func defined\n\n");}
#line 1437 "y.tab.c"
    break;

  case 18: /* function_definition: char id O_PAREN func_args E_PAREN func_body  */
#line 55 "cucu.y"
                                                            {fprintf(yyout,"Completed func defined\n\n");}
#line 1443 "y.tab.c"
    break;

  case 19: /* function_definition: char id O_PAREN E_PAREN func_body  */
#line 56 "cucu.y"
                                                            {fprintf(yyout,"Completed func defined\n\n");}
#line 1449 "y.tab.c"
    break;

  case 25: /* stmt: func_call  */
#line 68 "cucu.y"
                            {fprintf(yyout,"func is called \n\n");}
#line 1455 "y.tab.c"
    break;

  case 26: /* stmt: return_stmt  */
#line 69 "cucu.y"
                            {fprintf(yyout,"return stmt \n\n");}
#line 1461 "y.tab.c"
    break;

  case 27: /* stmt: branch  */
#line 70 "cucu.y"
                      {fprintf(yyout,"branch stmt \n\n");}
#line 1467 "y.tab.c"
    break;

  case 28: /* stmt: loop  */
#line 71 "cucu.y"
                            {fprintf(yyout,"while loop \n\n");}
#line 1473 "y.tab.c"
    break;

  case 40: /* bool_expr: bool_expr LT bool_expr  */
#line 88 "cucu.y"
                                                {fprintf(yyout,"op-s < \n");}
#line 1479 "y.tab.c"
    break;

  case 41: /* bool_expr: bool_expr GT bool_expr  */
#line 89 "cucu.y"
                                        {fprintf(yyout,"op- > \n");}
#line 1485 "y.tab.c"
    break;

  case 42: /* bool_expr: bool_expr EQ bool_expr  */
#line 90 "cucu.y"
                                       {fprintf(yyout,"op- == \n");}
#line 1491 "y.tab.c"
    break;

  case 43: /* bool_expr: bool_expr NEQ bool_expr  */
#line 91 "cucu.y"
                                    {fprintf(yyout,"op- != \n");}
#line 1497 "y.tab.c"
    break;

  case 44: /* bool_expr: bool_expr LTE bool_expr  */
#line 92 "cucu.y"
                                      {fprintf(yyout,"op- <= \n");}
#line 1503 "y.tab.c"
    break;

  case 45: /* bool_expr: bool_expr GTE bool_expr  */
#line 93 "cucu.y"
                                   {fprintf(yyout,"op- >= \n");}
#line 1509 "y.tab.c"
    break;

  case 48: /* expr: expr ADD expr  */
#line 97 "cucu.y"
                               {fprintf(yyout,"op- + \n");}
#line 1515 "y.tab.c"
    break;

  case 49: /* expr: expr SUB expr  */
#line 98 "cucu.y"
                              {fprintf(yyout,"op- - \n");}
#line 1521 "y.tab.c"
    break;

  case 50: /* expr: expr MUL expr  */
#line 99 "cucu.y"
                                {fprintf(yyout,"op- * \n");}
#line 1527 "y.tab.c"
    break;

  case 51: /* expr: expr DIV expr  */
#line 100 "cucu.y"
                                {fprintf(yyout,"op- / \n");}
#line 1533 "y.tab.c"
    break;

  case 52: /* expr: expr AND expr  */
#line 101 "cucu.y"
                                {fprintf(yyout,"op- && \n");}
#line 1539 "y.tab.c"
    break;

  case 53: /* expr: expr OR expr  */
#line 102 "cucu.y"
                                {fprintf(yyout,"op- || \n");}
#line 1545 "y.tab.c"
    break;

  case 56: /* int: INT  */
#line 108 "cucu.y"
                        {fprintf(yyout,"type-int\n");}
#line 1551 "y.tab.c"
    break;

  case 57: /* char: CHAR_PTR  */
#line 109 "cucu.y"
                        {fprintf(yyout,"type-char *\n");}
#line 1557 "y.tab.c"
    break;

  case 62: /* id: ID  */
#line 112 "cucu.y"
                        {fprintf(yyout,"Var-%s \n", (yyvsp[0].str));}
#line 1563 "y.tab.c"
    break;

  case 63: /* number: NUM  */
#line 113 "cucu.y"
                        {fprintf(yyout,"Value : %s \n", (yyvsp[0].str));}
#line 1569 "y.tab.c"
    break;

  case 64: /* string: STRING  */
#line 114 "cucu.y"
                        {fprintf(yyout,"Value : %s \n", (yyvsp[0].str));}
#line 1575 "y.tab.c"
    break;


#line 1579 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 118 "cucu.y"
	

int yyerror(char* errormsg)
{
	printf("Error : %s\n", errormsg);
	return 1;
}


int main (int argc, char **argv)
{
    yyin = fopen(argv[1], "r");
    lexout = fopen("Lexer.txt","w");
    yyout = fopen("Parser.txt","w");
    yyparse();
    return 0;
}

