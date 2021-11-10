#include  <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
   int a[]={1,2,3,4,5,6,7,8};
   int n= sizeof(a)/sizeof(int);
   for(i=0;i<=n-1;i++)
   {
       if(a[i]%2==0)
       printf("%d,",a[i]);
   }
   printf("\n");
       for(i=0;i<=n-1;i++)
       {
          if(a[i]%2==1)
       printf("%d,",a[i]);
       }
}
