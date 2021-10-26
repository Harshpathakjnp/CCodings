#include<stdio.h>
int main()
{
    const float PI=3.14;
    int  circumference;
    float area,r;
    printf("Enter circumference to find radius and area :");
    scanf("%d",&circumference);
    r = circumference/(2*PI);
    area= PI*r*r;
    printf("Radius is %f",r);
    printf("\nArea is %0.2f",area);
    return 0;
}
