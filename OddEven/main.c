#include  <stdio.h>
#include <stdlib.h>


int main()
{

    int i,counteven=1,countodd=1;
   int a[]={1,2,3,4,5,6,7,8};
   int n= sizeof(a)/sizeof(int);
   if(counteven>0)
    printf("Even = ");
   for(i=0;i<=n-1;i++)
   {
       if(a[i]%2==0)
       printf("%d,",a[i]);
       counteven++;
   }
   printf("\n");
   if(countodd>0)
    printf("Odd = ");
       for(i=0;i<=n-1;i++)
       {
          if(a[i]%2==1)
       printf("%d,",a[i]);
       countodd++;
       }
}

