#include <stdio.h>
#include <stdlib.h>

int main()
{
  int x,y,pow=1,n;
  printf("Enter x and y to find x^y : ");
  scanf("%d%d",&x ,&y);
  for(int i=1;i<=y-1;i++)
  {
      pow=pow*x;
      printf(" %d x ",x);

  }

  printf("  %d = ",x);

  printf(" %d",pow);

    return 0;

}
