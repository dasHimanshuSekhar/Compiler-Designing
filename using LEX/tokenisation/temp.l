%{
    #include<stdio.h>
    FILE *f, *f1;
%}

%%

(#include<)[a-z]*(.h>) {fprintf(f1,"Preprocessor Directives - %s\n", yytext);}
("int main()") {fprintf(f1, "main funtion - %s\n", yytext);}
"{"|"}"|"("|")"|"["|"]"|";"|","|"."|" " {fprintf(f1, "delimeter - %s\n", yytext);}
[0-9] {fprintf(f1, "constant - %s\n", yytext);}
auto|break|case|char|const|continue|default|do|double|else|enum|extern|float|for|goto|if|int|long|register|return|short|signed|sizeof|static|struct|switch|typedef|union|unsigned|void|volatile|while {fprintf(f1, "keywords - %s\n", yytext);}

%%
int yywrap(){}

int main(){
    f = fopen("f.txt", "r");
    f1 = fopen("f1.txt", "w");
    yyin = f;
    yylex();
    fclose(f);
    return 0;
}