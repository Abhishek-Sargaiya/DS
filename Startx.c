#include <stdio.h>
void main()
{
int a[1000], i,n,key;
printf("Enter the elements:");
scanf("%d", &n);
printf("Enter the elements of array:");
for ( i = 0; i < n; i++)
{
    scanf("%d", & a[i]);
}
printf("Enter the element you want to search:");
scanf("%d",&key);
int bool;
for ( i = 0; i < n; i++)
{
    if (a[i]==key)
    {
        //printf("number exist");
        bool=1;
    }
    else
    {
        //printf("number doesnt exist");
        bool=0;

    }
}
if(bool==1)
{
    printf(" found");
}
else
{
    printf("not found");
}


}   