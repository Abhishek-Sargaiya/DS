// single matrix sum
#include <stdio.h>
void main()
{
    int a[100][100],i,n,m,j,sum=0;
    printf("Enter the number of rows and columns :");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of matrix:");
    for ( i = 0; i < m; i++)
    {
     for ( j = 0; j < n; j++)
     {
        scanf("%d", &a[i][j]);
        sum = sum + a[i][j];
     }
     
    }
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t",a[i][j]);
            printf(" ");
        }
        
    }
    printf("\nTotal=%d", sum);
}