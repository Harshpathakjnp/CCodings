#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=1;
    int c=21,b=13;
    int a=c-b;
  while(a>0)
  {
        printf("%d,",a);
        c=b;
        b=a;
        a=c-b;
  }
  printf("%d,",a);
    return 0;
}
