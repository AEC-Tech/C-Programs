/*Program to Check if a number is Perfect Number or not */
#include<stdio.h>

int main()
{
   int num, i, sum = 0;
   printf("\nEnter a Number : ");
   scanf("%d",&num);

   printf("\nFactors of %d are : ",num);
   for( i = 1; i < num; i++)
   {
      if(num % i == 0)
      {
         printf("\n%d",i);
         sum += i;
      }
   }
   if(num == sum)
   {
      printf("\n%d is a Perfect Number",num);
   }
   else
   {
      printf("\n%d is not a Perfect Number",num);
   }
  
return 0;

}

