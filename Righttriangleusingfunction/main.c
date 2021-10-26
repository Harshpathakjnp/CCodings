#include <stdio.h>
#include <stdlib.h>

void stars();
void main()
{
    stars(10,0);
}
/*
3,0
0
00
000

3,1
000
00
0

*/

void stars(int n,int y)
{
    int i,j;
if(y==0)

{
for(i=n;i>=1;i--)
{
    for(j=1;j<=i;j++)
    {
        printf("*");
    }
    printf("\n");
}
}
else
{
for(i=1;i<=n;i++)
{
    for(j=1;j<=i;j++)
    {
        printf("*");
    }
    printf("\n");
}
}

}
