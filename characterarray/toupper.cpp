#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cin>>str;
    transform(str.begin(), str.end(), str.begin(),::toupper);
    cout<<"To Uppercase"<<str<<endl;
    transform(str.begin(), str.end(), str.begin(),::tolower);
    cout<<"To Lowercase"<<str<<endl;
}