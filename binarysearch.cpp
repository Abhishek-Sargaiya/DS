#include <iostream>
using namespace std;
int binarysearch(int a[], int ele, int n)
{
    int first,c=0, last, mid,i;
    first = 0;
    last = n-1;
    while (first<=last)
    {
      mid=(first+last)/2;
      if (ele==a[mid])
      {
        
        c++;
        break;
      }
      else if (ele<mid)
      {
        last=mid-1;
      }
      else if (ele>mid)
      {
        first=mid+1;
      }
      
    }
    if (c>0)
    {
        return mid;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int n;
    cout<<"Enter the array:";
    cin>>n;
    int *a = new int[n];
    cout<<"Enter the elements of array:";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int ele;
    cout<<"Enter the element to be searched:";
    cin>>ele;
    int ans= binarysearch(a,ele,n);
    cout<<ans;
    return 0;
}