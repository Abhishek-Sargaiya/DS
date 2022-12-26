#include <stdio.h>
void main()
{
char s[100];
int n=0,i;
printf("Enter a string\n");
scanf("%s",s);
for ( i = 0; s[i]!='\0'; i++)
{
    n=n+1;
}
printf("%d",n);
}