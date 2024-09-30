#include<stdio.h>

int main() 
{ 

   int num, i, even = 0, odd =0;

   printf("\nEnter 10 numbers : ");
   for(i = 1; i <= 10; i++)
   {
      printf("\nEnter Number %d : ",i);
      scanf("%d",&num);
      if( num % 2 == 0)
         even++;
      else
         odd++;
   }

   printf("\nNumber of Even Elements is %d",even);
   printf("\nNumber of Odd elements is %d",odd);


   return 0; 
   }

