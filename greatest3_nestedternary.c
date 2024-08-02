#include<stdio.h>
int main()
{
    int a , b, c, d;
    printf("\nEnter three numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    d = (a > b)? ((a > c)? a : c ): (b > c)? b : c;
    printf("\nGreatest Noumber is %d\n",d);
    return 0;
}
