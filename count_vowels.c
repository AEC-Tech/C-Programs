#include <stdio.h>

int main()
{
    char str[50];
    int i, n = 0;
    printf("Enter a String : ");
    gets(str)
    printf("\nEntered string is %s",str);
    for(i = 0; str[i]!='\0'; i++)
    {
      /*Assuming string is in lowercase */
      if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'u' || str[i] == 'o')  
        n++;
    }
    printf("\nNumber of Vowels %d",n);

    return 0;
}
