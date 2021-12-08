#include <stdio.h>
#include <stdlib.h>
void doublefun(int* x);
int main()
{
    int a=18;
    doublefun(&a);
    printf("%d\n",a);
}
void doublefun(int* x)
{
*x=2*(*x);
}


