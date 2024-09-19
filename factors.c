/*Program to Print Factors of a number */
#include<stdio.h>

int main()
{
   int num, i;
   printf("\nEnter a Number : ");
   scanf("%d",&num);

   printf("\nFactors of %d are : ",num);
   for( i = 1; i<= num; i++)
   {
      if(num % i == 0)
      {
         printf("\n%d",i);
      }
   }
  
return 0;

}

