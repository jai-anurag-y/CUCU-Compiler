%{
	#include <stdio.h>
	#include <stdlib.h>
	int yylex(void);
	int yyerror(char* errormsg);
	extern FILE *yyin, *yyout, *lexout;
	
%}

%token MAIN RETURN INT MAIN_ARG CHAR_PTR IF ELSE WHILE T_RUE F_ALSE
%token O_CURL E_CURL COMMA SEMI

%union{
    int num;
    char *str;
}
%token <str> NUM
%token <str> ID
%token <str> STRING


%left ASSIGN
%left AND OR
%left EQ NEQ
%left LT LTE GT GTE
%left ADD SUB
%left MUL DIV
%left O_PAREN E_PAREN

%%



code : variable_declaration          {fprintf(yyout,"\n");}
    | function_declaration             {fprintf(yyout,"\n");}
    | function_definition              {fprintf(yyout,"\n");}
    | code variable_declaration      {fprintf(yyout,"\n");}
    | code function_declaration     {fprintf(yyout,"\n");}
    | code function_definition      {fprintf(yyout,"\n");}
    ;
variable_declaration : int id SEMI  
    | int id ASSIGN expr SEMI        {fprintf(yyout,"assign : =\n");}
    | char id SEMI               
    | char id ASSIGN string SEMI     {fprintf(yyout,"assign : =\n");}
;

function_declaration : int id O_PAREN func_args E_PAREN SEMI           {fprintf(yyout,"Completed func declaration\n\n");}
    | int id O_PAREN E_PAREN SEMI                           {fprintf(yyout,"Completed func declaration\n\n");}
    | char id O_PAREN func_args E_PAREN SEMI                {fprintf(yyout,"Completed func declaration\n\n");}
    | char id O_PAREN E_PAREN SEMI                          {fprintf(yyout,"Completed func declaration\n\n");}
;

function_definition : int id O_PAREN func_args E_PAREN func_body       {fprintf(yyout,"Completed func defined\n\n");}
    | int id O_PAREN E_PAREN func_body                      {fprintf(yyout,"Completed func defined\n\n");}
    | char id O_PAREN func_args E_PAREN func_body           {fprintf(yyout,"Completed func defined\n\n");}
    | char id O_PAREN E_PAREN func_body                     {fprintf(yyout,"Completed func defined\n\n");}
;

func_args : int id                   
    | int id COMMA func_args
    | char id                        
    | char id COMMA func_args
;



stmt : assign_stmt
    | func_call             {fprintf(yyout,"func is called \n\n");}
    | return_stmt           {fprintf(yyout,"return stmt \n\n");}
    | branch          {fprintf(yyout,"branch stmt \n\n");}
    | loop                  {fprintf(yyout,"while loop \n\n");}
    | variable_declaration
;
assign_stmt : expr ASSIGN expr SEMI;
return_stmt : RETURN SEMI | RETURN expr SEMI;
func_call : id O_PAREN E_PAREN SEMI | id O_PAREN func_call_args E_PAREN SEMI;

func_call_args : bool_expr
		| bool_expr COMMA func_call_args
;

branch : IF O_PAREN bool_expr E_PAREN func_body
     	| IF O_PAREN bool_expr E_PAREN func_body ELSE func_body
;

loop : WHILE O_PAREN bool_expr E_PAREN func_body;

bool_expr : bool_expr LT bool_expr              {fprintf(yyout,"op-s < \n");}
    | bool_expr GT bool_expr            {fprintf(yyout,"op- > \n");}
    | bool_expr EQ bool_expr           {fprintf(yyout,"op- == \n");}
    | bool_expr NEQ bool_expr       {fprintf(yyout,"op- != \n");}
    | bool_expr LTE bool_expr         {fprintf(yyout,"op- <= \n");}
    | bool_expr GTE bool_expr      {fprintf(yyout,"op- >= \n");}
    | expr
;
expr : O_PAREN expr E_PAREN
    | expr ADD expr            {fprintf(yyout,"op- + \n");}
    | expr SUB expr           {fprintf(yyout,"op- - \n");}
    | expr MUL expr             {fprintf(yyout,"op- * \n");}
    | expr DIV expr             {fprintf(yyout,"op- / \n");}
    | expr AND expr		{fprintf(yyout,"op- && \n");}
    | expr OR expr		{fprintf(yyout,"op- || \n");}
    | number                    
    | id
;


int : INT       	{fprintf(yyout,"type-int\n");};
char : CHAR_PTR    	{fprintf(yyout,"type-char *\n");};
func_body : O_CURL stmt_list E_CURL | stmt;
stmt_list : stmt_list stmt | stmt;
id : ID      		{fprintf(yyout,"Var-%s \n", $1);};
number : NUM    	{fprintf(yyout,"Value : %s \n", $1);};
string : STRING		{fprintf(yyout,"Value : %s \n", $1);};	
	
	
 
%%	

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

