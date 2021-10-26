#include <stdio.h>
#include <stdlib.h>
// ==  !=
int main()
{
   float a=11,b=9,c=3;
   float max;
   /*if(a>=b)
      max=a;
      else
        max=b;
        */
// Fast Fourier Transorm
    max=(a>=b)? (a>=c)? a:c   :(b>=c)?b:c;
   printf("%f\n",max);

    max=(a>=b && a>=c) ? a:(b>=c)?b:c;
   printf("%f\n",(a>=b && a>=c) ? a:(b>=c)?b:c);
   int year=2021;
   (year %400 ==0 || year % 4==0 && year % 100!=0)? printf("Leap Year"):printf("Not leap year");

  printf( (year %400 ==0 || year % 4==0 && year % 100!=0)?"Leap Year":"Not leap year");
    return 0;
}
