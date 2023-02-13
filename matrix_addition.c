// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[10][10],b[10][10];
    int r1,c1,r2,c2,i,j;
    printf("How many rows and columns are there in 1st Matrix  : ");
    scanf("%d %d",&r1,&c1);
    printf("How many rows and columns are there in 2nd Matrix  : ");
    scanf("%d %d",&r2,&c2);
    if(r1 == r2 && c1 == c2)
    {
        
    printf("Enter the first matrix elements : ");
    for(i = 0; i< r1; i++)
    {
        for(j=0; j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second matrix elements : ");
    for(i = 0; i< r2; i++)
    {
        for(j=0; j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("\nFirst Matrix is : ");
    for(i = 0; i< r1; i++)
    {
        printf("\n");
        for(j=0; j<c1;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    printf("\nSecond Matrix is : ");
    for(i = 0; i< r2; i++)
    {
        printf("\n");
        for(j=0; j<c2;j++)
        {
            printf("%d\t",b[i][j]);
        }
    }
    printf("\nSum of Matrices is : ");
    for(i = 0; i< r1; i++)
    {
        printf("\n");
        for(j=0; j<c1;j++)
        {
            printf("%d\t",a[i][j]+b[i][j]);
        }
    }
}
else
{
printf("\nSize doesn't match, Operation not possible");
}
    return 0;
}
