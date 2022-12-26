#include <iostream>
#include <string>
using namespace std;
int wordCount(string str){
    int c=0;
    int n=str.size();
    int i;
    for(  i=0;i<n;i++){
        if(str[i]==' ')
        c++;
    }
    return c;
}
int main (){

    string str;
    getline(cin,str);
    cout<<wordCount(str);
  
}