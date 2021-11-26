#include <iostream>
#include <cstring>
using namespace std;

int delete_(char s1[], char s2[]){
    char strnew[9]="";
    strcat(strnew, s1);
    strcat(strnew, s2);
    for(int i{}; i<5; i++){
        char current=strnew[i];
        for(int j=i+1; j<9; j++){
            if(strnew[j]==current){
                for(int y=j; y<8; y++){
                    strnew[y]=strnew[y+1];
                }
            }
        }
    }
    cout << strnew;

}
int main(){
    char st[5]="";
    char st2[4]="";

    cin.getline(st, 5);

    cin.getline(st2, 4);

    delete_(st, st2);
}
//Users/emc2/CLionProjects/untitled1/main.cpp