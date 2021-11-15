#include<stdio.h>
int main(){
    int a,b,mult,choice,add,sub,div;
    system("color 9f");
    system("color 8f");
    system("color 7f");
    system("color 6f");

    printf("1.Add\n2.subtract\n3.multiply\n4.devide\nenter your choice : ");
    scanf("%d ",&choice);
    system("color 5f");
    switch (choice)
    {
    case 1:
        scanf("%d %d",&a,&b);
        printf("add = %d",a+b);
        break;
    case 2:
        scanf("%d %d",&a,&b);
        printf("subtract = %d",a-b);
        break;
    case 3:
        scanf("%d %d",&a,&b);
        printf("multiply = %d",a*b);
        break;
    case 4:
        scanf("%d %d",&a,&b);
        printf("devide = %d",a/b);
        break;
    default:
    printf("wrong choice");
    }
}
