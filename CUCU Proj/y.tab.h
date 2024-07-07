/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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

#line 140 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
