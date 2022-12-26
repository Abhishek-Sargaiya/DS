#include <stdio.h>
void main ()
{
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    if (c>='A'&& c<='Z')
    {
        printf("uppercase\n");
        c=c+32;
        printf("%c", c);

    }
    else if (c>='a' && c<='z')
    {
       printf("lowercase\n");
       c=c-32;
       printf("%c", c);
    }
    else if (c>='0' && c<='9')
    {
        printf("digit ");
    }
    else
    {
        printf("special symbol");
    }    
}