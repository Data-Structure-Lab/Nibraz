#include <stdio.h>
void main()
{
 int r,sum=0,num;
 printf("enter a number:");
 scanf("%d", &num);
 while(num>0)
 {
   r=num%10;
   sum=sum+r;
   num=num/10;
 }
 printf("sum is %d\n", sum);
}
