#include <stdio.h>
int main() {
  int i;

   int a[]={1,3,1};
    int n=sizeof(a)/sizeof(int);
   for(i=0;i<=((n/2)-1);i++) {
   if(a[i]!=a[n-1])
       {
           printf("not polindrome");
           return 0;
       }
   }
       printf("polindrom");

   }

