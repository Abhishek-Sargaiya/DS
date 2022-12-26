#include <math.h>
#include <stdio.h>
void main()
{
    char t;
    float x, y, sum, minus, multiply, divide;
    printf("Enter the value of two numbers:");
    scanf("%f%f", &x,&y);
   //scanf("%f%f", &x, &y);
   printf("enter choice");
   scanf("%c",&t);
    switch ('t')
    {
    case 'a':
        sum = x + y;
        printf("adiition=%f", sum);
        break;
    case 's':
        minus = x - y;
        printf("subtraction=%f", minus);
        break;
    case 'm':
        multiply = x * y;
        printf("multiplication=%f", multiply);
        break;
    case 'd':
        divide = x / y;
        printf("division=%f", divide);
        break;
    }
}