// wap to print numbers between 1 ti 350 that are divisible by 3
#include <stdio.h>
void main()
{
    int i= 2;
    for ( i = 2; i <350; i++)
    {
        if (i%3==0)
        {
            printf("%d\n", i);
        }
        
    }
    
}