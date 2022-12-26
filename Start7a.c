// matrix multiplication.
#include <stdio.h>
void main()
{
    int a[100][100], b[100][100], c[100][100],p,q,m, k,i,j,n;
    printf("Enter the number of rows and columns of matrix a:");
    scanf("%d%d", &m,&n);
    printf("Enter the elements of rows and columns of matrix a:");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    printf("Enter the number of rows and columns of matrix b:");
    scanf("%d%d", &p,&q);
    printf("Enter the elements of rows and columns of matrix b:");
    for ( i = 0; i < p; i++)
    {
       for ( j = 0; j < q; j++)
       {
        scanf("%d", &b[i][j]);
       }
       
    }
     for ( i = 0; i < m; i++)
    {
       for ( j = 0; j < q; j++)
       {
        for ( k = 0; k <q; k++)
        {
           c[i][j]=a[i][j]+(a[i][k]*b[k][j]);
           
        }
        
       }
       
    }
     for ( i = 0; i < m; i++)
    {
       for ( j = 0; j < q; j++)
       {
        printf("%d\t", c[i][j]);
       }
       printf("\n");
    }
    
}