#include <stdio.h>

;
int main()
{
    int rupees=1300;

rupees=rupees-100;
    int x=rupees / 500;
    rupees = rupees % 500;
    if(x>0)
    printf("%d x 500\n",x);



    x=rupees / 200;
    rupees = rupees % 200;
    if(x>0)
    printf("%d x 200\n",x);

    x=rupees / 100;
    rupees = rupees % 100;
    if(x>0)
    printf("%d x 100\n",x);
 x=rupees / 10;
    rupees = rupees % 10;
    printf("%d x 10\n",10 + x);




    return 0;
}
