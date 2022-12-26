// trace of a matrix 
#include <stdio.h>
void main()
{
    int a[100][100],n,i,j,sum=0;
    printf("Enter the number of rows and columns :");
    scanf("%d%d",&n,&n );
    printf("Enter the elements of rows and columns :");
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
         if (i==j)
         {
            sum= sum+a[i][j];
         }
         
        }
       
    }
     printf("trace =%d", sum);
}