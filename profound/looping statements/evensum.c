#include<stdio.h> 
int main()
{

   int num,rem,even=0,n1,I1;
   printf("  Enter an integer number: ");
   scanf("%d",&num);			               
   I1 = num;
   num = abs(num);
   while(num>0)
   {
      n1 = num % 10;
      num = num / 10;
      rem = n1 % 2;
      if(rem == 0)
        even=even+n1;
   }
   printf("\nThe sum of even digits present in %d is %d.",I1,even); 
   return 0; 
}  