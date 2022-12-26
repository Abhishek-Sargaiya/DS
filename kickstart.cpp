#include <iostream>
using namespace std;
int main()
{
    int ans=0;
    int n;
    cin>>n;
    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int mx=-1;
    
    for(int i=0;i<n;i++)
    {
      if (a[i]>mx && a[i]>a[i+1])
      {
        ans++;
      }
      mx=max(mx,a[i]);
    }
    cout<<"no. of breaking record days:";
    cout<<ans<<endl;
    return 0;
}