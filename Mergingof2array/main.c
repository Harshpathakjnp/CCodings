#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[]={2,4,7,9,1,3,5,7},i,j,c[10]={0};
   int l1=0,r1=3;
   int l2=4,r2=7;
    int n=sizeof(a)/sizeof(int);
    i=0;
    j=l2;
    int k=0;
    while(i<=r1 && j<=r2)
    {
    if(i<=r1)
        {
        for(;i<=r1;i++)
        {
            c[k]=a[i];
            k++;
        }
        }
        else{
           for(;j<=r2;j++)
           {
              c[k]=a[j];
               k++;

           }
        }
    }
        if(i<r2)
        {
            for(;i<=n-1;i++)
            {
                c[k]=a[i];
                k++;
            }
        }
        else{
            for(;j<=r2;j++)
                c[k]=a[j];
                k++;
        }


    for(k=0;k<=n-1;k++)
  	printf("%d,",c[k]);

}







/*
   for(i = 0; i < n1; i++)
  	{
      	c[i] = a[i];
  	}
  	for(j = 4; j < 9; j++)
  	{
      	c[j] = b[j-4];
  	}

  	for(i=0;i<n3;i++)
  	printf("%d,",c[i]);


} */
