/* main.c */


#include <stdio.h>
#include "token.h"

extern int yylex(); // returns the number of the token
extern char *yytext; // returns the lexeme of the input

int main (){

	token_t token = -1;
	while (token != EOL) {
		token = yylex();
		if (token == ERROR){
			printf("erro léxico: %s \n",yytext);
			}
		else if (token == NUMBER){
			printf("constante decimal: %s \n", yytext);
			}
		else{
			printf("código do token: %d \n",token);
			}
		}

}

