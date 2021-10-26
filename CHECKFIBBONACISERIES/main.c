//CHECK FIBBONACCI SERIS
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=34;
    if(x==0 || x==1)
    {
        printf("Fib Number");
        return;

    }
    int a=0,b=1,c=1;
    for(;c<x;)
    {
    c=a+b;
    a=b;
    b=c;

    }
    if(c==x)
    printf("Fib Number");
    else
    printf("Not Fib Number");

    return 0;
}
