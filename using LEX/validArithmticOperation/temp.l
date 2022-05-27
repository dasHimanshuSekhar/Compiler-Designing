%{
    #include<stdio.h>
    int a=0,b=0,c=0,d=0,ob=0,cb=0;
    int flaga=0,flagb=0,flagc=0,flagd=0;
%}

%%

[+] {a++;flaga=1;}
[-] {b++;flagb=1;}
[*] {c++;flagc=1;}
[/] {d++;flagd=1;}
[(] ob++;
[)] cb++;

%%

int yywrap(){} 
int main(){
    printf("Enter expression:");
    yylex();
    if(ob==cb)
        printf("\nvalid expression\n");
    else
        printf("invalid expression\n");
    if(flaga==1)
        printf("+\t");
    if (flagb==1)
        printf("-\t");
    if(flagc==1)
        printf("*\t");
    if(flagd==1)
        printf("/\n");
    return 0;
}