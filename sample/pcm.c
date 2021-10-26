#include<stdio.h>
int main()
{
int p,c,m, sum , percentage;
printf("enter marks of physics, chemistry and maths :");
scanf("%d %d %d",&p,&c,&m);
sum= p+c+m ;
percentage = (sum*100)/300 ;
printf("Percentage is %d",percentage);
return 0;
}

