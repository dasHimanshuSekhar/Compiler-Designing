%{
	#include<stdio.h>
	FILE *fp;
	FILE *fp1;
	int cntr = 1;
%}
%%

[c-zC-Z] {fprintf(fp1, "*");}
[ab \n] {fprintf(fp1, "%s", yytext);}

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