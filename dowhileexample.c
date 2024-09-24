
#include<stdio.h>

int main()
{
   int l,b,area;
   char answer;
   do
   {
      
      printf("\nEnter length & breadth : ");
      scanf("%d %d",&l,&b);

      area = l * b;

      printf("\nArea is %d",area);
      printf("\nDo you want to try again (y/n): ");
      fflush(stdin);
      scanf("%c",&answer);

   }while(answer == 'y' || answer == 'Y');
return 0;

}

