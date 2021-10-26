#include <stdio.h>
#include <stdlib.h>

int main()
{
int n=14 ,rem,result=0,mult=1;
while(n>0)
{
    rem=n % 2;
    n=n /2;
    result = result+ (rem * mult);
    mult = mult*10;
}
printf("%d",result);
}
