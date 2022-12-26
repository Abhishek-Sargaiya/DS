#include <iostream>
using namespace std;
int main()
{
    int temp;
    cout<<"Enter the temperature"<<endl;
    cin>>temp;
    if (temp<0)
    {
       cout<<"Freezing Weather"<<endl;
    }
    else if (temp>0 && temp<=10)
    {
        cout<<"Very Cold Weather"<<endl;
    }
    else if (temp>10 && temp<=20)
    {
        cout<<"Cold Weather"<<endl;
    }
    else if (temp>20 && temp<=30)
    {
        cout<<"Normal Weather"<<endl;
    }
    else if (temp>30 && temp<=40)
    {
        cout<<"Hot Weather"<<endl;
    }
    else
    {
      cout<<"Very Hot Weather"<<endl;
    }
    return 0;
}