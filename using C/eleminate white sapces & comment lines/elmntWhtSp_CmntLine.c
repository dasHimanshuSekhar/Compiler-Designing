#include<stdio.h>

void comment_remover(FILE *f, FILE *f1){
    char c[3];
    c[0] = fgetc(f);
    while(c[0] != EOF){
        if(c[0] == '"'){
            fprintf(f1, "%c", c[0]);
            c[0] = fgetc(f);
            while(c[0] != '"'){
                fprintf(f1, "%c", c[0]);
                c[0] = fgetc(f);
            }
        }
        else{
            if(c[0] == '/'){
                c[1] = fgetc(f);
                if(c[1] == '/'){
                    while(c[1] != '\n'){
                        c[1] = fgetc(f);
                    }
                    fprintf(f1, "%c", c[1]);
                    c[0] = fgetc(f);
                }
                else if(c[1] == '*'){
                    while(1){
                        int flag = 0;
                        c[1] = fgetc(f);
                        if(c[1] == '*'){
                            c[2] = fgetc(f);
                            if(c[2] == '/'){
                                flag = 1;
                            }
                        }
                        if(flag == 1){
                            break;
                        }
                    }
                    c[0] = fgetc(f);
                }
                else{
                    fprintf(f1, "%c", c[0]);
                }
            }
        }
        fprintf(f1, "%c", c[0]);
        c[0] = fgetc(f);
    }
}

void wt_spaces_remover(FILE *f, FILE *f1){
    char c;
    c = fgetc(f);
    while(c != EOF){
        if(c == '"'){
            fprintf(f1, "%c", c);
            c = fgetc(f);
            while(c != '"'){
                fprintf(f1, "%c", c);
                c = fgetc(f);
            }
            fprintf(f1, "%c", c);
        }
        else if(c == ' ' || c == '\n'){
            printf(" ");
        }
        else{
            fprintf(f1, "%c", c);
        }
        c = fgetc(f);
    }
}

int main(){
    FILE *f, *f1;
    f = fopen("f.txt", "r");
    f1 = fopen("f1.txt", "w");

    comment_remover(f, f1);
    fclose(f);
    fclose(f1);

    f = fopen("f1.txt", "r");
    f1 = fopen("f.txt", "w");

    wt_spaces_remover(f, f1);
    fclose(f);
    fclose(f1);
}