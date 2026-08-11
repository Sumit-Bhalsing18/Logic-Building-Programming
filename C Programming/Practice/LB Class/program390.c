#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)   //manje hyane 20 byte bhetel
struct node
{
  int data;
  struct node* next;
  struct node* prev;   //$
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

int Count(PNODE first)
{
  int iCount =0 ;
  
  while(first != NULL)
  {
    iCount++;
    first = first->next;
  }
  return iCount;
}
void Display(PNODE first)
{
  printf("\nNULL <=>");  //karan pahilya node chya prev madhe null pahije mhnun 
  while(first!=NULL)
  {
    printf("|%d| <=>" ,first ->data);
    first = first->next;
  }
  printf("NULL\n");
}
void InsertFirst(PPNODE first,int iNo)
{
  
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));  //20 byte allocate zali 3 members ahet mhnun 

    newn->data= iNo;
    newn->next= NULL;
    newn->prev= NULL;  //$
  
  if(*first == NULL)  //ll empty ahe
  { 
    *first = newn;  //manje navin node add kela 
  }
  else     //jast node ahet 
  {
     newn->next = *first ;  //juna address 
     (*first)->prev =newn;   //  $   (*first manje 100 mhnun te () hya madhe ahe )
     *first = newn; //techer la kalva
  }
}
void InsertLast(PPNODE first,int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL; //varti lihun thevla
    newn = (PNODE)malloc(sizeof(NODE));  //20 byte allocate zali 3 members ahet mhnun 

    newn->data= iNo;
    newn->next= NULL;
    newn->prev= NULL;  //$
  
  if(*first == NULL)  //ll empty ahe
  { 
    *first = newn;  //manje navin node add kela 
  }
  else
  {
    temp = *first;
    while(temp->next != NULL)
    {
      temp =temp->next;
    }
    temp->next = newn;   //he dil tu pudh node
    newn->prev = temp; //&
  }
}
void InsertAtPos(PPNODE first,int iNo , int iPos)
{
  
}
void DeleteFirst(PPNODE first)
{

  if(*first == NULL)
  {
    return ;
  }
  else if((*first)->next == NULL)
  {
    free((*first));
    *first = NULL;
  }
  else
  {
    (*first) = (*first)->next;
    free((*first)->prev);        //$     //ethe temp chi garaj nahi karan apn pudhcya node ni maghe alo (*first)->prev manje pahila node tyala free kela  apn 
    (*first)->prev = NULL;    //$
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
    free((*first));
    *first = NULL;
  }
  else
  {
              //ethe temp chi garaj nahi karan apn pudhcya node ni maghe alo apn 
  } 
}
void DeleteAtPos(PPNODE first ,int iPos)
{
  
}
int main()
{
  
  PNODE head = NULL;  //shikshakachya dokyatla address
  int iRet = 0;
  InsertFirst(&head ,51);
  InsertFirst(&head ,21);
  InsertFirst(&head ,11);

  InsertLast(&head ,101);
  InsertLast(&head ,111);
  InsertLast(&head ,121);

  Display(head);
  iRet = Count(head);
  printf("Number of nodes are : %d\n" ,iRet);

  DeleteFirst(&head);
  Display(head);
  iRet = Count(head);
  printf("Number of nodes are : %d\n" ,iRet);
  return 0;
}