#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[]={12,3,5,4,17,1,25,13},i,pos,parent,t,left,right,length,max,maxpos;
    int n = sizeof(a)/sizeof(int);
    int heap[8];
    int h = sizeof(heap)/sizeof(int);
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

    for(i=1;i<=n;i++)
    {
        a[n-i]=heap[1];
        heap[1]=heap[n+1-i];
        length=n-i;
        pos=1;
        while(1)
        {
            left=2*pos;
            right=left+1;
            if(left>length)
                break;
            max=heap[left];
            maxpos=left;
            if(right<=length)
            {
                if(heap[right]>max)
                {


                max=heap[right];
                maxpos=right;
            }
            }


        if(heap[pos]>=max)
            break;
        t=heap[pos];
        heap[pos]=heap[maxpos];
        heap[maxpos]=t;
        pos=maxpos;
    }
    }
    printf("\n");
     for(i=0;i<=n-1;i++)
        printf("%d,",a[i]);

}
