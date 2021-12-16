#include<stdio.h>
int main()
{

    int a,b,mult,choice,add,sub,div;
    printf("1.Add\n2.subtract\n3.multiply\n4.devide\nenter your choice : ");
    scanf("%d ",&choice);
    switch (choice)
    {
    case 1:
        printf("enter two number to add\n");
        scanf("%d %d",&a,&b);
        printf("add = %d",a+b);
        break;
    case 2:
        printf("enter two number to sub\n");
        scanf("%d %d",&a,&b);
        printf("subtract = %d",a-b);
        break;
    case 3:
        printf("enter two number to mult");
        scanf("%d %d",&a,&b);
        printf("multiply = %d",a*b);
        break;
    case 4:
        printf("enter two number to devide");
        scanf("%d %d",&a,&b);
        printf("devide = %d",a/b);
        break;
    default:
    printf("wrong choice");

    }
}
