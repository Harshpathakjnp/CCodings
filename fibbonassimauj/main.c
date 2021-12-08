#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  a=0 , b=0 ,c=1;
    int n=5,i,t;
    printf("0,1");
    for(i=1;i<=n;i++)
    {
        t=a;
        a=b;
        b=c;
        c=a+b;
        printf(",%d",c);
    }


}
