#include <stdio.h>
#include <stdlib.h>
int max(int x,int y);
int min(int x,int y);
/**
5>3

-5<-3
*/
void main()
{
    int a= max (2,3);
    printf("%d\n",a);
    a= min(3,2);
    printf("%d\n",a);
}

int max(int x,int y)
{
    if(x>y)
        return x;
    else
        return y;
}


int min(int x,int y)
{
  if(-x>-y)
        return x;
    else
        return y;
}
