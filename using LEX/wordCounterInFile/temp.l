%{
	#include<stdio.h>
	FILE *fp;
	int cntr = 0;
%}
%%

[A-Za-z]+ {cntr ++;}

%% 

int yywrap(){} 
int main(){

	fp = fopen("f.txt", "r");
	yyin = fp;
	yylex();
	printf("\nTotal number of words present in the file is : %d\n", cntr);
	fclose(fp);
	return 0;
}