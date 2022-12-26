#include <iostream>
using namespace std;
int linearsearch(int a[], int n, int ele)
{
 for (int  i = 0; i < n; i++)
    {
      if (a[i]==ele)
        {
         return i;
        }
    }
    return -1;   
}
int main()
{
    int n,ele,i;
    cout<<"enter the array:";
    cin>>n;

    int *arr = new int[n];
   
    cout<<"enter the elements of array:";
    for( i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the elements to be searched";
    cin>>ele;
    int ans =linearsearch(arr,n,ele);
    cout<<ans;
    return 0;
}