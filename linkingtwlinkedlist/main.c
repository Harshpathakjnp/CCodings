#include<stdio.h>
#include<stdlib.h>
typedef struct mynode{
    int data;
    struct mynode* next;
} node;
void addLast(node** head, int data);
void addFirst(node** head, int data);
void addSorted(node** head, int data);
void addAt(node** head, int val, int pos);
int getLength(node* head);
void traverse(node* head);
void search(node* head,int data);
void deleter(node** head,int data);
void reverse(node** head);
void search2(node* head,int data);
int position(node* head,int data);
void linking(node* head1,node* head2,node** linked);
void merge(node* head1,node* head2,node** sorter);
int main()
{
    node* hd1=NULL,*hd2=NULL, *linked=NULL , *sorter=NULL;
    addFirst(&hd1,16);
    addFirst(&hd1,15);
    addFirst(&hd1,13);
    addFirst(&hd1,12);

    addFirst(&hd2,14);
    addFirst(&hd2,10);
    addFirst(&hd2,9);
    traverse(hd1);
    traverse(hd2);

    linking(hd1,hd2,&linked);
    merge(hd1,hd2,&sorter);
    traverse(sorter);
    return 0;
}
void addFirst(node **head, int val)
{
    node *p = (node*)malloc(sizeof(node));
    p->data=val;
    p->next=NULL;


    p->next=*head;
    *head=p;


}
void addLast(node **head, int val)
{
    node *p = (node*)malloc(sizeof(node));
    p->data=val;
    p->next=NULL;
    if (*head ==NULL)
    {
        *head=p;
        return;
    }

    node *temp;
    temp=*head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=p;

}
void addSorted(node **head, int val)
{
    node *p = (node*)malloc(sizeof(node));
    p->data=val;
    p->next=NULL;
    if (*head==NULL)
    {
        *head=p;
        return;
    }
    node * temp1;
    temp1=*head;
    node* temp2;
    temp2=(*head)->next;
    if ((*head)->data > val)
    {
        p->next= (*head);
        *head=p;
        return;
    }


    while(temp2 !=NULL && temp2->data < val)

    {
        printf("hi");
        temp1=temp1->next;
        temp2=temp2->next;

    }
    temp1->next=p;
    p->next=temp2;


}
void traverse(node *head)
{
    while(head!=NULL)
    {
        printf("%d  ",head->data);
        head=head->next;
    }
    printf("\n");
}
int getLength(node* head)
{
    int length =0;

    while(head !=NULL)
    {
        length++;
        head=head->next;
    }
    return length;
}
void addAt(node ** head,int val, int pos)
{
    node *p = (node*)malloc(sizeof(node));
    p->data=val;
    p->next=NULL;
    int length=getLength((*head));
    printf("%d lenght",length);
    if (length<pos)
    {
        printf("Can't add to linked lisnt");
        return;
    }
    if(pos == 0)
    {
        p->next=*head;
        *head=p;
        return;
    }
    node *temp1;
    temp1=*head;
    node * temp2;
    temp2 =(*head)->next;
    int count=1;
    while(count < pos)
    {
        count++;
        temp1=temp1->next;
        temp2=temp2->next;

    }
    temp1->next=p;
    p->next=temp2;


}

void search(node* head,int data)
{
 while ((head)!=NULL)
 {
     if(head->data==data)
     {
         printf("Found the Number \n");
         return;
     }
     head=head->next;
 }
 printf("not found");
}


void deleter(node** head,int data)
{
    node* p;
    node* q;
if((*head)==NULL)//Zero nodes
    return;
if((*head)->data==data)//Data at first node
{
    p=*head;
    (*head)=(*head)->next;
    free(p);
    return;

}
p=(*head);
if(p->next==NULL)
    return;
//At least 2 nodes
q=p->next;
while(q->data!=data && q->next!=NULL)
{
    p=q;
    q=q->next;

}
if(q->data==data)
{
    p->next=q->next;
    free(q);

}


}

void reverse(node** head)
{
    node* p;
    node* q;
    node* r;
  if((*head)==NULL)//Zero nodes
    return;
   if((*head)->next==NULL)
    return;
    p=*head;
    q=p->next;
    if(q->next==NULL)
    {
        *head=q;
        q->next=p;
        p->next=NULL;
        return;
    }
    r=q->next;
    while(r->next!=NULL)
    {
        q->next=p;
        p=q;
        q=r;
        r=r->next;
    }
        q->next=p;
        r->next=q;
        (*head)->next=NULL;
        *head=r;
}


void search2(node* head,int data)
{
    int count=0;
   while (head !=NULL)
 {
     if(head->data==data)
     {

        count++;
     }
     head=head->next;
 }
printf(" - %d times",count);
}


int position(node* head,int data)
{

    int pos=0;
 while ((head)!=NULL)
 {
     if(head->data==data)
     {

         return pos;
     }
     pos++;
     head=head->next;
 }
 return -1;

}


void linking(node* head1,node* head2,node** linked)
{
    while(head1!=NULL)
    {
        //printf("%d  ",head1->data);
        addLast(linked,head1->data);
        head1=head1->next;


    }
    while(head2!=NULL)
    {
        addLast(linked,head2->data);
        head2=head2->next;
    }


}


void merge(node* head1,node* head2,node** sorter)
{
    while(head1!=NULL && head2!=NULL)
    {
        if(head1->data < head2->data)
                {
                        addLast(sorter,head1->data);
                        head1=head1->next;
                }

        else
                {
                        addLast(sorter,head2->data);
                        head2=head2->next;
                }
    }
    while(head1!=NULL)
    {
        addLast(sorter,head1->data);
        head1=head1->next;
    }
    while (head2!=NULL)
    {
        addLast(sorter,head2->data);
        head2=head2->next;

    }

}


