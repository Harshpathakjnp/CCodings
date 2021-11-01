#include <stdio.h>
int isDateValid(int x,int y,int z);
int main()
{
   int y = isDateValid(05,12,2012);
   printf("%d",y);
}
int isDateValid(int x ,int y,int z)
{
    if(z>=1)
    {
         if(y > 0 && y <= 12)
        {
            if(x>0 && x<=30)
               return 1;


        }

    }
    return 0;
}
