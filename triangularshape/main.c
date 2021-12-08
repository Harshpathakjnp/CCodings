#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    left        right
    0           3

    */
    int n=5;
   int a[10][10]={0};
   int i,j;
   int left=0,top=0,right=n-1,bottom=n-1;
   int count=1;
    while(1)
    {
        for(i=left;i<=right;i++)
        {
            a[top][i]=count;
            count++;


        }
        if(count>n*n)
            break;
        top++;

         for(i=top;i<=bottom;i++)
        {
            a[i][right]=count;
            count++;


        }
        if(count>n*n)
            break;
        right--;


 for(i=right;i>=left;i--)
        {
            a[bottom][i]=count;
            count++;


        }
        if(count>n*n)
            break;
        bottom--;

 for(i=bottom;i>=top;i--)
        {
            a[i][left]=count;
            count++;


        }
        if(count>n*n)
            break;
        left++;
    }





   for(i=0;i<=n-1;i++)
   {
       for(j=0;j<=n-1;j++)
       {
    printf("%4d",a[i][j]);
       }printf("\n");
   }

}
