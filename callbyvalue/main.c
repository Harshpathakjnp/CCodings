#include <stdio.h>
#include <stdlib.h>
void valueSwap(int a,int b);
void refSwap(int* a,int* b);
int main()
{
    int x=1,y=2;
    printf("Calling x=%d, y=%d\n",x,y);
//valueSwap(x,y);
refSwap(&x,&y);
printf("After Call x=%d, y=%d\n",x,y);

}
void valueSwap(int a,int b)
{
    int t;
    printf("Received a=%d, b=%d\n",a,b);
    t=a;
    a=b;
    b=t;
    printf("After swap a=%d, b=%d\n",a,b);

}
void refSwap(int* a,int* b)
{
    int t;
    printf("Received a=%d, b=%d\n",*a,*b);
    t=*a;
    *a=*b;
    *b=t;
    printf("After swap a=%d, b=%d\n",*a,*b);

}
