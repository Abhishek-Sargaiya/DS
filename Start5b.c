#include<stdio.h>
int fac(int n){
    int i, , fact=1;
    //scanf("%d", &n);
    for(i=1;i<=n; i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    int n, sum=0; int p;
    scanf("%d", &n);
    for(int i=1; i<=n; i++ ){
        p=fac(i);
        sum=sum+p;
    }
    printf("%d", sum);
    return 0;
}
