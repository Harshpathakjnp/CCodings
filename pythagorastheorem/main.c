#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,k;
    printf("Pythagoras triplets: \n");
    n=100;
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
    for(k=j+1;k<=n;k++)
    {

       if(i*i + j*j == k*k)
       {
            printf("(%d,%d,%d)\n",i,j,k);
       }
    }
        }
    }
}
