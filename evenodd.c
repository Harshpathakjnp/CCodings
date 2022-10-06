// In this video we will check - number is even or odd
#include<stdio.h>
void main()
{
    int x;
    printf("Enter Number to Check Number is Even or Odd ");
    scanf("%d",&x);
    /* Agar number 2 se divisible hai to Even , agar 2 se divisible nhi hai to odd */
    if(x%2==0)
    {
        printf("Even Number");

    }
    else{
        printf("Odd Number");
    }
}
//Thankyou for watching this video...............