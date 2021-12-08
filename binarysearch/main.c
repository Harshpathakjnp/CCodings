#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[]={0,1,2,4,6,7,17,18},i,j,x=1,mid,l=0;
   int n=sizeof(a)/sizeof(int);
   int r=n-1;
   while(1)
   {
       mid=(l+r)/2;
       if(a[mid]==x)
       {
           printf("%d found at %d ",x,mid);
           return 0;
       }
       if(x<a[mid-1])
       {
           r=mid-1;
       }
       else
        l=mid+1;
       if(l>r)
       {
        printf("not found");
       return 0;
       }
   }
}
