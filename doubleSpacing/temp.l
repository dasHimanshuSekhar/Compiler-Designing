%{
	#include<stdio.h>
	FILE *fp;
	FILE *fp1;
%}
%%

[\n] {fprintf(fp1,"\n\n\n");}
. {fprintf(fp1,"%s", yytext);}

%% 

int yywrap(){} 
int main(){

	fp1 = fopen("file_1.txt", "w");
	fp = fopen("file.txt", "r");
	yyin = fp;
	yylex();
	fclose(fp);
	fclose(fp1);
	return 0;
}