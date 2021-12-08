#include <stdio.h>
#include <stdlib.h>
/*
0-Exit
1-Push
Enter value 12

2-Pop
12
*/
int top=0;
int capacity =10;
int a[10];
int pop();
void push (int data);
int main()
{
int choice ;
while(1)
{
    printf("0.Exit\n1.Enter value to push \n2.pop the element : \n\n");
    printf("Enter Your Choice : ");
    scanf("%d",&choice);
    switch (choice)
    {
case 0:
    {
        return 0;
    }
case 1:
    {
    int i;
    printf("enter value : ");
    scanf("%d",&i);
    push(i);
    break;
    }
case 2:
    {
      if(!isEmpty())
        printf("%d,",pop());
        break;
    }
    }
}
}


void push(int data)
{
    if(top>=capacity)
    {
        printf("Stack is full");
        return;
    }
    a[top]=data;
    top++;

}
int pop()
{
    if(top<=0)
    {
        printf("Stack is empty");
        return -1;
    }
    top--;
    return a[top];

}
int isEmpty()
{
    return top<=0;

}

