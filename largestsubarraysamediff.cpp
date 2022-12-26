#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int N[100];
    for(int i=0;i<n;i++)
    {
        cin>>N[i];
    }
    int diff=N[1]-N[0];
    int c=2;
    int ans=2;
    for(int i=2;i<=n;i++)
    {
        if (diff==N[i]-N[i-1])
          {
             c++;
          }
          else
          {
            diff=N[i]-N[i-1];
            c=2;
          }
          ans=max(ans,c);
     }
     
     cout<<ans<<" ";

     return 0;
}