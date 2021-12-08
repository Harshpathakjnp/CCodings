#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a=6,b=5,temp;
   printf("a=%d b=%d\n",a,b);
   temp = a;
   a=b;
   b=temp;
   printf("a=%d b=%d",a,b);
}
