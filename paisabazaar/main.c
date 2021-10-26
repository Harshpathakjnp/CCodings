#include <stdio.h>
#include <stdlib.h>

int main()
{
    int rs,p,total;
    printf("Enter amount ");
    scanf("%d %d",&rs,&p);

    total = 100*rs + p;
    rs=total/100;
    p=total%100;

        printf("Amount is %d.%d Rupees",rs,p);

    return 0;
}
