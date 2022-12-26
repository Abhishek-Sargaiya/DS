#include <iostream>
#include <string.h>
using namespace std;

void reverse(string str){

for(int i=str.size();i>=0;i--){
    cout<<str[i];
}
}
int main(){

    string str;
    cout<<"Enter the string: ";
    cin>>str;

    reverse(str);
     
}