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
while(n>=1)
{
printf("First player choose number between 1 and 5 : ");
scanf("%d",&x);
while(x>5)
{
    printf("wrong input \nYour turn gone  :");
    x=0;
    break;
}
n=n-x;
printf("%d\n",n);
if(n<=0)
{
    printf(" first loss the game ");
    return 0;
}
printf("Second player choose number between 1 and 5 : ");
scanf("%d",&x);
n=n-x;
printf("%d\n",n);
if(n<=0)
{
    printf("second loss the game ");
    return 0;
}
}

}
