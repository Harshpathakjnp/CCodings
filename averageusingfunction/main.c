#include <stdio.h>
#include <stdlib.h>
/*
0
00
000
0000

*/
int main()
{
    printNHello();
    printNHello(1);
    printf("\nHi\n");
    printNMessage(3,"C ++");



}
void printNMessage(int n, char message[])
{
    for(int i=1;i<=n;i++)
        printf("%s\n",message);
}
void printNHello(int n)
{
    for(int i=1;i<=n;i++)
        printf("Hello\n");
}
void printHello()
{

    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
    printf("Hello\n");
}

