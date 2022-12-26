#include <iostream>
using namespace std;
int ans(int sum1, int sum2, int diff)
{
  sum1=0;
  sum2=0;
      int a[100][100];
    int n;
    cout<<"Enter the rows and of matrix:";
    cin>>n;

    cout<<"Enter the elements of matrix:";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            {
          cin>>a[i][j];
        }
    }
    for(int i =0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
        if(i==j)
            {
                sum1=sum1+a[i][j];
            }

            if ((i+j)==(n-1))
            {
            sum2=sum2+a[i][i];

            }
    }  
    }
   return abs(sum1-sum2);
}
int main()
{
    int sum1=0;
    int diff;
    int sum2=0;

  cout<< ans(sum1,sum2,diff);
 
    return 0;
}