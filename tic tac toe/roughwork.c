#include<stdio.h>
int main ()
{


int i,j,value=1;
char ch;
  for(i=0;i<=2;i++)
  {
      for(j=0;j<=2;j++)
      {

          value =board[i][j];
          if(value==0)
            ch='_';
          if(value==1)
            ch='0';
          if(value==2)
            ch='X';

          printf("  %3c",ch);
      }printf("\n\n\n");
  }
}
