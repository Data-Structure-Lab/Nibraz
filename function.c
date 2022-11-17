#include <stdio.h>
int myfunction()
{
  printf("I just got executed!\n");
  return(5);
}
int main()
{
  int a;
  a=myfunction();
  printf("%d\n", a);
  return 0;
}

