#include <iostream>
#include <math.h>
using namespace std;
void Armstrong(int n)
{
    int a,b,sum=0,c=0;
    int t=n;
    int s=n;
    while (n>0)
    {
        n=n/10;
        c++;
    }
    cout<<"no. of digits:"<<c;
    while (t>0)
    {
        a=t%10;
        t=t/10;
        b=a*a*a;
        sum=sum+b;
    }
    if(sum==s)
    {
        cout<<"\nArmstrong";
    }
    else
    {
        cout<<"\nnot Armstrong";
    }
}
int main()
{
    int n;
    cin>>n;
   Armstrong(n);
    return 0;
}