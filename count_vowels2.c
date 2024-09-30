#include<stdio.h>

int main() 
{ 

  
   int i, vowel = 0;
   char data;
   for(i = 1 ; i<= 10; i++)
   {
      printf("\nEnter Character %d : ",i);
      fflush(stdin);
      scanf("%c",&data);

      if(data >= 65 && data <=90)
         data += 32;
      
      if(data == 'a' || data == 'e' || data == 'i' || data == 'o' || data == 'u')
         vowel++;
   }

   printf("\nNumber of Vowels are %d",vowel);
   return 0; 
   }

