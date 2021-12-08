#include<stdio.h>
int main()
{
    int a[]={8,7,6,5,4,3,2,1};
    int n =sizeof(a)/sizeof(int);
    int i,fp=0,left=0,right=n-1,t,j,k;
    int choose=6;
    choose--;

    while(1)
    {
    int pivot = a[left];

    fp= left;

    for(i=left+1;i<=right;i++)
    {
        if(a[i]<pivot)
        {
            fp++;
            t=a[fp];
            a[fp]=a[i];
            a[i]=t;
        }
    }
    t=a[fp];
    a[fp]=pivot;
    a[left]=t;
    if(fp==choose)
    {
            printf("Value=%d\n",pivot);
            return 0;
    }
    if(choose<fp)
        right=fp-1;
    else
        left=fp+1;
    }
    for(j=0;j<=n-1;j++)
    printf("%d,",a[j]);

}
