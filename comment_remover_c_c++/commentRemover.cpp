using namespace std;
#include<iostream>
#include<fstream>

int main(){
    ifstream fin("commentedCode.cpp", ios :: in);
    ofstream fout("cleanCode.cpp", ios :: out);

    char c[2];
    int i = 1;
    c[0] = fin.get();
    while(!fin.eof()){
        if(c[0] == '/'){
            c[1] = fin.get();
            if(c[1] == '/')
                while(c[0] != '\n')
                    c[0] = fin.get();
            else if(c[1] == '*'){
                c[0] = c[1];
                while(c[0] != '/')
                    c[0] = fin.get();
                c[0] = fin.get();
            }
            else{
                fout << c[0] << c[1];
                c[0] = fin.get();
            }
        }
        fout << c[0];
        c[0] = fin.get();
    }
    fin.close();
    fout.close();
}