/*#include <stdio.h>
void main()
{
    int a[1000], n,i,max;
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("Enter the elements of array a:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max= a[1];
    for ( i = 0; i < n; i++)
    {
        if (a[i]>max)
        {
            max= a[i];
        }
        
    }
    printf("the largest element of array :%d", max);
}*/


#include <stdio.h>
void main()
{
    int a[1000], n,i,min;
    printf("Enter the elements:");
    scanf("%d",&n);
    printf("Enter the elements of array a:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    min= a[1];
    for ( i = 0; i < n; i++)
    {
        if (a[i]<min)
        {
            min= a[i];
        }
        
    }
    printf("the largest element of array :%d", min);
}