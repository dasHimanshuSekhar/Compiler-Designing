%{
	#include<stdio.h>
	FILE *fp;
	FILE *fp1;
	int cntr = 1;
%}
%%

[a-zA-Z0-9\n]* {if(cntr){fprintf(fp1, "{%s}", yytext);  cntr = 0;}
				else{fprintf(fp1, "%s", yytext);}}
" " {fprintf(fp1, "%s", yytext);}

%% 

int yywrap(){} 
int main(){

	fp1 = fopen("f1.txt", "w");
	fp = fopen("f.txt", "r");
	yyin = fp;
	yylex();
	fclose(fp);
	fclose(fp1);
	return 0;
}