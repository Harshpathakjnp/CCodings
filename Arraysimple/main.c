#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[]={3,-4,3,4,7,9};
    int b[]={3,4};
    int i,count=0;
   int n = sizeof(a)/sizeof(int);
   int x;
   printf("Enter number to search : ");
   scanf("%d",&x);
  // printf("%d\n",n);
   for(i=0;i<=n-1;i++)
    if(a[i]==x)
   {
       printf("Found at %d\n",i);
       count++;
   }
        printf("count = %d\n",count);
        if(count==0)
       printf("Not Found\n");

  //  printf("%d,",a[i]);
}
