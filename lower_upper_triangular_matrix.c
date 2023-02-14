
#include <stdio.h>

int main() {
    int n, i, j;
    int a[10][10];
    printf("Enter the size of Identity Matrix : ");
    scanf("%d",&n);
    printf("Enter the matrix elements : ");
    for(i = 0; i < n ; i++)
    {
        for(j=0; j< n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nMatrix is : ");
    for(i = 0; i < n ; i++)
    {
        printf("\n");
        for(j=0; j< n; j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    printf("\nLower Triangular Matrix : ");
    for(i = 0; i < n ; i++)
    {
        printf("\n");
        for(j=0; j <= i; j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    printf("\nUpper Triangular Matrix : ");
    for(i = 0; i < n ; i++)
    {
        printf("\n");
        for(j=0; j<i;j++)
        printf(" \t");
        for(j=i; j < n; j++)
        {
            printf("%d\t",a[i][j]);
        }
    }
    return 0;
}
