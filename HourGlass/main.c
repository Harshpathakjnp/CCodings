#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n=7 , row,star,space;
  char ch;
  for(row=n;row>=1;row--)
  {
      for(space=1;space<=n-row;space++)
      {
          printf(" ");
      }



      for(star=1;star<=2*row-1;star++)
{



          printf("0");
}


      printf("\n");
}


  for(row=2;row<=n;row++)
  {
      for(space=1;space<=n-row;space++)
      {
          printf(" ");
      }



      for(star=1;star<=2*row-1;star++)
{



          printf("0");
}


      printf("\n");
}


    return 0;
}
