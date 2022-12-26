#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,i;
    float sum=1,fact=1,temp,x=1;
    cout<<"Enter the terms of the series:";
    cin>>n;
       for(i=2;i<=n;i++)
    {
        fact=fact*(2*i - 2);
      if(i%2 != 0)
      {
      temp=pow(x,(2*i-2));
      }
      else
      {
        temp=pow(-x,(2*i-2));
      }
      
      sum=sum+(temp/fact);
    }
    
    cout<<sum<<endl;
    return 0;
}