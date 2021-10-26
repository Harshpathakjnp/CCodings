#include <stdio.h>
#include <stdlib.h>
void table(int x);
int main()
{
    table(5);

}

void table(int x)
{

    for(int i=1;i<=10;i++)
    {
        printf("%1d X %2d = %2d\n",x,i,x*i);

    }

}
