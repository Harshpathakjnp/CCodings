#include <stdio.h>
#include <stdlib.h>
int main()
{
  int n=5 , row,left,right,space;
  int h=2*n+1;
  int stars;
  for(row=1;row<=n;row++)
   {
      stars=(h-(2*row-1))/2;
      for(left=1;left<=stars;left++)
       {

           printf("0");
       }
           for(space=1;space<=2*row-1;space++)
       {

           printf("-");
       }
           for(right=1;right<=stars;right++)
       {

           printf("0");
       }
       printf("\n");
  }


  for(row=n;row>=1;row--)
  {
      stars=(h-(2*row-1))/2;
      for(left=1;left<=stars;left++)
       {

           printf("0");
       }
           for(space=1;space<=2*row-1;space++)
       {

           printf("-");
       }
           for(right=1;right<=stars;right++)
       {

           printf("0");
       }
       printf("\n");
  }
}



