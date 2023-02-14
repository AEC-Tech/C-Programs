#include <stdio.h>

int main() {
    int n, i, j, s = 0;
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
            if(i == j)
                s += a[i][j];
                
            printf("%d\t",a[i][j]);
        }
    }
    printf("\nSum of Main Diagonal is %d",s);
    return 0;
}
