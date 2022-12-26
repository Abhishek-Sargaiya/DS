#include <iostream>
#include <string>
using namespace stdl;
int main()
{
    string str= "qroascngbk";
    for(int i=0;i<str.size();i++)
    {
        if (str[i]>='a' && str[i]<='z')
            str[i]-=32;    
    }
    cout <<str;
    return 0;
}
