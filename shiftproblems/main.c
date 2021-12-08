#include <stdio.h>
#include <stdlib.h>
void binary(int y);
int main()
{
    int choice,a[10],i,j=0;
    int x,y;
    while(1)
    {
    printf("\n0- Quit\n1- Read Inputs\n2- decimal to binary\n3- binary to decimal\n4- >>\n5- <<\n6- ||\n7- && \n8- XOR\nEnter the Choice - ");
    scanf("%d",&choice);
    printf("Your Choice is %d\n",choice);
    switch (choice)
    {
    case 0:
        return 0;
    case 1:
        {
            printf("enter the input : ");
            scanf("%d",&y);
            break;
        }

    case 2:
        {
            //now converting decimal to binary.....
            binary(y);
            break;

        }
    case 3:
        {

           int num  ,res =0 , div=1,rem;
           printf("enter number in binary to convert to decimal :");
           scanf("%d",&num);
    while(num>0)
    {
    rem = num % 10;
    num = num/10;
    res = res + (rem*div);
    div = div*2;
    }
    printf("%d",res);
    break;
        }



    case 4:
        {

            printf("how much to shift :");
            scanf("%d",&x);
            for(i=1;i<=x;i++)
            {
               j= j+ y*2;
            }
            printf("after leftshift of %d we get %d",y,j);
        }
    case 5:
        {
             printf("how much to shift :");
            scanf("%d",&x);
            for(i=1;i<=x;i++)
            {
               j= j+ y/
               2;
            }
            printf("after rightshift of %d we get %d",y,j);
        }
    case 6:
        {
            int n,p,n1;
            printf("Enter two numbers :");
            scanf("%d %d",&n,&p);
            n1 = n | p ;
            printf("OR of %d and %d is %d ",n,p,n1);
        }
    case 7:
        {
          int n,p,n1;
            printf("Enter two numbers :");
            scanf("%d %d",&n,&p);
            n1 = n & p ;
            printf("AND of %d and %d is %d ",n,p,n1);
        }
    case 8:
        {
          int n,p,n1;
            printf("Enter two numbers :");
            scanf("%d %d",&n,&p);
            n1 = n ^ p ;
            printf("XOR of %d and %d is %d ",n,p,n1);
        }

    }
  }


}



void binary(int y)
{
    int i,a[10];
    for(i=0;y>0;i++)
    {
        a[i]=y%2;
        y=y/2;
    }
    printf("Binary of given number is ");
    for(i=i-1;i>=0;i--)
    {
        printf("%d",a[i]);
    }
}
