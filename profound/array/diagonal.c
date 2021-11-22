#include<stdio.h>
 
int main()
{
 	int i, j, rows, columns, a[10][10], Sum = 0;
  
 	printf("\n Please Enter Number of rows and columns  :  ");
 	scanf("%d %d", &rows, &columns);
 
 	printf("\n Please Enter the Matrix Elements \n");
 	for(i= 0; i<rows ; i++)
  	{
   		for(j= 0;j<columns ;j++)
    	       {
      		scanf("%d", &a[i][j]);
    	       }
           printf("\n");
  	}

       printf(" array elements:\n");
       for(i=0;i<rows;i++)
       {
          for(j=0;j<columns;j++)
          {
             printf("%d\t",a[i][j]);
          }
         printf("\n");
       }
   	  
 	for(i = 0; i<rows; i++)
  	{
   		Sum = Sum + a[i][i];
  	}
 
 	printf("\n The Sum of Diagonal Elements of a Matrix =  %d", Sum );

 	return 0;
}