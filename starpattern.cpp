#include <iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cin>>n;
    int t=n;
    for ( i = 1; i <= n; i++)
    {
        for(j=t-1;j>=1;j--)
        {
            cout<<" ";
        }
        t--;
        for(k=0;k<(2*i-1);k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}