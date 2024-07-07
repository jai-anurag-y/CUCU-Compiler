to run the compiler follow these steps
	1. lex cucu.l
	2. yacc -d cucu.y
	3. gcc lex.yy.c y.tab.c -o cucu
	4. ./cucu sample1.cu
	
	
	
in cucu.l
tokens are generated using lex and regular expressions are written for each of them
all operators literals and reservered keywords are seperated
these are then later on sent to yacc file from grammar check
all the token are printed in Lexer.txt



in cucu.y
the tokens which are generated are cecked if they are in correct grammar
the grammar rules are in the bnf format
the flow of control is printed in Parser.txt


sample1.cu has correct syntax 
sample2.cu has wrong syntax


Thank You.
