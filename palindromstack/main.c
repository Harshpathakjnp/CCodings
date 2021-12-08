#include<stdio.h>
int main (){
int i;
   int a[]={1,3,8,3,3,1};
    int n=sizeof(a)/sizeof(int);

   for(i=0;i<=(n/2)-1;i++)
    {
   if(a[i]!=a[n-i-1])
       {
           printf("not palindrome");
           return 0;
       }
    }
        printf("palindrome");
        return 0;
   }
