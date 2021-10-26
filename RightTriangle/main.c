#include <stdio.h>
#include <stdlib.h>
//1,2,3,4,5
//6-1,6-2,6-3,6-4,6-5
//5,4,3,2,1
int main(){
   int i,j,x=1;
   int n=4;
   int total =n*(n+1)/2 + 1;
   for(i=1;i<=n;i++)
{
   for(j=1;j<=i;j++)
   {
       printf("%4d",total-x);x=x+1;
   }
    printf("\n");
}
    return 0;
}
