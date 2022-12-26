#include <stdio.h>
void main()
{
    float area, r,b,h,s,l,x;
    int ch;
    printf("enter 1 for area of circle 2 for area of triangle 3 for area of square 4 for area of rectangle");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("Enter the radius");
        scanf("%f",&r);
        area= 3.14*r*r;
        printf("Area of circle= %f", area);
        break;
    case 2:
        printf("Enter the value of base and hieght");
        scanf("%f%f",&b,&h);
        area= 0.5*b*h;
        printf("Area of triangle=%f", area);
        break;
    case 3:
        printf("Enter the side");
        scanf("%f", &s);
        area= s*s;
        printf("Area of square=%f", area);
        break;
    case 4:
        printf("Enter the value of length and breadth");
        scanf("%f%f", &l,&x);
        area= l*x;
        printf("Area of rectangle=%f", area);
        break;
    }
}