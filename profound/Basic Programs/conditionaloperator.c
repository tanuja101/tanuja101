#include<stdio.h>
int main()
{
  int x,y ,z,MAX;
  printf("enter first number");
  scanf("%d",&x);
  printf("enter second number");
  scanf("%d",&y);
  printf("enter third number");
  scanf("%d",&z);

  MAX=(x>y)?((x>z)?x:z):((y>z)?y:z);

  printf("Maximum number%d\n",MAX);
return 0;
}
