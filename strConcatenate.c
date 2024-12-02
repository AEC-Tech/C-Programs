#include <stdio.h>
void xstrcpy(char *str, char *tar)
{
    int i,j;
    for(i=0;str[i]!='\0';i++);
    for(j=0;tar[j]!='\0';j++,i++)
    {
        str[i] = tar[j];
    }
    str[i] = '\0';
}
int main()
{
    char src[100];
    char tar[200];
    printf("Enter source string : ");
    gets(src);
    printf("Enter target string : ");
    gets(tar);
    xstrcpy(tar, src);
    printf("\nConcatinated string : %s", tar);
    return 0;
}
