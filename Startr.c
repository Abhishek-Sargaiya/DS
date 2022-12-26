#include <stdio.h>
void main()
{
    int a[10], i,n;
    printf("enter the number of elements");
    scanf("%d", &n);
    printf("Enter elements of arrays");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    
  
}