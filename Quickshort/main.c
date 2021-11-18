#include <stdio.h>
#include <stdlib.h>
void quicksort(int a[],int left ,int right);
int main()
{
   int a[]={10,15,9,17,2},t,i;
   int n=sizeof(a)/sizeof(int);
    quicksort(a,0,n-1);
   for(i=0;i<=n-1;i++)
   {
       printf("%d,",a[i]);
   }
}

void quicksort(int a[],int left ,int right)
{
    if(left>=right)
        return;
    int pivot = a[left],t,fp,i;
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
    t=a[left];
    a[left]=a[fp];
    a[fp]=t;
     quicksort(a,left,fp-1);
   quicksort(a,fp+1,right);

}
