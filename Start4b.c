#include <stdio.h>
void main()
{
    int i;
    char s1[100], s2[100];
    printf("Enter a string\n");
    gets(s1);
    for ( i = 0; s1[i] != '\0' ; i++)
    {
        s1[i]= s2[i];
    }
    puts(s2);
}