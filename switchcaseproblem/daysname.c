//in this video we will write a program to print days name ........
#include <stdio.h>
void main()
{
    int daynumber;
    printf("Enter DayNumber : ");
    scanf("%d",&daynumber);

    switch (daynumber)
    {
        case 1:
            printf("Sunday ");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday ");
            break;
        case 5:
            printf("Thursday");
            break;
        case 6:
            printf("Friday");
            break;
        case 7:
            printf("Saturday");
            break;



    }
}