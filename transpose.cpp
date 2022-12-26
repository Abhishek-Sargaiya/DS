#include <iostream>
using namespace std;
int main(){

    int n,m;
    cout<<"Enter the rows and columns of matrix:\n";
    cin>>n>>m;

    int arr[n][m];
    cout<<"Enter the elements of matrix:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            
            cout<<arr[j][i]<<" ";  
        }
        cout<<endl;
    }
return 0;
}