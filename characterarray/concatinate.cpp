#include <iostream>
#include <string>
using namespace std;
int concatinate(string s1, string s2){

    string s3;
    s3 = s1.append(s2);
    cout<<s3<<endl;
}
int main()
{
    string s1;
    cout<<"Enter the string 1: ";
    getline(cin,s1);
    string s2;
    cout<<"Enter the string 2: ";
    getline(cin,s2);
   concatinate(s1,s2);
    
}