#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("color 5f");
//1,1,1,1,2,2,3,4,4,    1,2,3,4
int i,a[]={1,1,2,2,2,3,4,5,5,5,6,7,8,8,9};
int n=sizeof(a)/sizeof(int);
printf("%d,",a[0]);
for(i=1;i<=n-1;i++)             //Shivank Algorithm
{
if(a[i]!=a[i-1])
    printf("%d,",a[i]);
}

}
