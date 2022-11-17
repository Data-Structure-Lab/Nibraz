#include <stdio.h>
void main()
{
  char operand;
  int a,b,sum,product,ans;
  printf("\n enter a operation(+,-,*,/):");
  scanf("%c", &operand);
  printf("\n enter two numbers: ");
  scanf("%d%d", &a,&b);
  if(operand=='+')
  {
     sum=a+b;
     printf("\nsum is %d",sum);
  }
  else if(operand=='-')
  {
    sum=a-b;
    printf("\nsum is %d",sum);
  }
  else if(operand=='*')
  {
    product=a*b;
    printf("\nproduct is %d",product);
  }
  else
  {
    ans=a/b;
    printf("\nanswer is %d",ans);
  }
}

