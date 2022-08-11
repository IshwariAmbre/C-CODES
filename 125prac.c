#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE head, no)
{
    PNODE newn =NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    //INITIALISE
    newn->data=no;
    newn->next=NULL;
    //check whether list is empty
    if(*head==NULL)
    {
        *head=newn;
    }
    else
    (
        newn->next=*head;
       *head= newn;
    )
}

void InsertLast(PPNODE head, no)
{
    PNODE newn=NULL;
    PNODE temp=NULL;

    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;
    //chk LL is empty or not if not travel till last node
    if(*head==NULL)
    {
        *head=newn;
    }
    else
    {
        temp=*head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newn;
    }

}
 void Display(PNODE head)
 {
     printf("elements from linked list are: \n");
     while(head!=NULL)
     {
         printf("|%d|->" head->data);
         head=head->next;
     }
     printf("NULL \n");

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
    PNODE temp=NULL;
    if(*head==NULL)
    {
        return;
    }
    else
    {
        temp=*head;
        *head=temp->next;
        free(temp);

    }
}

int main()
{
    PNODE first= NULL;
    int iRet=0;

    InsertFirst(&first,101);
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    Display(first);
    iRet=Count(first);
    printf("number of nodes are: %d \n", iRet);



    InsertLast(&first,111);
    InsertLast(&first,121);

    DeleteFirst(&first);
    DeleteFirst(&first);
     
     Display(first);
    return 0;
}