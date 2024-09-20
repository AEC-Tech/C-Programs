
#include<stdio.h>

int main()
{
   int num, d, rev = 0,temp;
   printf("\nEnter a number : ");
   scanf("%d",&num);
   temp = num;
   while(num > 0)
   {
      d = num % 10;
      rev = rev * 10 + d;
      num = num / 10;
   }

   printf("\nReverse of %d is %d",temp,rev);
   if( rev == temp)
   {
      printf("\n%d is Palindrome",temp);
   }
   else{
      printf("\n%d is not Palindrome",temp);
   }
return 0;

}

