/*Program to Calculate and Print REVERSE of a Number */
#include<stdio.h>

int main()
{
   int num, d, rev=0;

   printf("\nEnter a Number : ");
   scanf("%d",&num);

   while(num > 0)
   {
      d = num % 10;
      num = num / 10;
      rev = rev * 10 + d;
   }

   printf("\nReverse is %d",rev);
  
return 0;

}

