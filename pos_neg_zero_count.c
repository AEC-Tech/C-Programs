
#include<stdio.h>

int main()
{
   int i,num, positive=0 , negative = 0, zero=0;
   for( i = 1 ; i <= 10; i++)
   {
      printf("\nEnter a Number : ");
      scanf("%d",&num);
      if(num > 0)
      {
         positive++;
      }
      else if(num < 0)
      {
         negative++;
      }
      else
      {
         zero++;
      }
   }
   printf("\nNumber of Positive numbers %d",positive);
   printf("\nNumber of Negative numbers %d",negative);
   printf("\nNumber of Zeroes %d",zero);
return 0;

}

