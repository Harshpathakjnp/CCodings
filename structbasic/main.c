#include <stdio.h>
#include <stdlib.h>
#define size 10
typedef struct
{
int x;
float y;
}st;
int main()
{
    st ms1;
    printf("enter value of x int int :");
    scanf("%d",&ms1.x);

     printf("enter value of y int float :");
    scanf("%f",&ms1.y);

    printf("%d\n",ms1.x);
     printf("%f\n",ms1.y);

}
