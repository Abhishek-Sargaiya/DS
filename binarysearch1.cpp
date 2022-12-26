#include <iostream>
using namespace std;
int main()
{
    int n,a[n],i,ele,s=0;
    int e=n;
    cout<<"enter the array:";
    cin>>n;
    cout<<"enter the elements of array:";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the searched element:";
    cin>>ele;
    while (s<=e)
    {
        int mid=(s+e)/2;
        if(a[mid]==ele)
        cout<<mid;
        else if(a[mid]>ele)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return 0;
}
