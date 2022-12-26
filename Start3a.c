// two matrix sum
#include <stdio.h>
void main()
{
    int a[100][100], b[100][100], c[100][100], i, j, m,n,p,q,sum=0;
    printf("Enter the number of rowns and columns of matrix a:");
    scanf("%d%d", &n,&n);
    printf("Enter the elements of matrix:");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
          scanf("%d", &a[i][j]);
        }
        
    }
    printf("Enter the number of rowns and columns of matrix b:");
    scanf("%d%d", &n,&n);
    printf("Enter the elements of matrix:");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
          scanf("%d", &b[i][j]);
        }
        
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            c[i][j] = a[i][j]+ b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    
}