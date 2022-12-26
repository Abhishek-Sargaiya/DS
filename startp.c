// wap to find the sum of the series 
// i) 1+2+3+4......+n
// ii) 1^2+ 2^2+3^2+....+n^2
//iii) 3+5+7+....+n
//iv) x+ x^2/x + x^3/3 +....+ x^n/n
/*#include <stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter the number of series:");
    scanf("%d", &n);
    for ( i = 1; i <=n; i++)
    {
     sum= sum+i;   
    }
    printf("total=%d",sum);
}*/
/*
#include <stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter the number of series:");
    scanf("%d", &n);
    for ( i = 1; i <=n; i++)
    {
        sum= sum+i*i;
    }
    printf("total=%d", sum);
}*/

#include <stdio.h>
void main()
{
    int n ,i,sum=0;
    printf("Enter the terms of series:");
    scanf("%d", &n);
    for ( i = 3; i <= n; i++)
    {
       sum = sum+i; 
    }
    printf("total=%d", sum);
}