// array addition
#include <stdio.h>
void main()
{
    int a[10],b[10], c[10],i,j,n;
    printf("Enter the array:");
    scanf("%d", &n);
    printf("Enter the elements of array A:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the elements of array B:");
    for ( j = 0; j < n; j++)
    {
        scanf("%d", &b[j]);
    }
    for ( i = 0; i < n; i++)
    {
    
        c[i]=a[i]+b[i];
    }
    for ( i = 0; i < n; i++)
    {
        /* code */
    
    
    printf("%d\t", c[i]);
    }
}