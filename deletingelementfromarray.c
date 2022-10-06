#include <stdio.h> 
 #include <conio.h> 
 int main() 
 { 
     int i, n, pos, arr [10]; 
     printf("\n Enter the size of the array:"); 
     scanf("%d",&n); 
     printf("\n Enter the elements of the array: "); 
   for(i=0;i<n;i++) 
   { 
     scanf("%d", &arr[i] ); 
   } 
     printf("\n Enter the position from which the number has to be deleted: "); 
     scanf ("%d", &pos ); 
   for(i= pos; i<n;i++) 
   { 
     arr[i] = arr [i+1]; 
     n--; 
     printf("\n The array after deletion is:"); 
   } 
     for(i=0;i<=n;i++) 
     { 
       printf("\n Arr[%d] = %d", i, arr[i]); 
     } 
  
       return 0; 
 }