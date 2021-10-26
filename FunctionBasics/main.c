#include<stdio.h>
void sum();
void subtract();
void mult();
void div();
void main()
{
    int n;
    printf("1.Add \n2.Subtract \n3.Multiply \n4.Devide\nEnter your choice :");
    scanf("%d",&n);
    switch (n)
{
    case 1:
        {
            sum();
            break;
        }
    case 2:
        {
            subtract();
            break;
        }
    case 3:
        {
            mult();
            break;
        }
    case 4:
        {
        div();
        break;
        }
    default :
    {
        printf("wrong choice");
    }

}
}
void sum()
{
    int a,b;
    printf("\nEnter two number to Add : ");
    scanf("%d %d",&a,&b);
    printf("The sum is %d",a+b);
}
void subtract()
{
    int a,b;
    printf("\nenter two number to subtract : ");
    scanf("%d %d",&a,&b);
    printf("the Result is %d",a-b);
}
void mult()
{
    int a,b;
    printf("\nenter two number to multiply : ");
    scanf("%d %d",&a,&b);
    printf("the Result is %d",a*b);
}
void div()
{
    float a,b;
    printf("\nenter two number to divide : ");
    scanf("%d %d",&a,&b);
    printf("the Result is %f",a/b);
}
