#include <stdio.h>
#include <stdlib.h>
int main()
{
    system("color 4f");
char player1[10],player2[10],n=21,x;
printf("Enter the name of first player : ");
scanf("%s",&player1);
printf("Enter the name of second player : ");
scanf("%s",&player2);
printf("\n");
while(n>=1 )
{
printf("first choose number between 1 and 5 : ");
scanf("%d",&x);
while(x>5 || x<=0)
{
    printf("wrong input \nReenter   :");
    printf("first choose number between 1 and 5 : ");
    scanf("%d",&x);
}
n=n-x;
printf("Remaining stick = %d\n",n);
if(n<=0)
{
   printf("first Loss the game",player1);
    return 0;
}
printf("second choose number between 1 and 5 : ");
scanf("%d",&x);
while(x>5 || x<=0)
{
    printf("wrong input \nReenter   :");
    printf("second choose number between 1 and 5 : ");
    scanf("%d",&x);
}
n=n-x;
printf("Remaining stick = %d\n",n);
if(n<=0)
{
    printf("second Loss the game");
    return 0;
}
}

}
