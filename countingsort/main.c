#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[]={1,1,0,4,4},f[10]={0},i,j;

    int n=sizeof(a)/sizeof(int);
    int b[n];
    for(i=0;i<=n-1;i++)
    {
        int x = a[i];
        f[x]++;
    }
    for(i=0;i<=9;i++)
    printf("%d,",f[i]);
    printf("\n");
    for(i=1;i<=9;i++)
    {
    f[i]=f[i]+f[i-1];
    }
    printf("\n");
    for(i=0;i<=9;i++)
    printf("%d,",f[i]);
    printf("\n");
    for(i=n-1;i>=0;i--)
    {
        int x=a[i];
        int pos=f[x];
        b[pos-1]=x;
        f[x]--;
        //printf("\n%d,%d",x,pos);
    }
    printf("\n");
    for(i=0;i<=n-1;i++)
        printf("%d,",b[i]);
}
