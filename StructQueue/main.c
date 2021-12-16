#include <stdio.h>
#include <stdlib.h>
#define size 10
typedef struct{
int a[10];
int top;
}stack;



void init(stack* st);
void push(stack* st,int data);
int pop(stack* st);
void enque(int value);
int deque();
int count =0;
int isEmpty(stack st);
int main()
{
    int i;
    stack s1,s2;
    init(&s1);
    init(&s2);
    for(i=1;i<=10;i++)
    {
        if(i % 2==0)
            push(&s1,i);
        else
            push(&s2,i);
    }
    while(!isEmpty(s1))
    {
        printf("%d,",pop(&s1));
    }
    printf("\n");
    while(!isEmpty(s2))
    {
        printf("%d,",pop(&s2));
    }


    return 0;
}
void init(stack* st)
{
    st->top=0;
}
void push(stack* st,int data)
{
    if(st->top>=size)
    {
        printf("Stack is full\n");
        return;

    }
    st->a[st->top]=data;
    st->top++;


}
int pop(stack* st)
{
    if(st->top<=0)
    {
        printf("Stack is empty\n");
        return -1;
    }
    st->top--;
    return st->a[st->top];
}
int isEmpty(stack st)
{
    if(st.top<=0)
        return 1;
    else
        return 0;
}



void enque(int value)
{
    if(count>=10)
    {
        printf("Queue is Full ");
        return;
    }
    queue[back]=value;
    back=(back + 1) % n;
    count++;
}


int deque()
{
    int x;
    if(count<=0)
    {
    printf("Queue is empty\n");
    return -1;
    }
    x=queue[front];
    front=(front + 1) % n;
    count--;
    return x;
}

