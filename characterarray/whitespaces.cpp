#include <bits\stdc++.h>
using namespace std;

int main(){

    string str;
    getline(cin,str);
    int c=0;
    int n= str.size();

for (int i = 0; str[i]; i++){
        if (str[i] != ' ')
        str[c++] = str[i];
    }   
        str[c] > '\0';
    cout<<str;
}