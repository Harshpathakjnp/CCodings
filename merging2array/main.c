#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[]={2,4,7,9,1,3,5,7},i,j,c[10]={0};
    int n1=sizeof(a)/sizeof(int);

    //int n3=n1+n2;
    i=0;
    j=0;
    int k=0;
    while(i<=n1-1 && j<=n2-1)
    if(i<=n1-1)
        {
        for(;i<=n1-1;i++)
        {
            c[k]=a[i];
            k++;

        }
        }
        else{
           for(;j<=n2-1;j++)
           {
              c[k]=a[j];
            k++;
           }
        }


    for(k=0;k<=(n1)-1;k++)
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
