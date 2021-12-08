                                            //we have made a game in c called Tic Tac Toe ....
#include <stdio.h>
#include <stdlib.h>
int board[3][3]={0};                        // we have used 2d array for making table for tic tac toe..
int gameStatus();
void table();
void readMove();
int main()
{
    printf("     WELCOME TO TIC TAC TOE GAME \n\n\n");
int player=1,status;                        //initially player = 1.........
system("color 8f");
table(board);
while(1)
      {
readMove(player);
system("color 9f");
table();
status=gameStatus();
system("color df");
if(status==1)                               // if status =1 then it will print Player1 wins the game  ..
{
    printf("Player1 wins");
    system("color 2f");
    return;
}
if(status==2)                               // if status =2 then it will print Player2 wins the game  ..
{
    printf("Player2 wins");
    system("color 6f");
    return;
}
player=3-player;                            //this statement is written to change the value of player ..
      }

return 0;
}

int gameStatus()
{
    int player1count=0,player2count=0,blockedcount=0;       // this we have used to tell how player wins
    int xpos[]={0,0,0};
    int ypos[]={0,1,2};
    int i,value,px,py;


    //1*********************************************************************************
    for(i=0;i<=2;i++)
    {

           px=xpos[i];
           py=ypos[i];
           value=board[px][py];
           if(value==1)
            player1count++;
           if(value==2)
            player2count++;
    }





       if(player1count>0 && player2count>0)
        blockedcount++;
if(player1count==3)
    return 1;
if(player2count==3)
    return 2;


    if(blockedcount==8)
        return 3;
//2*********************************************************************************
player1count=0;player2count=0;blockedcount=0;
xpos[0]=0;
xpos[1]=0;
xpos[2]=0;
ypos[0]=0;
ypos[1]=1;
ypos[2]=2;
 for(i=0;i<=2;i++)
    {

           px=xpos[i];
           py=ypos[i];
           value=board[py][px];
           if(value==1)
            player1count++;
           if(value==2)
            player2count++;
    }





       if(player1count>0 && player2count>0)
        blockedcount++;
if(player1count==3)
    return 1;
if(player2count==3)
    return 2;


    if(blockedcount==8)
        return 3;


//3*********************************************************************************
player1count=0;player2count=0;blockedcount=0;
xpos[0]=0;
xpos[1]=1;
xpos[2]=2;
ypos[0]=0;
ypos[1]=1;
ypos[2]=2;
 for(i=0;i<=2;i++)
    {

           px=xpos[i];
           py=ypos[i];
           value=board[py][px];
           if(value==1)
            player1count++;
           if(value==2)
            player2count++;
    }





       if(player1count>0 && player2count>0)
        blockedcount++;
if(player1count==3)
    return 1;
if(player2count==3)
    return 2;


    if(blockedcount==8)
        return 3;



//4*********************************************************************************
player1count=0;player2count=0;blockedcount=0;
xpos[0]=1;
xpos[1]=1;
xpos[2]=1;
ypos[0]=0;
ypos[1]=1;
ypos[2]=2;
 for(i=0;i<=2;i++)
    {

           px=xpos[i];
           py=ypos[i];
           value=board[px][py];
           if(value==1)
            player1count++;
           if(value==2)
            player2count++;
    }





       if(player1count>0 && player2count>0)
        blockedcount++;
if(player1count==3)
    return 1;
if(player2count==3)
    return 2;


    if(blockedcount==8)
        return 3;


//5*********************************************************************************
player1count=0;player2count=0;blockedcount=0;
xpos[0]=2;
xpos[1]=2;
xpos[2]=2;
ypos[0]=0;
ypos[1]=1;
ypos[2]=2;
 for(i=0;i<=2;i++)
    {

           px=xpos[i];
           py=ypos[i];
           value=board[px][py];
           if(value==1)
            player1count++;
           if(value==2)
            player2count++;
    }





       if(player1count>0 && player2count>0)
        blockedcount++;
if(player1count==3)
    return 1;
if(player2count==3)
    return 2;


    if(blockedcount==8)
        return 3;


//6*********************************************************************************
player1count=0;player2count=0;blockedcount=0;
xpos[0]=0;
xpos[1]=1;
xpos[2]=2;
ypos[0]=1;
ypos[1]=1;
ypos[2]=1;
 for(i=0;i<=2;i++)
    {

           px=xpos[i];
           py=ypos[i];
           value=board[px][py];
           if(value==1)
            player1count++;
           if(value==2)
            player2count++;
    }





       if(player1count>0 && player2count>0)
        blockedcount++;
if(player1count==3)
    return 1;
if(player2count==3)
    return 2;


    if(blockedcount==8)
        return 3;


//7*********************************************************************************
player1count=0;player2count=0;blockedcount=0;
xpos[0]=0;
xpos[1]=1;
xpos[2]=2;
ypos[0]=2;
ypos[1]=2;
ypos[2]=2;
 for(i=0;i<=2;i++)
    {

           px=xpos[i];
           py=ypos[i];
           value=board[px][py];
           if(value==1)
            player1count++;
           if(value==2)
            player2count++;
    }





       if(player1count>0 && player2count>0)
        blockedcount++;
if(player1count==3)
    return 1;
if(player2count==3)
    return 2;


    if(blockedcount==8)
        return 3;



//*********************************************************************************
player1count=0;player2count=0;blockedcount=0;
xpos[0]=0;
xpos[1]=1;
xpos[2]=2;
ypos[0]=2;
ypos[1]=1;
ypos[2]=0;
 for(i=0;i<=2;i++)
    {

           px=xpos[i];
           py=ypos[i];
           value=board[px][py];
           if(value==1)
            player1count++;
           if(value==2)
            player2count++;
    }





       if(player1count>0 && player2count>0)
        blockedcount++;
if(player1count==3)
    return 1;
if(player2count==3)
    return 2;


    if(blockedcount==8)
        return 3;



    return 0;



    }



void readMove(int player)
{
    int y,x,value;
    printf("Player %d Please enter Y and X\n",player);
    scanf("%d%d",&y,&x);


        while(1)
        {
            if(x>3 || y>3 || x<1 || y<1)                    //if we will enter wrong input then this will print
        {
           printf("Wrong Input \n");
           printf("Player %d Please enter Y and X\n",player);   // after giving wrong input players have to reenter
            scanf("%d%d",&y,&x);

        }
          value=  board[y-1][x-1];
          if(value!=0)                                  // we have used this if that place is already occupied by other value
          {
              printf("Already occupied \n");
                     x=-9;
              continue;
          }
        break;

        }
    board[y-1][x-1]=player;
}

void table()
{
int i,j,value;
char ch;
  for(i=0;i<=2;i++)
  {
      for(j=0;j<=2;j++)
      {

          value=board[i][j];
          if(value==0)
            ch='_';
          if(value==1)
            ch='0';
          if(value==2)
            ch='X';

          printf("  %3c",ch);
      }printf("\n\n\n");
  }

}
