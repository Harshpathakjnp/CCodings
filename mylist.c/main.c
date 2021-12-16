#include <stdio.h>
#include <stdlib.h>
typedef struct mynode
{
    int data;
    struct mynode * next;
} listnode;
void addFirstNode(listnode** hd,int data);
void addLastNode(listnode** hd,int data);
void addSortedNode(listnode** hd,int data);
void traverse(listnode* hd);

int main()
{
    listnode* hd=NULL;
    int choice,x,y;
while (1)
  {
  printf("0->  Exit\n1->  Add First\n5->  Add Last \n6->  Traverse\n\nEnter your Choice :");
  scanf("%d",&choice);
  switch (choice)
  {
  case 0:
    return 0;
  case 1:
    {
        system("color cf");
        printf("Enter the Value to Add :");
        scanf("%d",&x);
        addFirstNode(&hd,x);
        break;
    }
  case 5:
    {
        system("color af");
        printf("Enter the Value to Add :");
        scanf("%d",&y);
        addLastNode(&hd,y);
        break;
    }
  case 6:
    {
        system("color bf");
        traverse(hd);
        break;
    }
  }
}
}
//**********************************************************************

void addFirstNode(listnode** hd,int data)
{
    listnode *p=(listnode *)malloc(sizeof(listnode));
    p->data=data;
    p->next=*hd;
    *hd=p;
}

//************************************************************************

void traverse(listnode* hd)
{
    while(hd!=NULL)
    {
        printf("%d,",hd->data);
        hd=hd->next;
    }
}

//************************************************************************

void addLastNode(listnode** hd,int data)
{
    listnode *temp =(listnode*)malloc(sizeof(listnode));
    listnode *p;
    temp->data=data;
    temp->next=NULL;
    if((*hd)==NULL)
    {
        *hd=temp;
        return;
    }
    p=*hd;
    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=temp;
}


//*****************************************************************************
void addSortedNode(listnode** hd,int data)
{

}
