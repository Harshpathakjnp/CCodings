#include <stdio.h>
#include <stdlib.h>

int main()
{
    int choice;
    printf("1.Even/odd numbers\n2.Calculate Percent\nEnter your choice :");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
    {
        int x;
        printf("Enter number to know Even/Odd : ");
        scanf("%d",&x);
        if(x%2==0)
            printf("Number is Even ");

        else
            printf("Number is Odd ");

    }
    case 2:
    {
    system("color cf");
    int ppa,pom,bcom,cfoa,math,percent;
    printf("Enter marks of ppa,pom,bcom,cfoa,math : ");
    scanf("%d %d %d %d %d",&ppa,&pom,&bcom,&cfoa,&math);
    int sum = ppa + pom + bcom +cfoa + math;
    percent=sum*100/500;
    printf("\n");
    system("color 2f");
    if(percent>=80)
    {
        printf("%d - Excellent performance ",percent);
    }
    else if(percent>=70)
    {
        printf("%d - Very good performance ",percent);
    }
    else if(percent>=60)
    {
        printf("%d - Good ",percent);
    }
    else if(percent>=45)
    {
        printf("%d - Pass",percent);
    }
    else

        printf("%d - Fail ",percent);
    }
    }
system("color 9f");
}
