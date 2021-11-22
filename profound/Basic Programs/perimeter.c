#include<stdio.h>
int main()
{
 int p,q,r,s,perimeter_of_square, l,b,perimeter_of_rectangle;
 printf("enter four sides of square\n");
 scanf("%d%d%d%d",&p,&q,&r,&s);
 
 perimeter_of_square=p+q+r+s;
printf("perimeter of square:%d\n",perimeter_of_square); 

 printf("enter length of rectangle\n");
 scanf("%d",&l);
 printf("enter breadth of rectangle\n");
 scanf("%d",&b);

 perimeter_of_rectangle=2*(l+b);
 
printf("perimeter of rectangle:%d\n",perimeter_of_rectangle); 

return 0;
}