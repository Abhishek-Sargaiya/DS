#include <iostream>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    for ( i = 2; i < n; i++)
    {
        if (n%i==0)
        {
            cout<<"non prime"<<endl;
            break;
        }
        
    }
    if (n==i)
    {
        cout<<"prime"<<endl;
    }
    return 0;
}