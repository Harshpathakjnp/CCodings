#include<stdio.h>
#include<math.h>
int main()
{
    int p, r , t;
    float  si,ci;
    printf("Enter values of principal, rate and time : ");
    scanf("%d %d %d",&p,&r ,&t);
    si=(p*r*t)/100.0;
    ci=p* pow(1+r/100.0,t)-p;
    printf("simple intrest = %f",si);
    printf("\ncompound intrest = %f",ci);
    return 0;
}
