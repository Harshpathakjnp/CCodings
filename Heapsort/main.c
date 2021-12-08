#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[]={12,3,4,17,1,25,13},i,pos,parent,t;
    int n = sizeof(a)/sizeof(int);
    int heap[7];
    for(i=0;i<=n-1;i++)
    {
        heap[i+1]=a[i];
        pos=i+1;
        while(1)
        {
            parent = pos/2;
            if(parent<1)
                break;
            if(heap[parent]>=heap[pos])
                break;
            t=heap[pos];
            heap[pos]=heap[parent];
            heap[parent]=t;
            pos = parent;
        }
    }
    for(i=1;i<=n;i++)
        printf("%d,",heap[i]);
}
