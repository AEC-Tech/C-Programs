#include<stdio.h>

int main()
{
    int per;
    printf("Enter percentage marks : ");
    scanf("%d",&per);

    if(per >= 40)
    {
        printf("\nCongrats You Cleared the Exam");
    }
    else{
        printf("\nSorry You need to reappear");
    }
    
    return 0;
}
