#include <iostream>
using namespace std;
int main()
{
    int n,i,a[7],temp,tem;
    cout<<"Enter the array:";
    cin>>n;
    cout<<"Enter the elements of array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to be insert:";
   int x;
   cin>>x;
   int pos;
   cout<<"Enter the position of element to be inserted:";
   cin>>pos;
    for(i=n-1;i>n-2;i--)
    {
        temp=a[i];
        a[i]=a[i-1];
        a[i+1]=temp;
        tem=a[pos-1];
        a[pos-1]=x;
        a[i-1]=tem;
        
        
    }
    for(i=0;i<n+1;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}