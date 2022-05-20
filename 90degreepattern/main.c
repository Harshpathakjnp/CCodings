#include<stdio.h>
int main() {
   int i, j, rows=4;

   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= i; ++j) {
         printf("* ");
      }
      printf("\n");
   }

      for (i = 1; i <= rows; ++i) {
      for (j = 1; j >= 1; j--) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}
