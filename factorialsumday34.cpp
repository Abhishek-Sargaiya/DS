#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,i;
    float sum=1,fact=1,temp,x=6;
    cout<<"Enter the terms of the series:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
      fact=fact*i;
      if(i%2 != 0)
      {
      temp=pow(-x,i);
      }
      else
      {
        temp=pow(x,i);
      }
      sum=sum+(temp/fact);
    }
    cout<<sum<<endl;
    return 0;
}