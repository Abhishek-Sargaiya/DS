#include <stdio.h>
void main()
{
    int a,b,c,d,e,percentage;
    printf("Enter the marks obtained in 5 subjects: ");
    scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
    percentage=(a+b+c+d+e)/5;
    printf("percent=%d", percentage);
    if (percentage >=90)
    {
        printf("Grade A");
    }
    else if (percentage>80)
       {
        printf("Grade B");
    }
    else if ( percentage>70)
   {
       printf("Grade C");
   }
    else if ( percentage>60 )
    {
        printf("Grade D");
    }
    else if (percentage>50)
    {
        printf("Grade E");
    }
    else
    {
        printf("FAIL");
    }
}