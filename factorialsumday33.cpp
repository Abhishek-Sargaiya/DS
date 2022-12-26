#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    float n,temp1,fact1,i,j,fact=1,temp,sum=1,x=6,sum1;
    cout<<"Enter the terms of the series:";
    cin>>n;
    for(i=1;i<=n;i++)
   {
    fact=fact*i;
   
    temp=pow(x,i);
   
    sum=sum+(temp/fact);
    sum1=sum;
    }
    cout<<sum1<<endl;
    return 0;
}