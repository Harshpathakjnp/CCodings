#include<stdio.h>
int main()
{
int a,b,c ;
float s ,area;
printf("enter sides of triangle :");
scanf("%d %d %d",&a,&b,&c);
s= (a+b+c)/2.0;
area = sqrt(s*(s-a)*(s-b)*(s-c));
printf("area of triangle is %f",area);
return 0;
}
