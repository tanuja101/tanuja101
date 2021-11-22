#include<stdio.h>  
#include <string.h>    
   int main(){  
//length  
   char ch1[20]={'h','e','l','l','o', '\0'};    
   //char ch2[10];
   printf("Length of string is: %d",strlen(ch1));    
   
//compare
   strcpy(ch2,ch1);    
   printf("\nValue of second string is: %s",ch2);  

//concatenation
     
    strcat(ch1,ch2);    
    printf("\nValue of first string is: %s",ch1);    
return 0;    
}  