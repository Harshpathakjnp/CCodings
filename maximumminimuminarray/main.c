//running our program on codeblocks ...... printing array using bubble short
#include <stdio.h>
int main(){
int a[]={7,6,56,44,33,2,3,5,4},t,i,k,p;
int n =sizeof(a)/sizeof(int);
printf("Enter the which position is miximum : ");
scanf("%d",&p);
p=p-1;
for(k=0;k<=n-1;k++)
printf("%d,",a[k]);         //printing previous array .....
printf("\n");
for(k=0;k<=p;k++)
{
for(i=0;i<=n-2;i++)
{
    if(a[i]>a[i+1])     //for maximum change the sign
    {
        t=a[i];                 // swapping of two numbers .....
        a[i]=a[i+1];
        a[i+1]=t;
}
}
}
for(k=0;k<=n-1;k++)
printf("%d,",a[k]);         //printing previous array .....
printf("\n");
printf("\n");
printf("%d",a[n-p-1]);
}
