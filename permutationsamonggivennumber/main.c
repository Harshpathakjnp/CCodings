#include <stdio.h>
#include <stdlib.h>
void swap(int x,int y);
//permutation of a given number .....
int main()
{
    char str[]="ABC";
int n =3,i,j,k;
for(i=0;i<=n-1;i++)
{
    for(j=0;j<=n-1;j++)
    {
        for(k=0;k<=n-1;k++)
        {
            if(i==j || i==k || j==k)
                ;
            else
            {
                printf("%c,%c,%c\n",str[i],str[j],str[k]);

            //printf("%d,%d,%d\n",i,j,k);
            }
        }
    }
}
}
