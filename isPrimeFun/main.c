#include <stdio.h>
#include<math.h>
//123 One Hundred Twenty Three
int isPrime(int x);
int main()
{
    int y=isPrime(8);
    printf("%d",y);
    /*int n=500;
    for(int i=2;i<=n;i++)
    if(isPrime(i))
        printf("%d,",i);*/
}

int isPrime(int x)
{
    int limit = sqrt(x);
    for(int i=2;i<=limit;i++)
        if(x % i ==0)
        return 0;

    return 1;
}
