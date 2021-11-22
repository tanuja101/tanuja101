#include<stdio.h>
int main()
{
   int i,size,largest;
   
    printf("enter size of array\n");
  scanf("%d",&size);
   int a[size]; 
   printf("enter array elemets\n");
   for(i=0;i<size;i++)
   {
     scanf("%d",&a[i]);
    }

    largest=a[0];
   for(i=0;i<size;i++)
   { 
     if(a[0]<a[i])
     {
       a[0]=a[i];
     }    
    }
printf("largest number:%d\n",a[0]);
  return 0;
}