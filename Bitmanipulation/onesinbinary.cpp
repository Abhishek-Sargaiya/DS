#include <iostream>
using namespace std;
int onesinbinary(int n)
{
   int count = 0;
   while(n !=0)
   {
      n = n & (n-1);
      count++;
   }
   return count;
}
int main()
{
    cout << onesinbinary(33)<< endl;
    return 0;
}