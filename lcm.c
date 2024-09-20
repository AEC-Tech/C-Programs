
#include<stdio.h>

int main()
{
   int n1, n2, lcm, i;

   printf("\nEnter two numbers : ");
   scanf("%d %d",&n1,&n2);

   for(i = 1; i <= n1 * n2; i++)
   {
      if( i % n1 == 0 && i % n2 == 0)
      {
         lcm = i;
         printf("\nLCM of %d and %d is %d",n1,n2,lcm);
         break;
      }
   }
return 0;

}

