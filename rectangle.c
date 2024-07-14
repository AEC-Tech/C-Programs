// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int l,b,a,p;
   printf("Enter length : ");
   scanf("%d",&l);
   printf("Enter breadth : ");
   scanf("%d",&b);
   a = l *b;
   p = 2*(l+b);
   printf("\nArea is %d and Perimeter is %d",a,p);
    return 0;
}
