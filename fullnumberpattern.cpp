#include <iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the number of terms:";
    cin>>n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n-i; j++)
        {
            cout<<" ";
        }
        for (int  k = 1; k <=i ; k++)
        {
            for (int t = 1; t <=k ; t++)
            {
                if (k>t)
                {
                     cout<<i+1;
                  
                  
                }
                else
                cout<<i;
            }
            
            
        }
        cout<<endl;
    }
    return 0;
}   