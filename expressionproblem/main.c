#include <stdio.h>
#include <stdlib.h>
#define size 15
typedef struct{
int a[10];
int top;
}stack;
void push(stack* st,int data);
int pop(stack* st);
int isEmpty(stack st);
void init(stack* st);
int main()
{
    stack s;
    s.top=0;
    int left,right;
 char exp[]="a*(b+c-d*(x+y))";
 int n=sizeof(exp)/sizeof(char),i;
 char ch;

 for(i=0;i<=n-2;i++)
    {
         printf("%c",exp[i]);
    }
    printf("\n");
    for(i=0;i<=n-1;i++)
    {
        ch=exp[i];
    if(ch=='(')
            push(&s,i);
    if(ch==')')
    {
          left=  pop(&s);
          right=i;
          printf("From %d to %d\n",left,right);
          for(i=left;i<=right;i++)
                printf("%c",exp[i]);
            printf("\n");
    }

    }
}

//---------------------------------------------------------------------------------

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

//-----------------------------------------------------------------------------------

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

//----------------------------------------------------------------------------------

int isEmpty(stack st)
{
    if(st.top<=0)
        return 1;
    else
        return 0;
}

//----------------------------------------------------------------------------------

void init(stack* st)
{
    st->top=0;
}
