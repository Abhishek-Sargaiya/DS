#include <iostream>
using namespace std;
int main()
{

    char ch;
    cout<<"Enter the logic gate 'A' for AND, 'O' for OR and 'N' for NOT:\n";
    cin>>ch;

    switch (ch)
    {
    case 'A': 
         for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
             cout<<i<<" AND "<<j<<" is:"<<(i & j)<<endl;  

            }
        }
        break;
    
    case 'O':
         for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
             cout<<i<<" OR "<<j<<" is:"<<(i || j)<<endl;

            }
        }
    
         break;  
    case 'N':
         for(int i=0;i<2;i++){
         cout<<i<<" NOT "<<"is: "<<(!i)<<endl;  

         }
         break;
    }
}