//transpose of a matrix
#include <stdio.h>
void main()
{
    int a[100][100],b[100][100],i,j,n;
    printf("Enter the rows and columns :");
    scanf("%d%d", &n,&n);
    printf("Enter the elements of matrix a:");
    for ( i = 0; i < n; i++)
    {
      for ( j = 0; j < n; j++)
      {
        scanf("%d", &a[i][j]);
      }
      
    }
    for ( i = 0; i < n; i++)
    {
      for ( j = 0; j < n; j++)
      {
        b[j][i]=a[i][j];
      }
      
    }
    for ( i = 0; i < n; i++)
    {
      for ( j = 0; j < n; j++)
      {
        printf("%d\t", b[i][j]);
      }
      printf("\n");
    }
}