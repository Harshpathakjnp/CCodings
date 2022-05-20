#include <stdio.h>
#include <stdlib.h>
#define size 10
typedef struct{
  int front;
  int back;
  int data[size] ;
  int count;
} queue;
void init(queue* q);
void enque(queue* q ,int data);
int deque(queue* q);
int isEmpty(queue q);
void display();
int main()
{
queue q1,q2;
int i,x,choice;
init(&q1);
/*
while(1)
{
    printf("\n0- Exit\n1- Enque\n2- Deque\n3- Printall\n\nEnter your Choice :");
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
        scanf("%d",&x);
        enque(&q1,x);
        break;
    }
case 2:
    {
       x= deque(&q1);
       printf("\n%d\n",x);
        break;
    }
case 3:
    {

    }


}
}
*/
enque(&q1,1);
enque(&q1,2);
enque(&q1,3);
enque(&q1,4);

while(!isEmpty(q1))
{

    printf("%d,",deque(&q1));
}

return 0;
}


void enque(queue* q,int data)
{
    if(q->count>=size)
    {
        printf("Queue is Full ");
        return;
    }
    q->data[q->back]=data;
    q->back=(q->back + 1) % size;
    q->count++;
}


int deque(queue* q)
{
    int x;
    if(q->count<=0)
    {
    printf("Queue is empty\n");
    return -1;
    }
    x=q->data[q->front];
    q->front=(q->front + 1) % size;
    q->count--;
    return x;
}

int isEmpty(queue q)
{
    if(q.count<=0)
        return 1;
    else
        return 0;
}
void init(queue* q)
{

    q->back=0;
    q->count=0;
    q->front=0;
}


void display()
{
    /*
int i;
for(i = (q->front); i <= q->back; i++)
printf("%d ", data[i]);
printf("n");
*/
}
