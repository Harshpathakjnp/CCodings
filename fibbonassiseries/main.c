#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n , a=0 , b=1 ,c,i;
    printf("Enter Number to print Fibbonacci series :");
    scanf("%d",&n);
    printf("0,1");
    for(i=3;i<=n;i++)
    {
        c= a+b;
        a=b;
        b=c;
        printf(",%d",c);
    }

    return 0;
}
