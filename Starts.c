#include <stdio.h>
void  main()
{
    int a[1000],i ,n,sum=0, avg;
    printf("Enter the number of elements");
    scanf("%d", &n);
    printf("Enter the elements of array");
    for ( i = 0; i < n; i++)
    {
       scanf("%d",&a[i]);
       sum= sum+a[i];
    }
    printf("sum=%d\n", sum);
    for ( i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    avg= sum/n;
    printf("the average is%d", avg);
}