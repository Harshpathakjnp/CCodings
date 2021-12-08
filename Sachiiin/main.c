#include <stdio.h>
int main()
{
    system("color cf");
    int a[]={1,2,3,54,4,7,8,1},i,j,k,n;
   int n1=sizeof(a)/sizeof(int);
   while(1)
   {
   printf("\n0-exit\n1-printall\n2-print reverse\n3-find max\n4-find min");
   printf("\n5-Selection sort\n6-Bubble sort\n7-Insertion sort\n8-Quick sort\nEnter your choice - ");
   scanf("%d",&n);
   switch (n)
   {
   case 0:
    {
     return 0;
    }
    case 1:
    {
     for(i=0;i<=n1-1;i++)
     {
         printf("%d,",a[i]);

     }
      break;
    }
    case 2:
    {
     for(i=n1-1;i>=0;i--)
     {
         printf("%d,",a[i]);

     }
    break;
    }
    case 3:
    {
     int max = a[0];
    for(i=1;i<=n1-1;i++)
    {
        if(max<a[i])
        {
        max=a[i];

        }
    }
    printf("max = %d",max);
    break;

   }
    case 4:
    {
     int min = a[0];
    for(i=1;i<=n1-1;i++)
    {
        if(min>a[i])
        {
        min=a[i];

        }
    }
    printf("min = %d",min);
    break;
   }
    case 5:
        {
        int i,min,position;
        int t,j;

    for(j=0;j<=n-2;j++)
    {
        min=a[j];
        position=j;
    for (i=j+1;i<=n-1;i++)
    {
        if(a[i]<min)
        {
            min = a[i];
            position = i;
        }
    }
    t=a[j];
    a[j]=a[position];
    a[position]=t;
    }
    for(i=0;i<=n-1;i++)
    {
        printf("%d,",a[i]);
    }
        }






   }

   }

}








