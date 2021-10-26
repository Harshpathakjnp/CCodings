#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row ,column ,n=11;
    for(row=1;row<=n;row++)
    {
        for(column=1;column<=n;column++)
        {

        int condition = row ==1 || column ==1 ;
        if(condition)
            printf("0");
        else
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
