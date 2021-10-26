#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b ,c, max;
    printf("Enter three numbers to know which is greater");
    scanf("%d %d %d",&a , &b ,&c);
    if(a>b && a>c)
    {
    max = a;
    }
    else if(b>c)
    {
        max=b;
    }
    else
    {
        max=c;
    }

    printf("largest number is %d",max);
    return 0;
}
