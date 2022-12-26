/*#include <iostream>
using namespace std;
int main()
{
    int a,b,i,fact1=1,fact2=1;
    cout<<"Enter the numbers:"<<endl;
    cin>>a>> b;
    for ( i = a; i>= 1; i--)
    {
        fact1=fact1*i;
    }
    cout<<fact1<<endl;
    for ( i = b; i>= 1; i--)
    {
        fact2=fact2*i;
    }
    cout<<fact2<<endl;
    return 0;   
}*/
/*#include <iostream>
using namespace std;
int fact(int n)
{
    int fact=1;
    for ( int i = n; i >= 1; i--)
    {
        fact= fact*i;
    }
  return fact;
}
int main()
{
    int n;
    cout<<"Enter the number:";
    cin>>n;
    int ans=fact(n);
      cout<<ans<<endl;
    return 0;
}*/
#include <iostream>
using namespace std;
int fact(int n)
{
    if (n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return (n*fact(n-1));
    }

}
int main()
{
    int n;
    cin>>n;
    int ans=fact(n);
    cout << ans << endl;
    return 0;
}