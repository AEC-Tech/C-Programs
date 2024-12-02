#include<stdio.h>
#include<stdlib.h>
typedef struct Complex
{
    int real,img;
}comp;
void input(comp *p)
{
    printf("\nEnter Real & Imaginary part for Complex No . ");
    scanf("%d %d",&p->real,&p->img);
    
}
comp add(comp x,comp y)
{
    comp z;
    z.real = x.real + y.real;
    z.img = x.img + y.img;
    return z;

}
void show(comp p)
{
    printf("\nComplex no. is %d + i %d",p.real,p.img);
    
}
int main()
{
    comp a,b,c;
    input(&a);
    input(&b);

    c = add(a,b);
    show(a);
    show(b);
    show(c);
    return 0;
}
