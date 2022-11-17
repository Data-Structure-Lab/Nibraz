#include<stdio.h>

int main()
{
insertion();

return 0;
}


void insertion()
{
int a[7],i,b,pos;
printf("enter elements");
scanf("%d",&b);
printf("enter values");
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
printf("values are:\n");
for(i=0;i<b;i++)
{
printf("%d\n",a[i]);
}

printf("enter the position of element where you want to delete:\n");
scanf("%d",&pos);

if(pos>b+1)
{
printf("deletion is not possible in this array");
}
else
{
for(i=pos-1;i<b-1;i++)
{
a[i]=a[i+1];
}
}
printf("the result array is :");
for(i=0;i<b-1;i++)
{
printf("a[%d]=",i);
printf("%d\n",a[i];
}
}


