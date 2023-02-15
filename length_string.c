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
        n++;
    }
    printf("\nNumber of Characters %d",n);

    return 0;
}
