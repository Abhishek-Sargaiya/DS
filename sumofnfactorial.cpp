#include <iostream>
using namespace std;
int main()
{
    int n,fact=1,sum=0,;
    cout<<"Enter the terms of series:";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+fact;
    }
    cout<<sum<<endl;
    return 0;
}