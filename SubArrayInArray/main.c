#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[]={3,3,3,3,3,3,4,7,99};//6-4 = 2
    int b[]={3,3,3};
    int i,j,count=0,matched;
   int n1 = sizeof(a)/sizeof(int);
   int n2 = sizeof(b)/sizeof(int);
   if(n2>n1)
   {
       printf("Not found\n");
       return 0;
   }
   for(i=0;i<=n1-n2;i++)
   {
   if(a[i]==b[0])//a[i]==b[0], a[i+1]=b[1], a[i+2]=b[2], a[ i + pos]=b[pos]
   {
matched=1;
for(j=1;j<=n2-1;j++)
{
    if(a[i + j]!=b[j])
    {
        matched=0;
        break;
    }
}
if(matched)
{
    printf("Matched at %d\n",i);
    i=i+n2-1;
}
   }
   }
   return 0;


}
