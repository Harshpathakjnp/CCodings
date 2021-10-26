#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, b ,c ;
   int t;
   printf("Enter three sides of triangle : ");
   scanf("%d %d %d", &a , &b ,&c);
   if(a>c)
   {
       t=a;
       a=c;
       c=t;
   }
   if(b>c)
   {
       t=b;
       b=c;
       c=t;
   }
   (c*c == a*a + b*b)? printf("\nthis is right angle triangle "): printf("\n no right angle triangle");
  // (a*a == c*c + b*b)? printf("\nthis is right angle triangle "): printf("\n no right angle triangle");
  // (b*b == a*a + c*c)? printf("\nthis is right angle triangle "): printf("\n no right angle triangle");
    return 0;
}
