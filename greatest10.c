#include<stdio.h>

int main() 
{ 

  int i, num, max =0;
  printf("\nEnter ten numbers : ");
  for(i = 1; i <= 10; i++)
  {
   printf("\nEnter Number %d : ",i);
   scanf("%d",&num);
   if(num > max)
      max = num;
  }
  printf("\nGreatest Number is %d",max);
   

   
   return 0; 
   }

