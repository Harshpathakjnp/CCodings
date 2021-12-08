#include <stdio.h>
#include <stdlib.h>
void fun(int a);
int main()
{
    int a,b,c,d,e;
    printf("enter the input :");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    fun(a);
    fun(b);
    fun(c);
    fun(d);
    fun(e);


}

void fun(int a)
{

    switch (a)
    {
    case 0:
        return 0;
    case 1:
        printf("        *\n");
        break;
    case 2:
        printf("      * * *\n");
        break;
    case 3:
        printf("    * * * * *\n");
        break;
    case 4:
        printf("  * * * * * * *\n");
        break;
    case 5:
        printf("* * * * * * * * *\n");
        break;
    }
}
