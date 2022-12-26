/*#include <iostream>
using namespace std;
int main()
{
    int n,m;
    int i,j,c=0;
    int arr1[100],arr2[100];
    cout<<"Enter the array 1:";
    cin>>n;
    cout<<"Enter the array 2:";
    cin>>m;
    cout<<"Enter the element of array 1:";
    for(i=0;i<n;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter the element of array 2:";
    for(j=0;j<m;j++)
    {
        cin>>arr2[j];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if (arr1[i]==arr2[j])
            {
                c++;
                 for(int k=i;k<n;k++)
                  {
                    arr1[k]=arr1[k+1];
                  }
            }
        }
    }
    cout<<"set differenc is:";
    for(i=0;i<n-c;i++)
    {
        cout<<arr1[i]<<" ";
    }
    return 0;
}*/
#include <iostream>
using namespace std;
int main()
{
    int n, m;
    int i, j, c = 0;
    int arr1[100], arr2[100];
    cout << "Enter the array 1:";
    cin >> n;
    cout << "Enter the array 2:";
    cin >> m;
    cout << "Enter the element of array 1:";
    for (i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    cout << "Enter the element of array 2:";
    for (j = 0; j < m; j++)
    {
        cin >> arr2[j];
    }
    for (i = 0; i < n; i++)
    {
        int sum = 0;
        for (j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j])
            {
                sum = 1;
                continue;
            }
        }
        if (sum == 0)
        {
            cout << arr1[i] << " ";
        }
    }
    return 0;
}