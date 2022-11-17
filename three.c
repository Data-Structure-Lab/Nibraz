#include <stdio.h>
void main()
{
 int a,b,c;
 printf("\nenter three numbers: ");
 scanf("%d%d%d", &a,&b,&c);
 if(a>b&&a>c)
    printf("%d is larger",a);
 else if(b>c)
    printf("%d is larger",b);
 else
    printf("%d is larger",c);
}
