#include <stdio.h>
#include <stdlib.h>
int gapBetweenDates();
int main()
{
    gapBetweenDates();
}
int gapBetweenDates()
{
    int d ,dd ,m , mm,y ,yy,gap;
    printf("enter 1st date ");
    scanf("%d %d %d",&d,&m,&y);
    printf("\nenter 2nd date ");
    scanf("%d %d %d",&dd,&mm,&yy);
    d = d-1;
    dd = dd-1;
    m = m-1;
    mm = mm-1;
    y = y-yy;
    y = y*365;
    gap = y + (d - dd) + (m - mm) ;
    if(gap>1400)
        gap=gap+1;
    printf("Gap = %d",gap);
}
