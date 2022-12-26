#include <iostream>
using namespace std;
int main()
{
    int n,i,j,sum=0;
    cin>>n;
    int *a=new int[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }    
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            sum=sum+a[j];
            cout<<sum<<endl;
        }    
    }
    cout<<sum<<endl;
    return 0;
}