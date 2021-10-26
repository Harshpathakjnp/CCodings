#include <stdio.h>
#include <stdlib.h>

int main()
{
    int time,minute;
    printf("enter time ");
    scanf("%d %d",&time,&minute);
    if(time<10)
    {
        printf("Time is 0%d : %d AM",time,minute);
    }
    else if(time<12)
    {
        printf("Time is %d : %d AM",time,minute);
    }
    else if( time == 12 )
    {
        printf("time is %d : %d PM",time,minute);
    }
    else
    {

        printf("time is %d : %d PM",time-12,minute);
    }
    return 0;
}

