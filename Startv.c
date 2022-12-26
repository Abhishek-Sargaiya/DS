#include <stdio.h>
void main()
{
    int a[10],i,n,b[10];
    printf("Enter the elements:");
    scanf("%d", &n);
    printf("Enter the elements of array a:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++)
    {
        /* code */
    
    
     b[i]=a[i];
    } 
         /* code */
    for ( i = 0; i < n; i++)
    {
        /* code */
    
    
      printf("%d ", b[i]);

    
    }
    
}