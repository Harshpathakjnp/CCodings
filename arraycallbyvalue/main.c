#include <stdio.h>
int main()
{
   int a[]={1,2,3,4,5,6,7},i;
   int n=sizeof(a)/sizeof(int);
   int* p=a;
   int * pend=&a[n-1];
   for(i=0;i<=n-1;i++)
   {
    printf("%d,",a[i]);
   }
   printf("\n");
   for(i=0;i<=n-1;i++)
   {
    printf("%d,",*(p+i));
   }
   printf("\n");
   for(i=0;i<=n-1;i++)
   {
    printf("%d,",*(p++));
   }
   printf("\n");
   for(p=a;p<=pend;p++)
   {
    printf("%d,",*(p));
   }
   printf("\n");
   p=a;
   for(pend=&a[n-1];pend>=p;pend--)
   {
    printf("%d,",*pend);
   }
      printf("\n");

   p=a;
   pend=&a[n-1];
   printf("%d,",pend-p+1);


}
