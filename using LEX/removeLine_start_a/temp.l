%{
	#include<stdio.h>
	FILE *fp;
	FILE *fp1;
	int cntr = 1;
%}
%%

(A)[A-Za-z]* {
		if(cntr){
			fprintf(fp1, "\n");
			cntr --;}
	}
("\nA")[A-Za-z]* {fprintf(fp1, "\n");}
.* {fprintf(fp1, "%s", yytext);}
"\n" {fprintf(fp1, "\n");}

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