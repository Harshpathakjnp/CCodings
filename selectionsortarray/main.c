// selection sort in an array.........
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,min,position;

    int a[]={1,2,3,4,0,6,9,8,7,11},t,j;
    int n = sizeof(a)/sizeof(int);

    for(j=0;j<=n-2;j++)
    {
        min=a[j];
        position=j;
    for (i=j+1;i<=n-1;i++)
    {
        if(a[i]<min)
        {
            min = a[i];
            position = i;
        }
    }
    t=a[j];
    a[j]=a[position];
    a[position]=t;
    }
    for(i=0;i<=n-1;i++)
    {
        printf("%d,",a[i]);
    }


}
