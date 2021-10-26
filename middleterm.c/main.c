#include <stdio.h>
int main()   {

    int row,col,n=11;
int mid=(n+1)/2;

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            int condition=row+col>=mid+1  && row + col <=n+mid  && row-col<=mid-1 && col-row<=mid-1;
            if(condition)
            printf("0");
            else
                printf(" ");
            }
    printf("\n");
    }
    return 0;
}
