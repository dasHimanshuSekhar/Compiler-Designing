#include<stdio.h>

void mondayToFriday(FILE *f, FILE *f1){
    char c = fgetc(f);
    while(c != EOF){
        if(c == 'M' || c == 'm'){
            c = fgetc(f);
            if(c == 'O' || c == 'o'){
                c = fgetc(f);
                if(c == 'N' || c == 'n'){
                    c = fgetc(f);
                    if(c == 'D' || c == 'd'){
                        c = fgetc(f);
                        if(c == 'A' || c == 'a'){
                            c = fgetc(f);
                            if(c == 'Y' || c == 'y'){
                                c = fgetc(f);
                                fprintf(f1, "FRIDAY");
                            }
                            fprintf(f1, "%c", c);
                            c = fgetc(f);
                        }

                        fprintf(f1, "%c", c);
                        c = fgetc(f);
                    }
                    fprintf(f1, "%c", c);
                    c = fgetc(f);
                }
                fprintf(f1, "%c", c);
                c = fgetc(f);
            }
            fprintf(f1, "%c", c);
            c = fgetc(f);
        }
        fprintf(f1, "%c", c);
        c = fgetc(f);
    }
}

int main(){
    FILE *f, *f1;
    f = fopen("f.txt", "r");
    f1 = fopen("f1.txt", "w");

    mondayToFriday(f, f1);

    fclose(f);
    fclose(f1);
}