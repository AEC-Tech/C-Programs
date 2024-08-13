#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c;
    float d,r1,r2;

    printf("Enter a, b and c : ");
    scanf("%d %d %d",&a,&b,&c);

    d = b * b - 4 * a * c;

    if(d < 0)
    {
        printf("\nNo real roots\n");
    }
    if(d == 0)
    {
        r1 = -b/(2 *a);
        r2 = r1;
        printf("\nRoots are equal %f and %f\n",r1,r2);
    }
    if( d > 0)
    {
        r1 = (-b+sqrt(d))/(2*a);
        r2 = (-b-sqrt(d))/(2*a);
        printf("\nUnequal Real Roots are %f and %f\n",r1,r2);
    }
    return 0;
}
