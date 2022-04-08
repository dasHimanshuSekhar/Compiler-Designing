#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool sA(char *, int);
bool sB(char *, int);
bool sC(char *, int);

int main(){
    char st[100];
    printf("enter string :");
    gets(st);
    int len = strlen(st);
    int i = 0;
    bool r;
    
    if(st[i] == '1'){
        i ++;
        r = sB(st, i);
    }
    else if(st[i] == '0'){
        r = 0;
    }
    if(r)
        printf("Accepted");
    else
        printf("Not Accepted");
}


bool sA(char *st, int i){
    if(st[i] == '0'){
        return 0;
    }
    else if(st[i] == '1'){
        if(i == (strlen(st) - 1))
            return 0;
        else{
            i ++;
            return sB(st, i);
        }
    }
}

bool sB(char *st, int i){
    if(st[i] == '0'){
        if(i == (strlen(st) - 1))
            return 1;
        else{
            i ++;
            return sC(st, i);
        }
    }
    else if(st[i] == '1'){
        if(i == (strlen(st) - 1))
            return 0;
        else{
            i ++;
            return sB(st, i);
        }
    }
}

bool sC(char *st, int i){
    if(st[i] == '0'){
        if(i == (strlen(st) - 1))
            return 1;
        else{
            i ++;
            return sC(st, i);
        }
    }
    else if(st[i] == '1'){
        if(i == (strlen(st) - 1))
            return 0;
        else{
            i ++;
            return sB(st, i);
        }
    }
}