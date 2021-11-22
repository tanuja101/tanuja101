#include<stdio.h>
int main()
{
 int p,t,r,SI;
 printf("enter principle amount: ");
 scanf("%d",&p);
 printf("enter time: ");
 scanf("%d",&t);
 printf("enter Rate ");
 scanf("%d",&r);

 SI=(p*t*r/100);
 
printf("simple intrest:%f",SI);
return 0;
}