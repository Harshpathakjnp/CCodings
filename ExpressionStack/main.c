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
int isEmpty(stack st);
int main()
{
    stack s;
    char exp[]="(a+b(c-d)+ (a+b))";
    int n=sizeof(exp)/sizeof(char),i;
    int pos,j;
    char ch;
    init(&s);
    for(i=0;i<=n-2;i++)
    {
        ch=exp[i];
        if(ch=='(')
            push(&s,i);
        if(ch==')')
        {
            pos=pop(&s);
            printf("\n%d to %d\n",pos,i);
            for(j=pos;j<=i;j++)
                printf("%c",exp[j]);
            printf("\n");

        }
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
