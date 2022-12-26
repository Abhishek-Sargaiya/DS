#include <iostream>
using namespace std;
int main()
{
    int n,fact=1,sum=0,i,temp;
    cout<<"Enter the terms of series:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=(fact*i);
        
        temp=fact/i;
        sum=sum+temp;
    }
    cout<<sum<<endl;
    return 0;
}