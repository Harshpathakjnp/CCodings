#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a[]={7,6,8,4,3},i,n=5,j,t,k;
    int* p=a;

    printf("enter the elements :");
   /* for(i=0;i<=n-1;i++)
        scanf("%d",p++);
        */
        p=a;
    for(i=0;i<=n-1;i++)
        printf("%d,",*(p+i));

    for(j=0;j<=n-1;j++)
    {
        for(i=0;i<=n-2;i++)
        {
            if(*(p+i)>*(p+i+1))
            {
               t=*(p+i);
               *(p+i)=*(p+i+1);
               *(p+i+1)=t;
            }
        }
    }
    printf("\n");
    for(k=0;k<=n-1;k++)
    printf("%d,",*(p+k));

}
