#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n=5 , row,star,space;
  char ch;
  for(row=1;row<=n;row++)
  {
      for(space=1;space<=n-row;space++)
      {
          printf(" ");
      }



      for(star=row;star>=1;star--)
{



          printf("%d",star);
}


      printf("\n");
}


    return 0;
}
