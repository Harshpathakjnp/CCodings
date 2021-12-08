#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n=15 ,row,star,space;

  for(row=1;row<=n;row++)
  {


      for(space=1;space<=n;space++)
      {
          if(   row==1 || row == n  ||row == n-space+1)
          printf("0");
          else
            printf(" ");

      }
      printf("\n");
}
}

