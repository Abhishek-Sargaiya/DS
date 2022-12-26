#include <iostream>
using namespace std;
int main()
{
    int n,i,fact=1,sum=0,sum1;
    cout<<"Enter the terms of the series:";
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        fact=fact*i;
        sum=sum+fact;
        sum1=sum;
    }
    cout<<sum1<<endl;
    return 0;
}