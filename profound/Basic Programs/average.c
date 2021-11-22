#include<stdio.h>
int main()
{
 int u,v,x,y,z,total,marks,average,NOS;
 printf("enter no of subjects\n");
 scanf("%d",&NOS);

 printf("enter five subject marks \n");
 scanf("%d%d%d%d%d",&u,&v,&x,&y,&z);
 
 total=u+v+x+y+z;
 average=total /NOS;

 printf("total marks:%d\n",total);
 printf("average:%d\n",average);
 
return 0;
}