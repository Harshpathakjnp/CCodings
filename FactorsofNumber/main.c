#include <stdio.h>
#include <stdlib.h>
//30 = 2X3X5
//60 = 2x2x3x5
//48 /2=24/2=12/2=6/2/=3/3/=1
int main()
{
    int n=73,x=2;
    int copy=n;
    //printf("1");
    while(1)
    {

        while(n % x==0)
        {
            printf(" %d ",x);
            n=n/x;
            if(n!=1)

                printf("x");
        }
            if(n==1)
                break;
            else
                x++;
    }
        printf("=%d",copy);

    }




