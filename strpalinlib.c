#include<stdio.h>
#include<string.h>
int main()
{
    char txt[50],rev[50];
    int n,i,j;
    printf("\nEnter a String : ");
    scanf("%s",txt);
    n = strlen(txt);
    for(i=0, j= n-1; i <n;i++,j--)
    {
        rev[i] = txt[j];
    }
    rev[i] = '\0';
    if(strcmp(txt,rev) == 0)
        printf("\nString is Palindrome");
    else
        printf("\nString is not Palindrome");
    return 0;
}
