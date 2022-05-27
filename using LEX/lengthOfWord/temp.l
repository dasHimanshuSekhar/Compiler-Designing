%{
	#include<stdio.h>
    #include<string.h>
	FILE *fp;
	FILE *fp1;
	int cntr = 1;
%}
%%

[a-zA-Z1-9]*  {fprintf(fp1, "%s = %d\n", yytext, strlen(yytext));}

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