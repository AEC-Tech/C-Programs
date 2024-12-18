#include<stdio.h>
#include<string.h>
int main()
{
    char txt[50];
    int n,i,j,flag = 0;
    printf("\nEnter a String : ");
    scanf("%s",txt);
    
    for(n =0; txt[n]!='\0';n++);
    
    for(i=0, j= n-1; i < n/2 ;i++,j--)
    {
        if(txt[i] != txt[j])
        {
            flag = 1;
            break;
        }
    }
    
    if(flag == 0)
        printf("\nString is Palindrome");
    else
        printf("\nString is not Palindrome");
    return 0;
}
