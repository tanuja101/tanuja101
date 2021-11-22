#include<stdio.h>
#include<string.h>
int main()
{

char str1[10];
 printf("enter string\n");
 gets(str1);

char str2[10];
 printf("enter string\n");
 gets(str2);
//char str2[]="hello";

int res=strcmp(str1,str2);
  if(res==0)
  {
    printf("strigs are equal\n");
  }
  else
   {
     printf("strigs are not equal\n");
   }
 printf("result %d\n", res);
return 0;
}
