// Selection Sort
#include <stdio.h>

int main() {
    int a[20],n,i,j,temp;
    printf("\nHow many numbers are there : ");
    scanf("%d",&n);
    printf("\nEnter the numbers : ");
    for(i = 0; i<n; i++)
        scanf("%d",&a[i]);
        
    printf("\nBefore sorting array is ");
    for(i = 0; i<n;i++)
    {
        printf(" %d ",a[i]);
    }
    for(i = 0; i< n-1;i++)
    {
        for(j = i+1; j<n;j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nAfter sorting array is ");
    for(i = 0; i<n;i++)
    {
        printf(" %d ",a[i]);
    }
    return 0;
}
