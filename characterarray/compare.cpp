#include <iostream>
#include <string>
using namespace std;
int compare(string str1, string str2){
    int c=0;
    if(str1.size()==str2.size()){

        for(int i =0;i<str1.size() && i<str2.size();i++){

            if(str1[i]==str2[i])
            c++;
        }

        if(c==str1.size())
        cout<<"Both the strings are same"<<endl;
    }

    else
    cout<<"both the strings are not same";
}
int main(){

    string str1;
    getline(cin,str1);
    string str2;
    getline(cin,str2);
    compare(str1,str2);
}