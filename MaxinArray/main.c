#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,maxlocation,minlocation;
    int a[]={6,3,-13,17,11,12};
    int n= sizeof(a)/sizeof(int);
    printf("%d\n",n);
    int max = a[0];
    int min = a[0];
    for(i=1;i<=n-1;i++)
    {
        if(max<a[i])
        {
        max=a[i];
        maxlocation =i;
        }
        if(min>a[i])
        {
        min =a[i];
        minlocation = i;

        }


    }
    printf("max = %d\n",max);
    printf("min = %d\n",min);
    printf("position for max = %d\n",maxlocation);
    printf("position for min = %d",minlocation);


    return 0;
}
