//DATASTRUCTURE 
//display count insert delete
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;  //4
    struct node *next; //8
};
 
 typedef struct node NODE;
 typedef struct node *PNODE;
 typedef struct node **PPNODE;

void InsertFirst(PPNODE head, int no)
{
      //allocate memory for node
    //initialise that node
     //check LL is empty or not
      //if LL is empty them new nodes is first 
   //so update its address in first pointer through head
   //or store address of first in nxt pointer
     //upate first pointer through head
   PNODE newn=NULL;

   newn= (PNODE)malloc(sizeof(NODE));//NEWN=(STRUCT NODE*)malloc(12);
   
   newn->data= no;   //initialisation
   newn->next= NULL;
  
   if(*head==NULL) //ll is empty
   {
        *head= newn;

   }
   else         //LL has atleas one node
   {
        newn ->next=*head;
        *head =newn;
   }
}
void InsertLast(PPNODE head, int no)
{
      //allocate memory for node
    //initialise that node
     //check LL is empty then
      //travel till last node
   //or store address of node in nxt pointer of last node
    
   PNODE newn=NULL;

   newn= (PNODE)malloc(sizeof(NODE));//NEWN=(STRUCT NODE*)malloc(12);
   
   newn->data= no;   //initialisation
   newn->next= NULL;
  
   if(*head==NULL) //ll is empty
   {
        *head= newn;
   }
   else         //LL has atleas one node
   {
        //code
   }
}
void Display(PNODE head)
 {
  printf("elemenys from linked list are: \n");
   
   while(head!=NULL)
   {
       printf("|%d|->",head ->data);
       head= head->next;
   }
   printf("NULL \n");
 }

int Count(PNODE head)
 {
   int iCnt=0;

   while(head!=NULL)
   {
      iCnt++;
      head= head->next;
   }
   return iCnt;
 }

int main()
{
    int iRet=0;
  PNODE first= NULL; 

  InsertFirst(&first,101);   //call by address
  InsertFirst(&first,51);
  InsertFirst(&first,21);
  InsertFirst(&first,11);

  Display(first);  //call by value

  iRet=Count(first);
  printf("number of elements are: %d \n", iRet);

  InsertFirst(&first,1);
  Display(first);  //call by value

  iRet=Count(first);
  printf("number of elements are: %d \n", iRet);

  return 0;

}