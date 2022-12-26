#include <iostream>
#include <string.h>
using namespace std;
int main()
{
   int i,j,k;
   char s[10];
  int n;
  gets(s);
  n=strlen(s);
  for(i=0;i<=n-1;i++)
  {
    for(j=0;j<i;j++)
    {
          cout<<".";
        
    }
   for(k=i;k<=n;k++)
   {
      cout<<s[k];
   }
    cout<<endl;
  }
  return 0;
}