#include <iostream>
using namespace std;
int updatebit(int n , int pos, int value)
{
    int flip = ~(1<<pos);
    n= (n & flip);
    return (n | (value<<pos));
}
int main()
{
    cout << updatebit(5,1,1) << endl;
    return 0;
}