/* recognize tokens for the calculator */

%option noyywrap yylineno
%{
#include "token.h"

%}

%%
"\n"	{ return EOL;}
[ \t]	{ /*Skip, do nothing*/}
[0-9]+	{ return NUMBER;}
"+"	{ return PLUS;}
"-"	{ return MINUS;}
"*"	{ return TIMES;}
"/"	{ return DIV;}
.       { return ERROR; }
%%


