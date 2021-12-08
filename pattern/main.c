#include <stdio.h>
#include <stdlib.h>
int main()
{
   int i,j,n=6;
   for(i=0;i<=n;i++)
   {
       for(j=0;j<=n;j++)
       {
         if(i>=j)
         {
             printf("*");
         }

       }
       printf("\n");
   }

}
