#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    int n,i;
    float sum=0,fact=1,temp;
    cout<<"Enter the terms of the series:";
    cin>>n;
 for(i=1;i<=n;i++)
    {
        fact=fact*(2*i - 1);
        
      if(i%2 == 0)
      {
      temp=-i;
      }
      else
      {
        temp=i;
      }
      sum=sum+(temp/fact);
    }
  
    cout<<sum<<endl;
    return 0;
}