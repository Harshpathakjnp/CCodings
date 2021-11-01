#include <stdio.h>
int isLeapYear(int x);
int main()
{
    int y = isleapyear(1901);
    printf("%d",y);
}
int isleapyear(int x)
{
    if(x % 400 == 0 || (x % 4 == 0 && x % 100 !=0) )
    {
        return 1;
    }
    else
        return 0;
}
