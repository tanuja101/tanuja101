#include<stdio.h>
#include<string.h>
 int main()
  {
    char s[30];
    int i;
    printf("enter string");
    gets(s);
    for(i=0; i<=strlen(s); i++)
    {
      if(s[i]>=97&&s[i]<=122)
      {  
         s[i]=s[i]-32;
      }
   
    }
    printf("upper case: %s",s);

//lower case

    for(i=0; i<=strlen(s); i++)
    {
      if(s[i]>=65&&s[i]<=90)
      {  
         s[i]=s[i]+32;
      }
   
    }
    printf("\nlower case: %s",s);
  return 0;
}