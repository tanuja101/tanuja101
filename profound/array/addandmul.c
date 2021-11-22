#include<stdio.h>
#define MAX [50]
int main()
{
   int sum=0,i,j,k,m,n,p,q,a[10][10],d[10][10],mul[10][10],add[10][10];

    //int add[10][10];
//matrix 1
    printf("enter no of rows and columns for matrix 1:\n");
   scanf("%d%d",&m,&n);   

//  int a[10][10];
  
   printf("enter array elements:\n");
   for(i=0;i<m;i++)
   {
     for(j=0;j<n;j++)
     {
       scanf("%d",&a[i][j]);
     }
     printf("\n");
   }

   printf(" array elements:\n");
   for(i=0;i<m;i++)
   {
     for(j=0;j<n;j++)
     {
       printf("%d\t",a[i][j]);
     }
     printf("\n");
   }

  //matrix2
   printf("enter no of rows and columns for matrix 2:\n");
   scanf("%d%d",&p,&q);   

//   int d[10][10];
  
   printf("enter array elements:\n");
   for(i=0;i<p;i++)
   {
     for(j=0;j<q;j++)
     {
       scanf("%d",&d[i][j]);
     }
     printf("\n");
   }

   printf(" array elements:\n");
   for(i=0;i<p;i++)
   {
     for(j=0;j<q;j++)
     {
       printf("%d\t",d[i][j]);
     }
     printf("\n");
   }
 
  for(i=0;i<m;i++)
   {
      for(j=0;j<q;j++)
      {
        for(k=0;k<p;k++)
        {
         sum=sum+a[i][k]*d[k][j];
        }
      mul[i][j]=sum;
      sum=0;
      }
   }
	
 printf("multiplication RESULT:");
    for(i=0;i<m;i++)
    {
       for(j=0;j<q;j++)
       {
         printf("%d\t",mul[i][j]);
       }  
      printf("\n");
    }

//addition

for(i=0;i<m;i++)
   {
      for(j=0;j<q;j++)
      {
           add[i][j]= a[i][j]+d[i][j];
      }
   }
	
 printf("addition RESULT:");
    for(i=0;i<m;i++)
    {
       for(j=0;j<q;j++)
       {
         printf("%d\t",add[i][j]);
       }  
      printf("\n");
    }

  return 0;
}