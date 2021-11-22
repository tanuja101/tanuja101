#include<stdio.h>
int main()
{
  int j,i,size,temp;
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
  ;
      
      for(i=0;i<size;i++)
      {
        for(j=i+1;j<size;j++)
       {
       
         if(a[i]>a[j])
         {
           temp= a[i];
           a[i]=a[j];
           a[j]= temp;          
          
         }
       }

      }
     
     
           printf("ascending order:\n");
           for(i=0;i<size;i++)
           {
              printf("%d\n",a[i]);
           }
     
   
return 0;
}