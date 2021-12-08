#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n=3 ,row,star,space;

  for(row=n;row>=1;row--)
  {
      for(space=1;space<=(n-row);space++)
      {
          printf(" ");

      }

      for(star=1;star<=row;star++)
{

          printf("* ");
}


      printf("\n");
}
}

