#include <stdio.h>
#include <stdlib.h>

int main()
{
    char grade ;
    printf("Enter the Grade : ");
    scanf("%c",&grade);
    switch(grade)
    {
    case 'A':
        printf("Excellent");
        break;
    case 'B':
        printf("Very Good");
        break;
    case 'C':
        printf("Pass");
        break;
    case 'D':
        printf("Promoted");
        break;
    case 'E':
        printf("Fail");
        break;
    default :
        printf("wrong input");
        break;
    }
    return 0;
}
