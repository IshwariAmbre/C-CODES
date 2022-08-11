//data structure
//doubly linear linked list
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;  //previous declared
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;


void InsertFirst(PPNODE head, int no)
{
    PNODE newn=NULL;

    newn= (PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;  //*step for previous 

    if(*head==NULL)  //LL is empty
    {
       *head=newn;
    }
    else              //atleast one node
    {
        newn->next=*head;
        (*head)->prev=newn;  //*prev value
        *head=newn;   //shikshak 
    }
}

void InsertLast(PPNODE head,int no)
{
   PNODE newn=NULL;
   PNODE temp=NULL;

    newn= (PNODE)malloc(sizeof(NODE));

    newn->data=no;
    newn->next=NULL;
    newn->prev=NULL;  //*step for previous 

    if(*head==NULL)  //LL is empty
    {
       *head=newn;
    }
    else //atleast one node
    {
        PNODE *head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
        newn->prev=temp;   //*stored in temp
        //temp->next->prev=temp;
    }
}

void Display(PNODE head)
{
    printf("Elements from linked list are:\n");

    while(head !=NULL)
    {
        printf("|%d|<=>",head->data);
        head= head->next;
    }
    printf("NULL \n ");
}

int Count(PNODE head)
{
    int iCnt=0;

    while(head!=NULL)
    {
        iCnt++;
        head=head->next;
    }
    return iCnt;
}

void DeleteFirst(PPNODE head)
{
   if(*head==NULL)
   {
       return;   //if LL is empty
   }
   else
   {
       
   }
}

void DeleteLast(PPNODE head)
{

}
void InsertAtPos(PPNODE head, int no, int pos)
{

}
void DeleteAtPos(PPNODE head, int pos)
{

}




int main()
{
    PNODE first=NULL;
    int iRet=0;
    InsertFirst(&first,21);
    InsertFirst(&first,11);
     
     InsertLast(&first, 51);
     InsertLast(&first, 101);

     Display(first);
     iRet=Count(first);

     printf("Number of nodes are: %d \n", iRet);

    return 0;
}