//running our program on codeblocks ...... printing array using bubble short
#include <stdio.h>
int main(){
int a[]={7,6,8,44,3,2,1},t,i,k;
int n =sizeof(a)/sizeof(int);
for(k=0;k<=n-1;k++)
printf("%d,",a[k]);         //printing previous array .....
printf("\n");
for(k=0;k<=n-1;k++)
{
for(i=0;i<=n-2;i++)
{
    if(a[i]>a[i+1])
    {
        t=a[i];                 // swapping of two numbers .....
        a[i]=a[i+1];
        a[i+1]=t;
}
}
}
printf("\n");
for(k=0;k<=n-1;k++)
printf("%d,",a[k]);         //printing sorted array .......
}
