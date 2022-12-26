#include <iostream>
using namespace std;
int printunion(int a[], int b[], int n, int m)
{
    int i=0,j=0;
    while (i<n && j<m)
    {
        if (a[i]<b[j])
        {
            cout<<a[i]<<" ";
            i++;
        }
        else if (a[i]>b[j])
        {
            cout<<b[j]<<" ";
            j++;
        }
        else
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
    }
    while (i<n)
    {
        cout<<a[i]<<" ";
        i++;
    }
    while (j<m)
    {
        cout<<b[j]<<" ";
        j++;
    }
    
}
int main()
{
    int a[100],b[100],c[100],i,j,n,m,k;
    cout<<"Enter the number of array A:";
    cin>>n;
    cout<<"Enter the number of array B:";
    cin>>m;
    cout<<"Enter the elememts of array A:";
    for ( i = 0; i < n; i++)
    {
        cin>> a[i] ;
    }
    cout<<"Enter the elements of array B:";
    for ( j = 0; j < m; j++)
    {
        cin>> b[j] ;
    }
    printunion(a,b,n,m);
    return 0 ;
}