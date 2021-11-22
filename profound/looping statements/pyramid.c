#include<stdio.h>
int main()
{
    int i,j,a;
    printf("enter no of rows:\n");
    scanf("%d",&a);
        for(i=1;i<=a;i++)
        {
            for(j=1;j<=2*a;j++)
            {
		if(j>=a-(i-1)&& j<=a+(i-1))
		{
			printf("*");
		}
		else
		{
			printf(" ");
		}

	    }
           printf("\n");
	}

}