#include <stdio.h>
void main()
{
    int a[1000],c=0,i,n,ele;
    int key;
    printf("Enter the elements:");
    scanf("%d", &n);
    printf("Enter the elements of array:");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the element to be searched:");
    scanf("%d",&ele);
    for ( i = 0; i < n; i++)
    {
        if (a[i]==ele)
        {
            c=c+1;
            printf("position:%d\n", i++);
        }
        if (c>0)
        {
         key=1;
        }
        else
        {
            key=0;
        }
    }
       if (key==1)
       {
           printf("element exist %d times", c);
       }
       else
       {
           printf("element doesnt exist");
       }
    }
