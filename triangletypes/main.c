#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c ,count=0;
   printf("Enter sides of triangle");
   scanf("%d %d %d",&a, &b , &c);
   (a==b)? count++ :count;
   (a==c)? count++ :count;
   (c==b)? count++ :count;
    printf("%d",count);
    (count==3)?printf("Equilateral"):(count==1)?printf("Isosceles"):printf("Scalene");
    return 0;
}
