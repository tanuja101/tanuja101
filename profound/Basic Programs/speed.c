#include<stdio.h>
int main()
{ 
 int speed,distance,time;
 printf("enter distance\n");
 scanf("%d",&distance);
 printf("enter time\n");
 scanf("%d",&time);
 
  speed=distance/time;
 
printf("distance:%d\n",speed);
 

return 0;
}