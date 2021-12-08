#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n=6 ,row,star,space;

  for(row=1;row<=n;row++)
  {
      for(space=1;space<=n-row;space++)
      {
          printf(" ");
      }
      for(star=0;star<(row*2-1);star++)
{

          printf("*");
}
      printf("\n");
}
}
