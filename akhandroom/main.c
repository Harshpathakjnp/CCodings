#include<stdio.h>
int main()
{
    int i,j,space,n=4,m;
    for(i=0;i<=n;i++)
    {
        for(space=0;space<=n-i;space++)
        {
            printf(" ");
        }
        m=1;
        for(j=0;j<=i;j++)
        {
            printf(" %d",m);
            m=m*(i-j)/(j+1);
        }
        printf("\n");
    }
}
