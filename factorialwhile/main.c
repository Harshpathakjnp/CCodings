#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,fact=1;
    printf("enter the number to find factorial : ");
    scanf("%d",&x);
    do
    {
        fact=fact*x;
        x--;
    }
    while(x>0);
    printf("factorial is %d",fact);
    return 0;
}
