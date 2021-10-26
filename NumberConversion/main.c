#include <stdio.h>
#include <stdlib.h>
void f(int n,int base);
//1111011
//64 + 32 + 16 + 8 + 2+1
int main()
{
    int n,base;
    printf("Enter n and base\n");
    scanf("%d%d",&n,&base);
f(n,base);
    return 0;
}
void f(int n,int base)
{
    if(n<=0)
    {
        return;
    }
    int rem=n%base;

    f(n/base,base);
    if(rem<=9)
printf("%d",rem);
else
{
    rem='A' + rem-10;
    printf("%c",rem);

}
}
