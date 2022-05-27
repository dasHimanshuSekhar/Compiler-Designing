#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool sA(char *, int);
bool sB(char *, int);
bool sC(char *, int);
bool sD(char *, int);
bool sE(char *, int);
bool sF(char *, int);
bool sG(char *, int);
bool sH(char *, int);
bool sI(char *, int);

int main(){
    char st[100];
    printf("enter string :");
    gets(st);
    int i = 0;
    bool r;
    r = sA(st, i);

    if(r)
        printf("Accepted");
    else
        printf("Not Accepted");
}


bool sA(char *st, int i){
    if(st[i] == 'a'){
        if(i == (strlen(st) - 1))
            return 1;
        else{
            i ++;
            return sD(st, i);
        }
    }
    else if(st[i] == 'b'){
        if(i == (strlen(st) - 1))
            return 0;
        else{
            i ++;
            return sB(st, i);
        }
    }
}

bool sB(char *st, int i){
    if(st[i] == 'a'){
        if(i == (strlen(st) - 1))
            return 0;
        else{
            i ++;
            return sE(st, i);
        }
    }
    else if(st[i] == 'b'){
        if(i == (strlen(st) - 1))
            return 0;
        else{
            i ++;
            return sC(st, i);
        }
    }
}

bool sC(char *st, int i){
    if(st[i] == 'a'){
        if(i == (strlen(st) - 1))
            return 0;
        else{
            i ++;
            return sF(st, i);
        }
    }
    else if(st[i] == 'b'){
        if(i == (strlen(st) - 1))
            return 0;
        else{
            i ++;
            return sA(st, i);
        }
    }
}

bool sD(char *st, int i){
    if(st[i] == 'a'){
        if(i == (strlen(st) - 1))
            return 1;
        else{
            i ++;
            return sG(st, i);
        }
    }
    else if(st[i] == 'b'){
        if(i == (strlen(st) - 1))
            return 0;
        else{
            i ++;
            return sE(st, i);
        }
    }
}

bool sE(char *st, int i){
    if(st[i] == 'a'){
        if(i == (strlen(st) - 1))
            return 1;
        else{
            i ++;
            return sH(st, i);
        }
    }
    else if(st[i] == 'b'){
        if(i == (strlen(st) - 1))
            return 0;
        else{
            i ++;
            return sF(st, i);
        }
    }
}

bool sF(char *st, int i){
    if(st[i] == 'a'){
        if(i == (strlen(st) - 1))
            return 0;
        else{
            i ++;
            return sI(st, i);
        }
    }
    else if(st[i] == 'b'){
        if(i == (strlen(st) - 1))
            return 1;
        else{
            i ++;
            return sD(st, i);
        }
    }
}

bool sG(char *st, int i){
    if(st[i] == 'a'){
        if(i == (strlen(st) - 1))
            return 0;
        else{
            i ++;
            return sA(st, i);
        }
    }
    else if(st[i] == 'b'){
        if(i == (strlen(st) - 1))
            return 1;
        else{
            i ++;
            return sH(st, i);
        }
    }
}

bool sH(char *st, int i){
    if(st[i] == 'a'){
        if(i == (strlen(st) - 1))
            return 0;
        else{
            i ++;
            return sB(st, i);
        }
    }
    else if(st[i] == 'b'){
        if(i == (strlen(st) - 1))
            return 0;
        else{
            i ++;
            return sI(st, i);
        }
    }
}

bool sI(char *st, int i){
    if(st[i] == 'a'){
        if(i == (strlen(st) - 1))
            return 0;
        else{
            i ++;
            return sC(st, i);
        }
    }
    else if(st[i] == 'b'){
        if(i == (strlen(st) - 1))
            return 1;
        else{
            i ++;
            return sG(st, i);
        }
    }
}