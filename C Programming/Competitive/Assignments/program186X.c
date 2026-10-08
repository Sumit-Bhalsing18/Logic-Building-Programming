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
   int iSize = 0 ,iNo = 0 ,iNo2 = 0;

   printf("Enter number of elements :");
   scanf("%d",&iSize);

   printf("Enter elements\n");

   for(int i =0 ;i < iSize;i++)
   {
      scanf("%d",&iNo);
      InsertFirst(&head,iNo);
   }

   Display(head);

   printf("Enter search element");
   scanf("%d",&iNo2);

   bRet =Search(head ,iNo2);
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
/*
Enter number of elements :4
Enter elements
1
2
3
4
 | 4 | | 3 | | 2 | | 1 |NULL
Enter search element 4
Number is present*/