#include <stdio.h>
void main()
{
    int a,b,c;
    printf("Enter the sides of the triangle ");
    scanf("%d%d%d", &a,&b,&c);
    if (a==b && b==c)
    {
     printf("Triangle is equilateral");
    }
    else if (a==b || b==c || c==a)
    {
        printf("Triangle is isosceles");
    }
    else if (a*a==b*b+c*c || b*b==c*c+a*a || c*c==a*a+b*b)
    {
        printf("Triangle is right angle");
    }
    else if (a!=b && b!=c && c!=a)
    {
        printf("Triangle is scalen");
    }
    
}