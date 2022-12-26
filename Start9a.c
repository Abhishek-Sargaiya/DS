#include <string.h>
#include <stdio.h>
void main()
{
    int n;
    char s[100];
    printf("Enter a string\n");
    gets(s);
    n=strlen(s);
    printf("%d", n);
}