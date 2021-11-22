#include<stdio.h>
int main()
{
  int s,i,size,flag;
  printf("enter size of array\n");
  scanf("%d",&size);
  
   int a[size];
   
   printf("enter array elements\n");
   for(i=0;i<size;i++)
   {
     scanf("%d",&a[i]);
   }
   
   printf("array elements are:\n");
   for(i=0;i<size;i++)
   {
     printf("%d\n",a[i]); 
   }
    printf("enter  element to search:\n");
    scanf("%d",&s);
       flag=0;
      for(i=0;i<size;i++)
      {
         if(a[i]==s)
         {

             flag=1;
             break;
         }

      }
     if(flag==1)
     {
           printf("%d present at position %d:\n",s,i+1);
     }
     else
    {
       printf("%d is NOT present :\n",s);
    }
   
return 0;
}