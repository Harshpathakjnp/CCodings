#include <stdio.h>
int main()
{
    int n ,reverse=0;
    printf("enter number to reverse");
    scanf("%d",&n);
    printf("before reverse = %d\n",n);
    while(n!=0){
        reverse = reverse*10 + n%10;
        n=n/10;
    }
    printf("after reverse = %d",reverse);
    return 0;
}
