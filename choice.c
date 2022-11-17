#include <stdio.h>
void main()
{
  int choice, i,n,sum=0;
  printf("enter ur choice(1:-odd 2:-even):");
  scanf("%d", &choice);
  printf("enter a number:");
  scanf("%d", &n);
  if(choice==1)
  { 
    for(i=1;i<=n;i+=2)
    {
      sum=sum+i;
    }
  }
  else
  {
    for(i=0;i<=n;i+=2)
    {
      sum=sum+i;
    }
  }
  printf("sum is %d\n", sum);
 
}
