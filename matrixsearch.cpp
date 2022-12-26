/*
#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> arr[i][j];
        }
    }
    int ele;
    cin>> ele;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if (ele==arr[i][j])
            {
                cout<<i<<" "<<j<<endl;
                cout<<"true"<<endl;
            }
        }
    }
    return 0;
    }*/
    #include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> arr[i][j];
        }
    }
    int ele;
    cin>> ele;
    int r=0;
    int c=m-1;
   
    while (r<n && c>=0)
    {
        if (ele==arr[r][c])
        {
          cout<<r<<" "<<c<<endl;
          break;
        }
        else if (arr[r][c]>ele)
        {
            c--;
        }
        else
        r++;
    }
return 0;
}