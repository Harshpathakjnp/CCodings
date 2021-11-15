#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,base,r,x;
  n=56;
  base=16;
  while(n>0)
  {
      r=n%base;
      n=n/base;
       printf("%d",r);
      x=r;
      printf("%d\n",x);

  }
}
