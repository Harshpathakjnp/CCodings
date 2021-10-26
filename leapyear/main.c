//leap year problem

#include <stdio.h>
#include <stdlib.h>

int main()
{
int year ,leap;
printf("Enter the year to know its leap year or not");
scanf("%d",year);
if(year%4==0)
{
    printf("its leap year");
}
else
{
    printf("not leap year");
}

    return 0;
}
