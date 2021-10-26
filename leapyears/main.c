#include <stdio.h>
#include<math.h>
int main() {
   int a=1,b=0,c=9;
   //b2 - 4*ac
   float d;
   if(a==0 && b==0)
   {


       printf("No Equation");
       return 0;

   }
   if(a==0)
   {
       float x=-c/(float)b;
       printf(" x =%f",x);
       return 0;

   }
d=b*b-4*a*c;
if(d>=0)
{
    d=sqrt(d);
    printf("Real roots\n");
    float x1=(-b + d)/(2*a);
    float x2=(-b - d)/(2*a);
    printf("X1 = %f, X2=%f",x1,x2);
    return 0;
}
else

{
    d=sqrt(-d);
    float r=-b/(2*a);
    float i=d/(2*a);
    printf("Imaginary roots\n");
    printf ("X1 =%f + i*%f, \n X2 = %f - i*%f ",r,i,r,i)     ;


    return 0;
}



}
