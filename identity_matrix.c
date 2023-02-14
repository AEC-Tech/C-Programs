#include <stdio.h>

int main() {
    int n, i, j;
    int a[10][10];
    printf("Enter the size of Identity Matrix : ");
    scanf("%d",&n);
    for(i = 0; i < n ; i++)
    {
        for(j=0; j< n; j++)
        {
            if(i == j)
                a[i][j] = 1;
            else
                a[i][j] = 0;
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
    return 0;
}
