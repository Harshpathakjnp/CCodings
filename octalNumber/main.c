#include <stdio.h>
#include <stdlib.h>

int main()
{
int rem , n=20 , res=0 ,mult=1;
while(n>0)
{
    rem = n % 8;
    n=n/8;
    res= res + (rem*mult);
    mult = mult*10;
}
printf("%d",res);

    return 0;
}
