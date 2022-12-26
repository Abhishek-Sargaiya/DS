#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> stack;
    stack.push(7);

  for(int i=0;i<stack.top();i++){
     
     if(stack.top()%2==1)
     cout << "1";

     stack.top()=stack.top()/2;

    //  cout<<stack.empty();
    //  stack.pop();

  }

}