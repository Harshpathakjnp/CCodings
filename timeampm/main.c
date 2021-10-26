#include <stdio.h>
#include <stdlib.h>

int main()
{
  int time, minute,output;
  printf("Enter the time ");
  scanf("%d %d",&time , &minute);
output =(time<12 )? printf("time is %d : %d AM",time,minute) : time==12 ? printf("time is %d : %d PM",time,minute) :printf("Time is %d : %d PM",time-12,minute);
//(hr<=11) ? printf("time is %d : %d AM",hr,min):  (hr==12)?printf("time is %d : %d PM",hr,min):printf("time is %d : %d PM",hr-12,min);
    return 0;
}

