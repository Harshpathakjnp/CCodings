#include <stdio.h>
#include <stdlib.h>
void swapping(int* a,int* b,int* c);
int main()
{
int a=1,b=2,c=3;
printf("After swap a=%d, b=%d, c=%d\n",a,b,c);
swapping(&a,&b,&c);
printf("After swap a=%d, b=%d, c=%d\n",a,b,c);
swapping(&a,&b,&c);
printf("After swap a=%d, b=%d, c=%d\n",a,b,c);
swapping(&a,&b,&c);
printf("After swap a=%d, b=%d, c=%d\n",a,b,c);
}




void swapping(int* a,int* b,int* c)
{
    int t;
     t=*a;
    *a=*b;
    *b=*c;
    *c=t;


}
