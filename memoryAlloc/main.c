#include <stdio.h>
#include <stdlib.h>
int main()
{
    int* p;
    int n=5,i;
    p=(int*) calloc(n,sizeof(int));// 5 X integers
    if(p==NULL)
    {
    printf("Could not allocate");
    return 0;
    }
    printf("Allocated at %d.\n", p);
    for(i=0;i<=n-1;i++)
    p[i]=i;//Use pointer as array
    for(i=0;i<=n-1;i++)
        printf("%d,",p[i]);

     printf("\n", p);
    for(i=0;i<=n-1;i++)
    scanf("%d",&p[i]);

    for(i=0;i<=n-1;i++)
        printf("%d,",p[i]);
     printf("\n", p);
    for(i=0;i<=n-1;i++)
    scanf("%d",(p + i));
    for(i=0;i<=n-1;i++)
        printf("%d,",*(p + i));
    return 0;
}
