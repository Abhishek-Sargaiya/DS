#include <stdio.h>
#include <string.h>
void main()
{
    char s[100];
    printf("Enter string \n");
    gets(s);
    strrev(s);
    puts(s);
}