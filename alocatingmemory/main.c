#include <stdio.h>
#include <stdlib.h>
int main()
{
    int*p;
    int n,i;
    printf("Enter the Number of Element want to Allocate :");
    scanf("%d",&n);
    int x=n;
    p=(int*) calloc(n,sizeof(int));
    //p=(int*)malloc(n*sizeof(int));
    printf("Allocated at %d.\n", p);
    for(i=0;i<=n-1;i++)
    {
        printf("enter element :",n);
        scanf("%d",&p[i]);
    }
    for(i=0;i<=n-1;i++)
        printf("%d,",p[i]);


    int j;
    printf("\nHow many Elements want to increase :");
    scanf("%d",&j);
    n=n+j;
    p=(int*)realloc(p,n);
    for(i=x;i<=n-1;i++)
        scanf("%d",&p[i]);

    printf("\n");
    for(i=0;i<=n-1;i++)
        printf("%d,",*(p+i));


    printf("\nHow many Elements want to decrease :");
    scanf("%d",&j);
    n=n-j;
    p=(int*)realloc(p,n);


    printf("\n");
    for(i=0;i<=n-1;i++)
        printf("%d,",*(p+i));
    return 0;
}
