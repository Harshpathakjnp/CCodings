#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()                  // printing Disarium number
{
   int n = 135,r,count=0,length=3,i,rem,power,sum=0,x;
    int copy=n,product;
while(copy>0)
{
    count++;
    copy=copy/10;
}
copy=n;
for(i=count;i>=1;i--)
{
    rem=n%10;
    n=n/10;
//printf("\nRaise %d to power %d,",rem, i);
product=1;
for(x=1;x<=i;x++)
{
product=product *rem;
}

sum=sum + product;
}
//printf("\ncount = %d\n",count);
//printf("%d\n",sum);
if(sum==copy)
    printf("DISARIUM NUMBER");
else
    printf("not DISARIUM");
}






