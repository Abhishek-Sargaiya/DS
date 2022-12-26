#include <bits\stdc++.h>
using namespace std;
int main(){
    int sum=0;
    int n,m ;
    cout<<"Enter the rows and columns of matrix:" ;
    cin>>n>>m;

    int a[n][m];
    cout<<"Enter the elements of matrix: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){

            sum+=a[i][j];
        }
    }
}