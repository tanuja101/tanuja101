#include <stdio.h>
int main()
{
char operator;
int a,d;
printf("enter operator\n");
scanf("%c",&operator);
printf("enter 1st no.& enter 2nd no\n");
scanf("%d%d",&a,&d);
switch(operator)
{
  case '+': 
          printf("addition:%d\n",a+d);
          break;
  case '-': 
          printf("subtraction:%d\n",a-d);
          break;
  case '*': 
          printf("multiplication:%d\n",a*d);
          break;
  case '/': 
          printf("division:%d\n",a/d);
          break;
  default :printf("wrong choice");
}
return 0;
}