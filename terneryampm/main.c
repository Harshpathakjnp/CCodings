#include <stdio.h>
#include <stdlib.h>

int main()
{
  int time, minute,output;
  printf("enter time ");
  scanf("%d %d",&time , &minute);
output =(time<12 ? printf("time is %d : %d AM",time,minute): printf("Time is %d : %d PM",time,minute))

    return 0;
}
