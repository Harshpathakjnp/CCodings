#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[5],i,n=5;
    int* p=a;

    printf("enter the elements :");
    for(i=0;i<=4;i++)
        scanf("%d",p++);
        p=a;
    for(i=0;i<=4;i++)
        printf("%d,",*p++);
}
