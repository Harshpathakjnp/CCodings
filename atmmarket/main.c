#include <stdio.h>
#include <stdlib.h>

int main()
{
    int amt,n;
    printf("Enter Amount to take Cash :");
    scanf("%d",&amt);
    amt = amt - 100;

        n = amt / 500;
        if(n>0)
        printf("The Number of 500 note is %d",n);
        amt= amt % 500;
        n=amt / 100;

        printf("\nThe number of 100 note is %d",n+1);
        amt = amt % 100;
        n= amt / 50;
        if(n>0)
        printf("\nThe number of 50 note is %d",n);
        amt = amt % 50;
        n = amt / 10;
        if(n>0)
        printf("\nThe number of 10 rs notes is %d",n);
        amt = amt % 10;
        n = amt / 5;
        if(n>0)
        printf("\nThe number of 5 rs is %d",n);
        amt = amt % 5;
        n = amt / 2;
        if(n>0)
        printf("\nThe number of 2 rs is %d",n);
        amt = amt % 2;
        n = amt / 1;
        if(n>0)
        printf("\nThe number of 1 rs is %d",n);



    return 0;
}
