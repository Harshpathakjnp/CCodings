#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=4,i;
    int*a =(int*) malloc(sizeof(int));
    for(i=0;i<=n-1;i++)
        scanf("%d",&a[i]);
    for(i=0;i<=n-1;i++)
        printf("%d,",a[i]);
    return 0;
}
