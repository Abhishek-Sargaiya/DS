#include <iostream>
using namespace std;
int main()
{
    int n,i,j,mul=1,c=0,k=100;
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
            mul=mul*a[j]; 
            cout<<mul<<endl;
            if (mul>=k)
            {
               c=c+1;
            }
                
        }
        
    }
    cout<<c<<endl;
    return 0;
}