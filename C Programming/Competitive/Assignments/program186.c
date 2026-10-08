//parat 35 solve pn question different
//consider singly linear linked list to solve below problem statement 
//Search an element , check whether a number is present 

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

typedef struct node NODE;
typedef struct node* PNODE;

struct node
{
   int data;
   PNODE next;

};

void Display(PNODE head)
{
   PNODE temp = head;
   while(temp != NULL)
   {
      printf(" | %d |",temp->data);
      temp = temp->next;
   }
    printf("NULL\n");
}

void InsertFirst(PNODE *first ,int iNo)
{
   PNODE newn = NULL;
   newn = (PNODE)malloc(sizeof(NODE));

   newn->data = iNo;
   newn->next = NULL;

   if(*first == NULL)
   {
       *first = newn;
   }
   else
   {
      newn->next = *first;
      *first = newn;
   }
}

BOOL Search(PNODE head ,int iNo)
{
   PNODE temp = head;
   while(temp != 0)
   {
     if(temp->data == iNo) 
     {
       return TRUE;
     }
     temp = temp->next;
   }

   return FALSE;

}
int main()
{
   PNODE head = NULL ;
   BOOL bRet = FALSE;
   InsertFirst(&head,10);
   InsertFirst(&head,20);
   InsertFirst(&head,30);
   InsertFirst(&head,40);

   Display(head);

   bRet =Search(head ,0);
   if(bRet == TRUE)
   {
      printf("Number is present");
   }
   else
   {
      printf("Number is not present");
   }
   return 0;
}