/*Program to Calculate Sum of Digits of a number */
#include<stdio.h>

int main()
{

     int num,d,sum=0;
   printf("\nEnter a number : ");
   scanf("%d",&num);

   while(num > 0)
   {
      d = num % 10;
      num = num / 10;
      sum += d;
   }

   printf("\nSum of Digits of %d is  %d",num, sum);
return 0;

}

