#include <stdio.h>
void main()
{
  int i;
  int sum=0;
  for(i=1;i<=20;i+=2)
  {
   sum=sum+i;
  }
  printf("sum is %d\n", sum);
}
