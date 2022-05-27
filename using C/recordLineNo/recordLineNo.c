#include<stdio.h>

int main(){
    FILE *f, *f1;
    int line = 2;

    f = fopen("f.txt", "r");
    f1 = fopen("f1.txt", "w");

    char c = fgetc(f);
    fprintf(f1, "1   ");
    while(c != EOF){
        if(c == '\n'){
            if(line <= 9)
                fprintf(f1, "\n%d   ", line);
            else if(line <= 99)
                fprintf(f1, "\n%d   ", line);
            else
                fprintf(f1, "\n%d   ", line);
            line ++;
            c = fgetc(f);
        }
        fprintf(f1, "%c", c);
        c = fgetc(f);
    }
    fclose(f);
    fclose(f1);
    return 0;
}