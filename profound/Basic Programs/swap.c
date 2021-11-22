#include<stdio.h>
int main()
{
 int x,y,temp;
 printf("enter two numbers \n");
 scanf("%d%d",&x,&y);
 
 temp=x;
 x=y;
 y=temp;

printf("value of x:%d\n",x);
printf("value of y:%d\n",y);
 
return 0;
}