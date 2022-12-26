#include <iostream>
using namespace std;
void ans(int n)
{
    int i,j;
    for ( i = 1; i <=n; i++)
    {
        for ( j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        cout<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    ans(n);    
    return 0;
}