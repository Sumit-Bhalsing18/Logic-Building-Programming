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
  int i=0;
  int iCount =0;
  PNODE temp = NULL;
  PNODE newn = NULL;

  newn=(PNODE)malloc(sizeof(NODE));

  newn->data = iNo;
  newn->next = NULL;
  newn->prev = NULL;

  iCount = Count(*first); //*first ka dila karan manje 100 jar first dila asta tar 60 gela sta mhnun 
  if((iPos < 1) || (iPos > iCount +1))
  {
    printf("Invalid position");
    return ;
  }

  if(iPos ==1)
  {
    InsertFirst(first , iNo);
  }
  else if(iPos == iCount + 1)
  {
    InsertLast(first , iNo);
  }
  else
  {
    temp =*first;


           //ek ghar maghe jaych ahe
    for(i=1 ; i< iPos -1 ;i++)
    {
      temp = temp ->next;
    }

    newn->next = temp->next;
    temp->next->prev = newn ;  //$ //manje atta right side purn jodli ahe karan navin node karaycha ahe mhntlyavr tula newn chya pudhchya node chya previous madhe newn deyla lagel mhnun
    temp->next = newn;
    newn->prev =temp;          //$
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
    free((*first));
    *first = NULL;
  }
  else
  {
    (*first) = (*first)->next;
    free((*first)->prev);        //$     //ethe temp chi garaj nahi karan apn pudhcya node ni maghe alo apn 
    (*first)->prev = NULL;    //$
  }
}
void DeleteLast(PPNODE first)
{

  PNODE temp = NULL;
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
     temp = *first;
     
     while(temp->next->next != NULL)
     {
       temp = temp -> next;
     }
     free(temp->next);   // adhi free karaycha hota mg null de
     temp->next = NULL;
  } 
}
void DeleteAtPos(PPNODE first ,int iPos)
{
  int iCount =0 , i= 0;
  PNODE temp = NULL;

  iCount = Count(*first); //*first ka dila karan manje 100 jar first dila asta tar 60 gela sta mhnun 

  if((iPos < 1) || (iPos > iCount ))  // +1 ka nah-
  {
    printf("Invalid position");
    return ;
  }

  if(iPos ==1)
  {
    DeleteFirst(first);
  }
  else if(iPos == iCount)
  {
    DeleteLast(first );
  }
  else
  {
    temp = *first;
    for(i=1 ; i < iPos -1 ; i++)
    {
      temp = temp ->next;
    }
    temp->next = temp ->next ->next;
    free(temp->next->prev);  //$
    temp->next->prev = temp; //$
  } 
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
  InsertLast(&head ,151);

  Display(head);
  iRet = Count(head);
  printf("Number of nodes are : %d\n" ,iRet);

  DeleteFirst(&head);
  Display(head);
  iRet = Count(head);
  printf("Number of nodes are : %d\n" ,iRet);

  DeleteLast(&head);
  Display(head);
  iRet = Count(head);
  printf("Number of nodes are : %d\n" ,iRet);
                    //data
  InsertAtPos(&head , 105,4);
  Display(head);
  iRet = Count(head);
  printf("Number of nodes are : %d\n" ,iRet);

  DeleteAtPos(&head , 4);
    Display(head);
  iRet = Count(head);
  printf("Number of nodes are : %d\n" ,iRet);
  
  return 0;
}