#include <iostream>
using namespace std;
int main()
{
    int n,i,j,a[100];
    cout<<"Enter the terms of array:";
    cin>>n;
    cout<<"Enter the elements of array:";
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n;i++)
    {
    int current=a[i];
     j=i-1;
    while (a[j]>current && j>=0)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=current;
    }
    for(i=1;i<=n;i++)
    {
        cout<<a[i]<<" ";
    }cout<<endl;
   
}