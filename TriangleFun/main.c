#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int areaoftriangle(float a,float b,float c);
int main()
{
float y = areaoftriangle(3,4,5);
printf("area = %f",y);
}

int areaoftriangle(float a,float b,float c)
{
    float s,area;
    s=(a+b+c)/2.0;
    area =sqrt(s*(s-a)*(s-b)*(s-c));
    return area;

}
