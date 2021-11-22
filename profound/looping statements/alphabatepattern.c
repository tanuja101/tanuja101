#include <stdio.h>
int main()
{
    int i, j;
    printf("alphabate pattern\n");
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i;j++)
        {
            
            printf(" %c",'A' + j-1);
        }
        printf("\n");
    }
  printf("numerical pattern\n");
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %d",i);
        }
        printf(" \n");
    }
    return 0;
}