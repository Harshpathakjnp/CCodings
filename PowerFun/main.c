#include <stdio.h>
#include <stdlib.h>
int power(int x,int y);
int main()
{
    int x= power(4,5);
    printf("%d", x);
}




int power(int x,int y)
{
int pow =1;
for(int i=1;i<=y;i++)
{
    pow = pow*x;
}

return pow;
}
