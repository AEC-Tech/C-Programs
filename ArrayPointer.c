#include<stdio.h>
#include<stdlib.h>
typedef struct Product
{
    char name[30];
    int cost,qty,amount;
}prod;
void input(prod *p)
{
    fflush(stdin);
     printf("\nEnter the Name : ");
    gets(p->name);
    printf("\nEnter Cost and Quantity : ");
    scanf("%d %d",&p->cost,&p->qty);
    p->amount = p->cost * p->qty;
}
int main()
{
    prod *a[10];
    int i,n;
    printf("\nHow many products are there : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        a[i] = (prod*)malloc(sizeof(prod));
        printf("\nEnter Product %d Details ",i+1);
        input(a[i]);
        fflush(stdin);
    }
    for(i=0;i<n;i++)
    printf("\nAmount of %s is %d",a[i]->name,a[i]->amount);
    
    return 0;
}
