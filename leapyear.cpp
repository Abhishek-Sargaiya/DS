#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year:";
    cin>>year;
    (year%4==0 && year%100!=0 || year%400==0)?cout<<"Leap Year":cout<<"Not Leap Year";
    return 0;
}