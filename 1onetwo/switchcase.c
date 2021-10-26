#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("Enter months number: ");
    scanf("%d",&x);
  switch(x)
  {


    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
    printf("31 Days");
    break;
    case 2:
        printf("enter year ");
        scanf("%d",&y);
        if(y % 400 == 0 || y % 4 == 0 && y % 100 != 0  )
           printf("29 days ");
        else
            printf("28 days ");

    break;
    case 4:
    case 6:
    case 9:
    case 11:
    printf("30 Days");
    break;
    default:
    printf("Error");


  }
  /*
    if(x==0)
    {
        printf("zero");
    }
     else if(x==1)
    {
        printf("one");
    }
     else if(x==2)
    {
        printf("two");
    }
     else if(x==3)
    {
        printf("three");
    }
     else if(x==4)
    {
        printf("four");
    }
     else if(x==5)
    {
        printf("five");
    }
     else if(x==6)
    {
        printf("six");
    }
     else if(x==7)
    {
        printf("seven");
    }
     else if(x==8)
    {
        printf("eight");
    }
     else if(x==9)
    {
        printf("nine");
    }
     else
    {
        printf("Error");
    }
*/
    return 0;
}
