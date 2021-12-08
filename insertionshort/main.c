#include <stdio.h>
#include <stdlib.h>
int main()
{
   int a[]={10,19,25,15};
   int i,j,t,n=sizeof(a)/sizeof(int);
   for(i=0;i<=n-1;i++)
   {
       if(a[i]<=a[i+1])
        continue;
       t=a[i+1];
       j=i+1;
       while(j>=1 && a[j-1]>t)
       {
           a[j]=a[j-1];
           j--;
       }
   }
       a[j]=t;
   for(i=0;i<=n-1;i++)
   printf("%d ",a[i]);
}
