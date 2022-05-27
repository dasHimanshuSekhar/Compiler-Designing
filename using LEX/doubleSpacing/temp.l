%{
	#include<stdio.h>
	FILE *fp;
	FILE *fp1;
%}
%%

.* {fprintf(fp1,"%s", yytext);}
[\n] {fprintf(fp1,"\n\n\n");}

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