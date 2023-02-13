// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int a[10][10],r,c,i,j;
    printf("How many rows and columns are there : ");
    scanf("%d %d",&r,&c);
    printf("Enter the matrix elements : ");
    for(i = 0; i< r; i++)
    {
        for(j=0; j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nMatrix entered is : ");
    for(i = 0; i< r; i++)
    {
        printf("\n");
        for(j=0; j<c;j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    printf("\nMatrix Transpose is : ");
    for(i = 0; i< c; i++)
    {
        printf("\n");
        for(j=0; j<r;j++)
        {
            printf("%d\t",a[j][i]);
        }
    }

    return 0;
}
