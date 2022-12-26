#include <stdio.h>

int main()
{
    int a[100],b[100],c=0,i,j=0,l=0,k=0,m[100],n[100],x,y;
    printf("ENter elements of Array A:");
    scanf("%d",&x);
     printf("ENter elements of Array B:");
    scanf("%d",&y);
    printf("Enter the elements");
    for ( i = 0; i < x; i++)
    {
        /* code */scanf("%d",&a[i]);
    }
     printf("Enter the elements");
    for ( i = 0; i < y; i++)
    {
        /* code */scanf("%d",&b[i]);
    }
    for ( i = 3; i <x+y+1 ; i++)
    {
        for (  ;j > 3;)
        {
             a[i]=b[j];
             j++;
             break;
        }
        
    }
    for ( i = 0; i < x+y ; i++)
    {
        for ( j =0; j < x+y; j++)
        {
            if (a[i]==a[j])
            {
                c++;
            }
            if (c>1)
            {
                for (  ;k>=0;)
                {
                    /* code */scanf("%d",&m[k]);
                }
                
            }
            else
            {
                 for (  ;l >=0;)
                {
                    /* code */scanf("%d",&n[l]);
                    l++;
                    break;
                }
            }
        }
        
    }
    for ( l = 0; l >=0 ; l++)
    {
         printf("%d", n[l]);
    }
    for ( k = 0; k >=0 ; k++)
    {
         printf("%d", m[k]);
    }
 return 0;   
}