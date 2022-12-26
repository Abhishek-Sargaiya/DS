#include <stdio.h>
void main()
{
    float a, b, c;
    printf("enter the hardness, carbon content, tensile strenth");
    scanf("%f%f%f", &a,&b,&c);
    if (a>50 && b<0.7 && c>5600)
    {
        printf("grade 10");
    }
    else if (a>50 && b<0.7)
    {
        printf("grade 9");
    }
    else if (b<0.7 && c>5600)
    {
        printf("grade 8");
    }
    else if (a>50 && c>5600)
    {
        printf("grade 7");
    }
    else if (a>50)
    {
        printf("grade 6");
    }
    else
    {
        printf("grade 5");
    }
    
}