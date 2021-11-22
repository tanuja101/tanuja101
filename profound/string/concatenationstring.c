#include<stdio.h>
//#include<string.h>
int main()
{ 
int i=0,j=0;
char s1[10],s2[10];
 printf("enter first string\n");
 scanf("%s",&s1);
 printf("enter second string\n");
 scanf("%s",&s2);

 while(s1[i]!='\0')
 i++;
 
   while(s2[j]!='\0')
   {
     s1[i]=s2[j];
     j++;
     i++;
   }
 s1[i]='\0';
 printf("concatenated string:%s\n",s1);
 

return 0;
}