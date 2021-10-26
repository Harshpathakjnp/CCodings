#include <stdio.h>
int main()   {

    int row,col,n=7;


    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            int condition=row+col<=n;
            if(condition)
            printf("0");
            else
                printf(" ");
            }
    printf("\n");
    }
    return 0;
}
