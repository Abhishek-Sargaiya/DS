#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,i;
    float sum=0,fact=1,temp,x=1;
    cout<<"Enter the terms of the series:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*(2*i-1);
      if(i%2 == 0)
      {
      temp=pow(-x,(2*i-1));
      }
      else
      {
        temp=pow(x,(2*i-1));
      }
      
      sum=sum+(temp/fact);
    }
    cout<<sum<<endl;
    return 0;
}