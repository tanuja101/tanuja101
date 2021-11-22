#include<stdio.h>
int main()
{
 int i,a1=0,a2=1,a3,E;
 printf("enter no of elements");
 scanf("%d",&E);
 printf("%d%d\n",a1,a2);
for(i=2;i<E;i++)
{
   a3=a1+a2;
 printf("%d",a3);
  a1=a2;
  a2=a3;
}
return 0;
}