
#include <stdio.h>
#include<stdlib.h>
int main() {
    int n, i, sum = 0, *a;
    printf("\nHow many numbers are there : ");
    scanf("%d",&n);
    
    a = (int*) malloc(sizeof(int)*n);
    printf("\nEnter array elements : ");
    for(i =0;i<n;i++)
    scanf("%d",a+i);
    
    printf("\nEntered numbers are : ");
    for(i=0;i<n;i++)
    {
        sum = sum + *(a+i);
        printf("\n%d",a[i]);
    }
    printf("\nSum is %d",sum);
    return 0;
}
