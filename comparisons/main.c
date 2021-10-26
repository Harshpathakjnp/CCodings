#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=3,b=9,c=2;
    int max;
    printf("a<b = %d, a>=b =%d, a>b=%d, a<=b=%d, a==b=%d, a!=b=%d\n",a<b,a>=b,a>b,a<=b, a==b,a!=b);
    if(a>b)
        max=a;
    else
        max=b;
printf("%d",max);
    return 0;
}
