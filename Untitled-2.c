#include<stdio.h>
int main(){
    int key;
    scanf("%d", &key);
    int a[5]={1,2,3,4,5};
    for(int i=0; i<5; i++){
        if(a[i]==key){
            printf("Element found at the index %d",i)
        }
    }
    return 0;
}