/*Program to Check if a number is Prime Number or not */
#include<stdio.h>

int main()
{
   int num, i, count = 0;
   printf("\nEnter a Number : ");
   scanf("%d",&num);

   for( i = 2; i < num; i++)
   {
      if(num % i == 0)
      {
         count += 1;
         break;
      }
   }
   if(count == 0 && num != 1)
   {
      printf("\n%d is a Prime Number",num);
   }
   else
   {
      printf("\n%d is not a Prime Number",num);
   }
  
return 0;

}

