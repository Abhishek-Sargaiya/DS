#include <stdio.h>
#include <math.h>
void main()
{
    int a,b,c,n,x;
    printf("Enter value between 0 to 4: ");
    scanf("%d", &n);
    printf("enter the value of a,b and c: ");
    scanf("%d%d%d",&a, &b,&c);
    if (n==1)
    {
        x=(a*a*a+b*b*b+c*c*c+3*a*b*c);
        printf("value of x=%d", x);
    }
    else if (n==2)
    {
        x=(a*a+c*c-4*a*b);
        printf("value of x=%d", x);
    }
    else if (n==3)
    {
     x= (pow(a,10)+pow(b,10)-pow(c,3));
     printf("value of x=%d", x);
    }
    
    

}