#include<stdio.h>

int main()
{
    int per;
    printf("Enter percentage marks : ");
    scanf("%d",&per);

    if(per >= 90)
    {
        printf("\nCongrats You got A+");
    }
    if(per >= 80 && per < 90)
    {
        printf("\nGrade A");
    }
    if(per >= 60 && per < 80)
    {
        printf("\nGrade B");
    }
    if(per >= 50 && per <60)
    {
        printf("\nGrade C");
    }
    if(per < 50)
    {
        printf("\nGrade F");
    }
    
    return 0;
}
