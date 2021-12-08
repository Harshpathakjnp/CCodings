#include <stdio.h>
#include <stdlib.h>
void printmatrix(int x[5][5],int n,int m)
{
    for(int i=0; i<=n-1; i++)
    {
        for(int j=0; j<=m-1; j++)
        {
            printf("%d  ",x[i][j]);
        }
        printf("\n");
    }

}

//PrintMatrix(int m[10][10],int m,int n);
int main()
{
    int a[3][3]={{1,2,3},{1,2,3},{1,2,3}};

    printmatrix(a,3,3);
   /* int a[3][3]={{1,2,3},{2,3,1},{4,5,8}},i,j;
    int b[3][3]={{1,2,3},{2,3,4},{4,5,8}};
    int c[3][3];
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        c[i][j]=a[i][j]+b[i][j];
    }
    for(i=0;i<=2;i++)
    {
    for(j=0;j<=2;j++)
    printf("%4d",c[i][j]);
    printf("\n");
    }  */
    return 0;
}

