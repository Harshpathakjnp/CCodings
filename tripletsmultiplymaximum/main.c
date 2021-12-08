#include <stdio.h>
int main()
{
  int a[]={1,2,3,14,5,2,6,7},i,x,y,z;
  int n=sizeof(a)/sizeof(int);
  int max=a[0]*a[1]*a[2];
  int maxpos=2;
  for(i=2;i<=n-1;i++)
  {
  x=a[i-2];
  y=a[i-1];
  z=a[i];
  if(x*y*z>max)
  {
      max=x*y*z;
      maxpos=i;
  }
printf("%d,%d,%d",x,y,z);
  printf("\n");
  }
  printf("Max = %d, pos = %d to %d\n",max,maxpos-2,maxpos);
}
