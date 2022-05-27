%{
	#include<stdio.h>
	FILE *fp;
	FILE *fp1;
	int cntr = 0, nlflag = 0;
%}
%%
[\n] {
		fprintf(fp1, "}\n");
		nlflag = 1;
	 }

.*  {
		if(cntr == 0){
			fprintf(fp1, "{");
			cntr = 1;
		}
		else if(cntr == 1 && nlflag == 1){
			fprintf(fp1, "{");
			nlflag = 0;
		}
		fprintf(fp1, "%s", yytext);
	}

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