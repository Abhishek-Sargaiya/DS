#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,t,c=0,r,a,sum=0;
    cout<<"Enter the number:";
    cin>>n;
    t=n;
    a=n;
    while (n>0)
    {
        n=n/10;
        c++;
    }
    cout<<"No.of digits:"<<c<<endl;
    while (t>0)
    {
        r=t%10;
        t=t/10;
        sum = (sum + r*r*r);
      
    }
    
    
    if (a==sum)
    {
       cout<<"Armstrong"<<endl;
    }
    else
    {
        cout<<"Not Armstrong"<<endl;
    }
    return 0;
}