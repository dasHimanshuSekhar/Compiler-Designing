%{
	#include<stdio.h>
	FILE *fp;
	FILE *fp1;
	int i = 2;
%}
%%

[\n] {fprintf(fp1,"\n%d ", i);
	 i ++;}

.* {
		if(i == 2){
			fprintf(fp1,"1 ");
		}
		fprintf(fp1,"%s", yytext);
	}

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