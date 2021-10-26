#include <stdio.h>
#include <stdlib.h>
int fact(int x);
int main()
{
for (int i=0;i<=5;i++)
printf("fact(%d)=%d,",i,fact(i));
}
int fact(int x)       {
    int i,f=1;
    for(i=2;i<=x;i++)
    {
    f=f*i;
    }
    return f;
        }
