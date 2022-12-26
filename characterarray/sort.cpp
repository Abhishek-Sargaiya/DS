#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
/*{
    string s= "gpewujqwdzvnklerpamvb";
    sort(s.begin(), s.end());
    cout<< s<< endl;
    return 0;
}*/
{
    string str;
    cin>>str;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='a'&& str[i]<='z')
        str[i]-=32;
    }
    sort(str.begin(), str.end());
    cout << str;
}
