#include <iostream>
#include <cstring>
using namespace std;

int strspn_(char first[5], char second[5]){
    int i{};

    while(i<=5){
        int j{};
        bool okay=false;
        while(j<=5 && !okay){
            if(first[i]==second[j]){ //�᫨ ��� ᮢ������ � �ࠢ����� �४�頥���
                okay=true;
                break;
            }
            j++;
        }

        if (!okay){
            return i;
        }
        i++;
    }
    return -1;

}

int main(){
    char first[5]="";
    char second[5]="";
    int k{};
    cin >> first;
    cin >> second;
    k=strspn_(first, second);
    if(k==-1){
        cout << "��ப� ��������� ᮢ������";
    }
    else{
        cout << k;
    }

    return 0;
}
