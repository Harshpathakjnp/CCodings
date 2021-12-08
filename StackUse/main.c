#include <stdio.h>
#include <stdlib.h>
int stack[10];
int top=0;
int capacity=10;
void push(int data);
int pop();
int isEmpty();

int main()
{
    int i;
    for(i=1;i<=8;i++)
        push(i);

    while(!isEmpty())
        printf("%d,",pop());
    return 0;
}
void push(int data)
{
    if(top>=capacity)
    {
        printf("Stack is full");
        return;

    }
    stack[top]=data;
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
    return stack[top];

}
int isEmpty()
{
    return top<=0;

}


int pop()
{
    if(top<=0)
    {
        printf("Stack is empty");
        return -1;
    }
    top--;
    return stack[top];

}
int isEmpty()
{
    return top<=0;

}

