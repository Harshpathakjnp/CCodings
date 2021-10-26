#include <stdio.h>
int main() {
    int y;
    printf("Enter Number : ");
    scanf("%d",&y);
    switch(y % 400){
    case 0:
    printf("Leap Year");
    break;
    default:
    switch(y % 4)
    {
        case 0:
            switch(y % 100)
            {
                case 0:
                printf("not leap year");
                break;
                default:
                    printf("leap year");
                    break;
            }



        break;
        default:
            printf("not leap year");
break;
    }




        break;
         }



    return 0; }
