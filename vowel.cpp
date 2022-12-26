/*#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    switch (ch)
    {
    case 'a': cout<<"vowel"<<endl;
        break;
    case 'e': cout<<"vowel"<<endl;
    break;
    case 'i': cout<<"vowel"<<endl;
    break;
    case 'o': cout<<"vowel"<<endl;
    break;
    case 'u': cout<<"vowel"<<endl;
    break;
    default: cout<<"consonant"<<endl;
        break;
    }
    return 0;
}*/
#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) 
{
   int h1= (int)s[0];
  int h2= (int)s[1];
  int hh= (h1*10 + h2%10);
   if(s[8]=='A')
   {
       if(hh==12)
       {
         cout<<"00";
         int i=2;
         while(s[i]>=2 && s[i]<=7)
         {
          cout<<s[i];
          i++;
         }
        }   
    }
 
    else 
    {
        int i=0;
        while(s[i]>=0 && s[i]<=7)
        {     
            cout << s[i];
            i++;
        }
    }
    
    
    if(s[8]=='P')
    {
        if(hh==12)
        {
            cout<<"12";
            int i=2;
            while(s[i]>=2 && s[i]<=7)
            {
                cout<<s[i];
                i++;
            }
        }   

       else
        {
          int i=0;
          while(s[i]>=0 && s[i]<=7)
            {
                cout<<s[i];
            }
        }
    }
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
