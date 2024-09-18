/*Program to Calculate Factorial of a Number */
#include<stdio.h>

int main()
{
  int num, i, result = 1;
  printf("\nEnter a  number : ") ;
  scanf("%d",&num);

  for(i = num; i>=1; i--)
  {
    result = result * i;
  }

  printf("\nFactorial of %d is %d",num,result);
return 0;

}

