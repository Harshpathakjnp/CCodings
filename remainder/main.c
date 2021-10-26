#include <stdio.h>
#include <stdlib.h>

int main()
{
 int divisor,divident,remainder ,quotient;
 printf("enter divident and devisor : ");
 scanf("%d %d",&divident,&divisor);
 remainder= divident % divisor;
 quotient=  divident/divisor;
 printf("Remainder is %d\n",remainder);
 printf("Quotient is %d",quotient);

    return 0;
}
