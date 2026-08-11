#include<stdio.h>
#include<stdlib.h>

struct node
{
  int data;
  struct node* next;
  struct node* prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first)
{
   while(first != NULL)
   {
      printf("| %d | ->",first->data);
      first = first->next;
   }
   printf("NULL\n");
}
int Count(PNODE first)
{
  int iCount =0;
    while(first != NULL)
    {
      iCount++;
      first = first->next;
    }
    return iCount;
}
void InsertFirst(PPNODE first,int iNo)
{
   PNODE newn = NULL;
   newn = (PNODE)malloc(sizeof(NODE));  //20 byte allocate zali 

   newn->data = iNo;
   newn->next = NULL;
   newn->prev = NULL;

  if(*first == NULL)
  {
    *first = newn;
  }
  else
  {
    newn->next= *first;
    (*first)->prev = newn;
    *first = newn;
  }

}
void InsertLast(PPNODE first ,int iNo)
{
  PNODE newn = NULL;
  newn = (PNODE)malloc(sizeof(NODE));  //20 byte allocate zali 

   newn->data = iNo;
   newn->next = NULL;
   newn->prev = NULL;

  if(*first == NULL)
  {
    *first = newn;
  }
  else
  {
    PNODE temp = NULL;

    temp = *first;

    while(temp->next !=NULL)
    {
      temp = temp ->next;
    }
    temp->next = newn;
    newn->prev = temp;

  }
}
void InsertAtPos(PPNODE first ,int iNo , int iPos)
{
  int iCount = 0;
  int i =0;
  iCount = Count(*first);

  if(iPos < 1 || iPos > iCount + 1)
  {
    printf("Invalid position");
    return ;
  }
  if(iPos == 1)
  {
    InsertFirst(first , iNo);
  }
  else if(iPos == iCount + 1)
  {
    InsertLast(first , iNo);
  }
  else
  {
    PNODE newn = NULL;
    PNODE temp = NULL;

    temp = *first;
    newn =(PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;
  for( i =1 ; i< iPos -1 ; i++)
  {
    temp = temp->next;
  }
  newn->next = temp->next;
  //temp->next->prev = newn;
  temp->next = newn;
  newn->prev = temp;

  }
}
void DeleteFirst(PPNODE first)
{
    if(*first == NULL)
    {
      return ;
    }
    else if((*first)->next == NULL)
    {
      free((*first)->next);
      *first = NULL;
    }
    else
    {
      PNODE temp = NULL;

      temp = *first;
      *first = (*first)->next;
      free(temp);
      
    }
}
void DeleteLast(PPNODE first)
{
    if(*first == NULL)
    {
      return ;
    }
    else if((*first)->next == NULL)
    {
      free((*first)->next);
      *first = NULL;
    }
    else
    {
      PNODE temp = NULL;
      temp = *first;

      while(temp->next->next != NULL)
      {
        temp = temp->next;
      }
      free(temp->next); //atta udavla ahe 
      temp->next = NULL;

    }
}
void DeleteAtPos(PPNODE first , int iPos)
{
  int iCount = 0;
  int i =0;
  iCount = Count(*first);

  if(iPos < 1 || iPos > iCount + 1)
  {
    printf("Invalid position");
    return ;
  }
  if(iPos == 1)
  {
    DeleteFirst(first);
  }
  else if(iPos == iCount + 1)
  {
    DeleteLast(first);
  }
  else
  {
    PNODE newn = NULL;
    PNODE temp = NULL;
    PNODE target = NULL;

  temp = *first;
  for( i =1 ; i< iPos -1 ; i++)
  {
    temp = temp->next;
  }
  target = temp->next;
  temp->next = target->next;
  target->next->prev =temp;
  free(target);

 }
}
int main()
{
  PNODE head = NULL;
  int iRet =0;

  InsertFirst(&head ,51);
  InsertFirst(&head ,21);
  InsertFirst(&head ,11);
  Display(head);
  iRet = Count(head);
  printf("Number of nodes are : %d\n", iRet);


  InsertLast(&head ,101);
  InsertLast(&head ,111);
  InsertLast(&head ,121);
  InsertLast(&head ,151);
  Display(head);
  iRet = Count(head);
  printf("Number of nodes are : %d\n", iRet);

  DeleteFirst(&head);
  Display(head);
  iRet = Count(head);
  printf("Number of nodes are : %d\n", iRet);

  DeleteLast(&head);
  Display(head);
  iRet = Count(head);
  printf("Number of nodes are : %d\n", iRet);

  InsertAtPos(&head , 105,4);
  Display(head);
  iRet = Count(head);
  printf("Number of nodes are : %d\n" ,iRet);

  DeleteAtPos(&head ,4);
  Display(head);
  iRet = Count(head);
  printf("Number of nodes are : %d\n" ,iRet);

  return 0;
}