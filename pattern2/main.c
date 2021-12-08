#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n=4 ,row,star,space;

  for(row=1;row<=n;row++)
  {
      for(space=1;space<=n-row;space++)
      {
          printf(" ");

      }

      for(star=1;star<=row;star++)
{

          printf("*");
}


      printf("\n");
}
}
