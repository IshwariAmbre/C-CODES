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
        //if(*head!=null)
        /* {
            newn->next=*head;
        (*head)->prev=newn;
        }
       *head=newn; 
       */
    }

}

void InsertLast(PPNODE head,int no)
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
    else //atleast one node
    {
        
    }

}

void Display(PNODE head)
{
    
}

int Count()
{
    return 0;
}

void DeleteFirst(PPNODE head)
{

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
     
    return 0;
}