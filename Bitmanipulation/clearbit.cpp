#include <iostream>
using namespace std;
int clearbit(int n, int pos)
{
    int flip= ~(1<<pos);
    return (n & flip);
}
int main()
{
    cout << clearbit(5,2) << endl;
}