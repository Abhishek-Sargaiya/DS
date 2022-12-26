#include <iostream>
using namespace std;
int main()
{
    int n , sum=0 , sum1= 0;
    cout<<"Enter the terms of the series: ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum = i*(i+1)*(i+2);
       sum1=sum1+sum;
    }
    cout<<sum1<<endl;
    return 0;
}