#include <stdio.h>
#include <stdlib.h>
float exponential(int n, float x);
int main()
{
    int y = exponential(10,1.0);
    printf("%d",y);
}

float exponential(int n, float x)
{
    float sum= 1.0;
    for (int i=n-1;i>0;--i)
        sum = 1 + x * (sum/i);
    return sum;
}
