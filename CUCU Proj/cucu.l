%{
	#include "y.tab.h"
	FILE *lexout;
%}

%%

"/*"[^("*/")]*"*/" ;


"return"	{fprintf(lexout, "KEYWORD : %s\n", yytext);return RETURN;}
"int" 		{fprintf(lexout, "TYPE : %s\n", yytext);return INT;}
"char **"	{fprintf(lexout, "TYPE : %s\n", yytext);return MAIN_ARG;}
"char *" 	{fprintf(lexout, "TYPE : %s\n", yytext);return CHAR_PTR;}
"if"		{fprintf(lexout, "KEYWORD : %s\n", yytext);return IF;}
"else"		{fprintf(lexout, "KEYWORD : %s\n", yytext);return ELSE;}
"while"		{fprintf(lexout, "KEYWORD : %s\n", yytext);return WHILE;}
"true"		{fprintf(lexout, "KEYWORD : %s\n", yytext);return T_RUE;}
"false"		{fprintf(lexout, "KEYWORD : %s\n", yytext);return F_ALSE;}


"("		{fprintf(lexout, "O_PAREN : %s\n", yytext);return O_PAREN;}
")"		{fprintf(lexout, "E_PAREN : %s\n", yytext);return E_PAREN;}
"{"		{fprintf(lexout, "O_CURL : %s\n", yytext);return O_CURL;}
"}"		{fprintf(lexout, "E_CURL : %s\n", yytext);return E_CURL;}
","		{fprintf(lexout, "COMMA : %s\n", yytext);return COMMA;}
";"		{fprintf(lexout, "SEMI : %s\n", yytext);return SEMI;}


"=="		{fprintf(lexout, "EQUALS : %s\n", yytext);return EQ;}
"!="		{fprintf(lexout, "NOT_EQUALS : %s\n", yytext);return NEQ;}
">"		{fprintf(lexout, "LESS_THAN : %s\n", yytext);return LT;}
"<"		{fprintf(lexout, "GREATER_THAN : %s\n", yytext);return GT;}
">="		{fprintf(lexout, "GREATER_EQ_TO : %s\n", yytext);return GTE;}
"<="		{fprintf(lexout, "LESSER_EQ_TO : %s\n", yytext);return LTE;}
"="		{fprintf(lexout, "ASSIGN : %s\n", yytext);return ASSIGN;}
"+"		{fprintf(lexout, "PLUS : %s\n", yytext);return ADD;}
"-"		{fprintf(lexout, "MINUS : %s\n", yytext);return SUB;}
"*"		{fprintf(lexout, "MUL : %s\n", yytext);return MUL;}
"/"		{fprintf(lexout, "DIV : %s\n", yytext);return DIV;}
"&&"		{fprintf(lexout, "AND : %s\n", yytext);return AND;}
"||"		{fprintf(lexout, "AND : %s\n", yytext);return OR;}



[0-9]+		{fprintf(lexout, "NUM : %s\n",yytext); yylval.str = strdup(yytext); return NUM;}
\".*\"		{fprintf(lexout, "STRING : %s\n", yytext);yylval.str = strdup(yytext); return STRING;}
[a-zA-Z][a-zA-Z0-9_]*(\[([0-9]+)\])?	{fprintf(lexout, "ID : %s\n", yytext);yylval.str = strdup(yytext); return ID;}
[ \t]+ 		   ;
[\n] 		   ;
. 		{return yytext[0];}


%%

int yywrap(void)
{
	return 1;
}





