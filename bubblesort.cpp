#include<iostream>
using namespace std;
int main()
{
    int n,i,j,p,s,temp,a[100];
    cout<<"Enter the terms of array:";
    cin>>n;
    cout<<"Enter the elements of array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(p=0;p<n-1;p++)
    {
        for(s=0;s<n-p-1;s++)
        {
            if(a[s]>a[s+1])
           {
             temp=a[s];
             a[s]=a[s+1];
             a[s+1]=temp;
           }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}