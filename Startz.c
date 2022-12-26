#include <stdio.h>
void main()
{ 
  int a[1000],n,i,ele,l,mid,f,c=0;
  printf("Enter the elements:");
  scanf("%d", &n);
  printf("Enter the elements of array:");
  for ( i = 0; i < n; i++)
  {
      /* code */scanf("%d",&a[i]);
  }
  printf("Enter the element you want to search:");
  scanf("%d", &ele);
  f=0;
  l=n-1;
  while (f<=l)
  {
      /* code */mid=(f+l)/2;
      if (ele==a[mid])
      {
          /* code */c=c+1;
          break;
      }
      else if (ele>a[mid])
      {
          /* code */f=mid+1;
      }
      else if (ele<a[mid])
      {
          /* code */l=mid-1;
      }
      
  }
  if (c==1)
  {
      /* code */printf("number found");
  }
  else
  {
     printf("number not found");
  }
  
}