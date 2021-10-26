#include <stdio.h>
int main()   {

    int row,col,n=7;
int mid=(n+1)/2;

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            int condition=row + col==4 || row + col==6 || row+col==8;
            if(condition)
            printf("0");
            else
                printf(" ");
            }
    printf("\n");
    }
    return 0;
}

