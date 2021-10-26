#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,f =1 ;
    printf("Enter Number to find the Factorial : ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f = f*i;
    }

    printf("factorial of %d is %d \n",n,f);


    return 0;
}
