#include <iostream>
using namespace std;
void patern(int n)
{
  
    cout<<n<<" ";
    if(n<=0){
        return ;
    }


    patern(n-5);
    cout<<n<<" ";

}
int main()
{
     int n;
    cin>>n;
   
    patern(n);
    return 0;

}