#include<iostream>
using namespace std;
void union(int p, int a[],int b[])
{
  int i=0,j=0;
  while (i < m && j < n)
  {
    if (a[i]< b[j])
    {
      cout<<a[i];
      i++;
    }
    else if (b[j] < a[i])
    {
      cout<< b[j];
    }
    else
    {
      cout<<b[j];
      i++;
      j++;
    }
  }
  while (i<m)
  {
    cout<<a[i];
    i++;
  }
  while (j<n)
  {
    cout<<b[j];
    j++;
  }

  return 0;
  
}
int main()
{
  int a[10],b[10],c[10],m,n,i,j;
  cout<<"Enter the array1:";
  cin>>m;
  cout<<"Enter the array2:";
  cin>>n;
  cout<<"Enter the elements of array1:";
  for ( i = 0; i < n; i++)
  {
     cin>>a[i];
  }
  cout<<"Enter the elements of array2:";
  for ( i = 0; i < m; i++)
  {
     cin>>b[i];
  }
  union(b);
  return 0;
}