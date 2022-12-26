#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    int temp[n.size()];
    for(int i=0;i<n;i++){

       temp[i+k]%n =arr[i];
       arr[i]=temp[i];
       cout<<arr[i]<<" ";
    }
}