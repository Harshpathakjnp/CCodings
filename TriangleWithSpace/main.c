#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,n=6;
    for(i=1;i<=n;i++)
    {
         for(j=1;j<=i;j++)
        {
            if(j==1 || i==n || i==j)
            {
            printf("*");
            }
            else
                printf(" ");
        }

        printf("\n");
    }
    return 0;
}
