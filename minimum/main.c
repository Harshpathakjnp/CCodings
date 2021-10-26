#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,max,middle,min;
    printf("enter three numbers to know maximum, middle and minimum :");
    scanf("%d %d %d",&a , &b, &c);


    // maximum number finding


    if(a>b && a>c)
    {
        max=a;
    }
    else if(b>a && b>c)
    {
        max=b;
    }
    else
    {
        max=c;
    }
    printf("Maximum number is %d",max);



    // to find minimum number



    if(a<b && a<c)
    {
        min=a;
    }
    else if(b<a && b<c)
    {
        min=b;
    }
    else
    {
        min=c;
    }
    printf("\nMinimum number is %d",min);



    // to find middle number



    if((a<=b && a>=c) ||(a<=c && a>=b))
    {
        middle=a;
    }
    else if((b<=a && b>=c) || (b<=c && b>=a))
    {
        middle=b;
    }

else
        {

        middle=c;
    }
    printf("\nmiddle number is %d",middle);
    return 0;
}
