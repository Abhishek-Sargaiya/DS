#include <iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for ( i = n; i >=1 ; i--)
    {
        for (j = 1; j <=n ; j++)
        {
            if (j<=i)
            {
                cout<<j<<" ";
            }
            else if (j>=n-i)
            {
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    return 0;
}