//parat 35 solve pn question different
//consider singly linear linked list to solve below problem statement 
//Count odd numbers , count nodes containing odd values 

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
      printf(" | %d |->",temp->data);
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

int CountOdd(PNODE head)
{
   PNODE temp = head;
   int iCount =0;

   while(temp != NULL)
   {
      if((temp->data % 2) != 0 )
      {
         iCount++;
      }
      temp = temp->next;
   }
   return iCount;
}


int main()
{
   PNODE head = NULL ;
   BOOL bRet = FALSE;
   int iSize = 0 ,iNo = 0,iRet = 0;

   printf("Enter number of elements :");
   scanf("%d",&iSize);

   printf("Enter elements\n");

   for(int i =0 ;i < iSize;i++)
   {
      scanf("%d",&iNo);
      InsertFirst(&head,iNo);
   }

   Display(head);
  
   iRet = CountOdd(head); 
   printf("Even number count are %d",iRet);
   return 0;
}
/*
Enter number of elements :4
Enter elements
2
4
15
17
 | 17 |-> | 15 |-> | 4 |-> | 2 |->NULL
Even number count are 2
*/
