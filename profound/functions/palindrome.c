#include<stdio.h>
int main()
{
  int a,temp,remainder,sum=0;
 printf("enter no ");
 scanf("%d",&a);

 temp=a;
while(a>0)
{
  remainder=a%10;
  sum=(sum*10)+remainder;
  a=a/10;
}
if(sum==temp)
{
 printf("Number is palindrome%d",a);
}
else{
printf("Number is NOT palindrome%d",a);
 }
return 0;
}