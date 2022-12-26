#include <stdio.h>
void main()
{
    int a[1000],b[1000];
    int c[1000];
    int n= sizeof(a)/sizeof(a[0]);
    int i,sum=0;
    printf("Enter the elements:");
    scanf("%d", &n);
    printf("the elements of array a:");
    for ( i = 0; i <n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the elements of array b:");
    for ( i = 0; i<n; i++)
    {
        scanf("%d", &b[i]);
    }
    for ( i = 0; i < n; i++)
    {
       c[i] = a[i]+b[i];
    
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d", c[i]);
        printf(" ");
    }
    
    
    
}