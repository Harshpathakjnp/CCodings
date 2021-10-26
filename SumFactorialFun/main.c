#include <stdio.h>
int fact(int x);
int main()
{
    int y = fact(5);
    printf("= %d",y);
}
//1 + 1 + 2 + 6 + 24 + 120
int fact(int x)
{
    int f=1,sum=0;

    for(int i=1;i<=x;i++)
    {
        f=f*i;
        sum = sum+f;
    }
        return sum;
}
