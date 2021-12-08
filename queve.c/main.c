#include <stdio.h>
#include <stdlib.h>
void enque(int data);
int deque();
int isEmpty();
int isKhaali();
int front=0,back=0,count=0,choice,i,data;
int queue[4];
void push(int value);
int pop(),top=0;
int n=sizeof(queue)/sizeof(int);
int main()
{
int x;
while(1)
{
    printf("\n0- Exit\n1- Enque\n2- Deque\n3- Printall\n4- Stack\nEnter your Choice :");
    scanf("%d",&choice);
switch(choice)
{
case 0:
    {
        return 0;
    }
case 1:
    {
        printf("Enter a number \n");
        scanf("%d",&data);
        enque(data);
        break;
    }
case 2:
    {
       x= deque();
       printf("\n%d\n",x);
        break;
    }
case 3:
    {
        for(i=0;i<=n-1;i++)
        {
            printf("%d,",queue[i]);
        }
    }
    break;
case 4:
    {   int y;

        for(y=0;y<=n-1;y++)
        {
            printf("enter %d value :",y+1);
        scanf("%d",&queue[y]);
        push(queue[y]);
        }
    while(!isKhaali())
        printf("%d,",pop());
    break;
    }

}
}
}


void enque(int data)
{
    if(count>=n)
    {
        printf("Queue is Full ");
        return;
    }
    queue[back]=data;
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

int isEmpty()
{
    if(count<=0)
        return 1;
    else
        return 0;
}

void push(int value)
{
    if(top>=n)
    {
        printf("Stack is full");
        return;

    }
    queue[top]=value;
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
    return queue[top];

}

int isKhaali()
{
    return top<=0;

}
