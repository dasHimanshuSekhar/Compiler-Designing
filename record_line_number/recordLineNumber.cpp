using namespace std;
#include<iostream>
#include<fstream>

int main(){
    ifstream fin("code.cpp", ios :: in);
    ofstream fout("updatedCode.cpp", ios :: out);

    char c;
    int i = 1;
    fout << "   " << i << " ";
    c = fin.get();
    while(!fin.eof()){
        if(c == '\n'){
            i ++;
            if(i <= 9)
                fout << c << "   " << i << " ";
            else if(i <= 99)
                fout << c << "  " << i << " ";
            else
                fout << c << " " << i << " ";
            fin >> c;
        }
        fout << c;
        c = fin.get();
    }
    fin.close();
    fout.close();
}