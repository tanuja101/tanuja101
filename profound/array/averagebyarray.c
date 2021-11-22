#include<stdio.h>
int main()
{
  int i,a,average,sum=0;
  //printf("enter no of elements");
  //scanf("%d",&a);

  int arr[10];

 
  for(i=0;i<10;i++)
  {
   printf("enter elements :\n",i+1);
   scanf("%d",&arr[i]);
   sum=sum+arr[i];
  }
printf("average marks of 10 students%d\n",sum);

return 0;
 
}