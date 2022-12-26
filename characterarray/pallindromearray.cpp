// #include <iostream>
// using namespace std;
// int palindrome(int n, char arr[]){
//     bool c=0;
//     for(int i=0;i<n;i++)
//     {
//         if (arr[i]==arr[n-1-i])
//         {
//         c= 1;
//         break;
//         }
//     }
//    if (c==true)
//    {
//     cout<<"Word is pallindrome";
//    }
//    else
//    cout<<"Word is not a pallindrome";
// }
// int main()
// {

//     int n;
//     cin>>n;
//     char arr[n+1];
//     cin>>arr;
//    palindrome(n,arr);

// }

#include <iostream>
using namespace std;
int palindrome(string str){
    bool c=0;
    for(int i=0;i<str.length();i++)
    {
        if (str[i]==str[str.length()-1-i])
        {
        c= 1;
        break;
        }
    }
   if (c==true)
   {
    cout<<"Word is pallindrome";
   }
   else
   cout<<"Word is not a pallindrome";
}
int main()
{

    string str;
    cin>>str;
    // char arr[n+1];
    // cin>>arr;
   palindrome(str);

}