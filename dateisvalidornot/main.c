#include <stdio.h>
#include <stdlib.h>
// p,c,m
// total, percent.
//Date difference
// 16/10/2021 - 15/08/1947 in days
int main()
{
    int yy,mm,dd,daysinmonth;
    printf("Enter date format DD/MM/YYYY : ");
    scanf("%d/%d/%d",&dd,&mm,&yy);
    if(yy<=0)
    {
            printf(" Error");
            return 0;
    }
        if(mm<=0 || mm>12)
    {
            printf(" Error");
            return 0;
    }

        if(dd<=0)
    {
            printf(" Error");
            return 0;

    }
if(mm==4 || mm==6 || mm==9 || mm==11)
    daysinmonth=30;
else
    if(mm==2)
{
if(yy % 400==0 || yy % 4==0 && yy % 100!=0)
    daysinmonth=29;
else
    daysinmonth=28;
}
else
    daysinmonth=31;
if(dd>daysinmonth)
    {
            printf(" Error");
            return 0;

    }
    printf(" Valid");
    return 0;
}
