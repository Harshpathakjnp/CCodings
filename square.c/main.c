#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i=0;
    printf("enter number : ");
    scanf("%d",&x);

    while(i<=x)
    {
        printf("%d ",i*i);
        i++;
    }
    return 0;
}
