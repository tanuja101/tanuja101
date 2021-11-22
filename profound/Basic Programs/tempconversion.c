#include<stdio.h>
int main()
{
  float F,C;

  printf("enter temperature in fahrenheit  \n");
  scanf("%f",&F);
  
  C=(F-32)*5/9;

  printf("****converted temperature from fahrenheit to celcius**** :\n");
  printf("celcius:%f\n",C);

return 0;
}