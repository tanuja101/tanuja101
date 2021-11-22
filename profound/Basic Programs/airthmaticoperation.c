#include<stdio.h>
int main()
{
  int x,y ,addition,subtraction,multiplication,division;
  printf("enter first number");
  scanf("%d",&x);
  printf("enter second number");
  scanf("%d",&y);

 addition=x + y;
 printf("addition of two numbers:%d\n",addition);
  printf("***********\n");
  subtraction=x - y;
  printf("sutraction of two numbers:%d\n",subtraction);
 printf("***********\n");
  multiplication=x * y;
  printf("multiplication of two numbers:%d\n",multiplication);
 printf("***********\n");
  division=x / y;
  printf("division of two numbers:%d",division);
return 0;
}