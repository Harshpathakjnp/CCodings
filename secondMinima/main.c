#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,min1,min2;
   int a[]={-6,7,5,4,-5,16};
   int n= sizeof(a)/sizeof(int);


   min1=a[0];
   min2=a[1];
   if(a[0]<a[1])
   {
       min1=a[0];
       min2=a[1];
   }
   else
   {
       min1=a[1];
       min2=a[0];
   }
    for(i=2;i<=n-1;i++)
    {
    if(a[i]>=min2)
        continue;

    if(a[i]<=min1)
    {
        min2=min1;
        min1=a[i];
        continue;
    }
    //6,4,5
    min2=a[i];




    }
    printf("%d, %d",min1,min2);
    }
