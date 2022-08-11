//SINGLY LINKED LIST
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;           // 4
    struct node *next;  // 8
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head, int no)
{
    // Allocate memory for node (dynamically)
    // Initialise that node

    // Check whether LL is empty or not
    // If LL is empty then new node is the first node so update its address in first pointer through head

    // If LL is not empty then store the address of first node in the next pointer of our new node
    // update the first pointer thruogh head
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));     // newn = (struct node *)malloc(12);

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)   // LL is empty
    {
        *head = newn;
    }
    else        // LL contains atleast one node
    {
        newn->next = *head;
        *head = newn;
    }
}

void InsertLast(PPNODE head, int no)
{
    // Allocate memory for node (dynamically)
    // Initialise that node

    // Check whether LL is empty or not
    // If LL is empty then new node is the first node so update its address in first pointer through head

    // If LL is not empty then
    // travel till last node of LL
    // store address of new node in the next pointer of last node

    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));     // newn = (struct node *)malloc(12);

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)   // LL is empty
    {
        *head = newn;
    }
    else        // LL contains atleast one node
    {
            // travel till last node
            // store address of new node in the next pointer of last node
          temp = *head;

          while(temp->next != NULL)
          {
            temp = temp->next;
          }
          temp->next = newn;
    }
}

void Display(PNODE head)
{
    printf("Elements from linked list are : \n");

    while(head != NULL)
    {
        printf("| %d |-> ",head->data);
        head = head -> next;
    printf("NULL\n");
    }
}

int Count(PNODE head)
{
    int iCnt = 0;

    while(head != NULL)
    {
        iCnt++;
        head = head -> next;
    }
    return iCnt;
}

void DeleteFirst(PPNODE head)   //delete
{
 //if LL is emptythen ,return
//if LL has atleast one node then store address of
//second node in first pointer through head
//and delete the first node

   if(*head==NULL)  //LL is empty
   {
       return;
   }
   else          //ll contains atleast one node
   {
        PNODE temp=*head;
       *head=*head->next;  //pointer points to dusra mulga
        free(temp)
   }
}

void DeleteLast(PPNODE head)
{
   
}





















  free(temp->next);
  temp->next=NULL;
 }
}

InsertAtPos(PPNODE head,int no, int pos)
{
    //consider 4 nodes

    //if pos invalid then return directly(<1 or>5)
    //if pos is 1 then call InsertFirst
    //if pos is N+1 then call InsertLast
    
    int size= 0;
    PNODE newn=NULL;
    PNODE temp= NULL;
    iCnt=0;
    size=Count(*head);

    if((pos<1)||(pos>(size+1)))   //
    {
        printf("position is invalid\n");
        return;
    }

    if(pos==1)
    {
        InsertFirst(head, no);
    }
    else if(pos==(size+1))
    {
        InsertLast(head,no);
    }
    else
    {
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));     // newn = (struct node *)malloc(12);

    newn->data = no;
    newn->next = NULL;

    temp=*head;

    for(iCnt=1; iCnt<pos-1; iCnt++)
    {
        temp=temp->next;
    }

     newn->next=temp->next;
     temp->next=newn;
    }
}

void DeleteAtPos(PPNODEhead,int pos)
{
    //consider 4 nodes

    //if pos invalid then return directly(<1 or>4)
    //if pos is 1 then call DeleteFirst
    //if pos is N then call DeleteLast  (position is 4)
    
    int size= 0; iCnt=0;
    PNODE tempdelete; 
    PNODE temp= NULL;
    size=Count(*head);

    if((pos<1)||(pos>(size)))   //
    {
        printf("position is invalid\n");
        return;
    }

    if(pos==1)
    {
        DeleteFirst(head);
    }
    else if(pos==size)
    {
        DeleteLast(head,no);
    }
    else
    {
    temp=*head;

    for(iCnt=1; iCnt<pos-1; iCnt++)
    {
        temp=temp->next;
    }

      tempdelete=temp->next;
      temp->next=temp->next->next;
      free(tempdelete);
    }
}



int main()
{
    int iRet = 0;
    PNODE first = NULL;

    InsertFirst(&first,101);    // call by address
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    InsertAtPos(&first,75,3);

    DeleteAtPos(&first,3);

    Display(first);     // Call by value

    iRet = Count(first);
    printf("Number of nodes are  : %d\n",iRet);

    InsertFirst(&first,1);

    Display(first);     // Call by value

    iRet = Count(first);
    printf("Number of nodes are  : %d\n",iRet);

    InsertLast(&first,111);
    InsertLast(&first,121);

    Display(first);     // Call by value

    iRet = Count(first);
    printf("Number of nodes are  : %d\n",iRet);

    return 0;
}