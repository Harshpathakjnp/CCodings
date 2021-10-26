#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n=7, row,col,c;
  char ch;
  int d;
  for(row=1;row<=n;++row)
  {
     for(col=1;col<=n-row;++col)
     {
         printf(" ");
     }
     for(c=1;c<=row;c++)
     {
         ch=(char)('A' + c-1);
     printf("%c",ch);
     }
     for(d=row-1;d>=1;d--)
     {
         ch=(char)('A' + d-1);
         printf("%c",ch);
     }
        printf("\n");
  }
}
