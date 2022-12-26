#include <string.h>
#include <stdio.h>
void main()
{
    int n;
    char s1[100], s2[100];
    printf("Enter string 1\n");
    gets(s1);
    printf("Enter string 2\n");
    gets(s2);
    strcpy(s1,s2);
    puts(s1);
    puts(s2);
}