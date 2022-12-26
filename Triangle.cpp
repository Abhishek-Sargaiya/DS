/*#include <iostream> 
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the sides:"<<endl;
    cin>>a>>b>>c;
    if (a==b&&b==c)
    {
        cout<<"Triangle is equilateral"<<endl;
    }
    else if (a==b||b==c||c==a)
    {
        cout<<"Triangle is isosceles"<<endl;
    }
    else
    {
        cout<<"Triangle is scalen"<<endl;
    }    
    return 0;
}*/
#include <iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>i;
    for ( i = 1; i <= n ; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            if (j<=n-i)
            {
                
            
            
                cout<<" ";
            }
        }
        for ( j = 1; j <= i; j++)
        {
            cout<<j;
        }
        
        cout<<endl;
    }
    return 0;
    }