#include <stdio.h>
int main()
{
   int c,f;
   printf("enter the degree in celcius : ");
   scanf("%d",&c);
   f= 9*c/5 +32;                    // formula used c/5 = (f-32)/9
   printf("fahrenheit = %d",f);
}
