//Binary to Decimal converter
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 111 ,res =0 , div=1,rem;
    while(num>0)
    {
    rem = num % 10;
    num = num/10;
    res = res + (rem*div);
    div = div*8;
    }
    printf("%d",res);
    return 0;
}
