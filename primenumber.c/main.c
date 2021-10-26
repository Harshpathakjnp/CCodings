#include <stdio.h>
#include <math.h>
int main()
{
    int n,p=100,x=0;
    int count=0;
    for(n=2;n<=p;n++)
    {
    int isprime=1;//Assume prime

    int limit=sqrt(n);
    for( int i=2;i<=limit;i++)
    {
        x=x+1;
        if(n % i==0)//If divided
    {
    isprime=0;
    break;
    }

    }

    if(isprime)
        {
count=count+1;

    printf("%d,",n);
        }
    }
    printf("\nCount = %d",count);
      printf("\ntotal time = %d",x);
    return 0;
}
