#include <stdio.h>
void add(int x,int y);
int fsum(int x,int y);
//***************************************
void sub1();
int sub2();
void sub3(int a ,int b);
int sub4(int a ,int b);
//***************************************
/*
1. no return no parameter
2 return  no parameter
3. no return parameter
4. return   parameter
*/
int main()
{
    int x;
     sub1();
     x=sub2(2,3);
     printf("\nSub2 %d",x);
     sub3(4,2);
 x=sub4(2,3);
     printf("\nSub4 %d",x);
}
int sub4(int a,int b)
{
    return a-b;
}
void sub3(int a,int b)
{
    printf("\nSub3 %d", a-b);
}

int sub2()
{
    int a,b;
    printf("\nEnter a and b\n");
    scanf("%d%d",&a,&b);
    return a-b;


}


void sub1()
{
    int a,b;
    printf("\nEnter a and b\n");
    scanf("%d%d",&a,&b);
    printf("\nSub1=%d",a-b);


}
void add(int x,int y)
{
    int sum;
    sum = x+y;
    printf("sum = %d ",sum);
}

int fsum(int x,int y)
{

    return x+y;

}
