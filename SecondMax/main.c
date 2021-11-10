#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,max1,max2;
   int a[]={6,4,5,4,5,16};
   int n= sizeof(a)/sizeof(int);


   max1=a[0];
   max2=a[1];
   if(a[0]>a[1])
   {
       max1=a[0];
       max2=a[1];
   }
   else
   {
       max1=a[1];
       max2=a[0];
   }
for(i=2;i<=n-1;i++)
{
    if(a[i]<=max2)
        continue;

    if(a[i]>=max1)
    {
        max2=max1;
        max1=a[i];
        continue;
    }
    //6,4,5
    max2=a[i];




}
printf("%d, %d",max1,max2);
}
