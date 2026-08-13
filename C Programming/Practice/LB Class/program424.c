#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first , PNODE last)       //1 pointer vadhla karan circle ahe null nahi kalnar nahi kuth thambaychay
{
   if(first == NULL && last == NULL)
   {
      return ;
   }
   do
   {
      printf(" | %d | ->" ,first->data);
      first= first->next;
   }while(first != last->next);     //(100 ! = 100)
   
   printf("\n");
}
int Count(PNODE first , PNODE last)
{
   int iCount =0;
   if(first == NULL && last == NULL)
   {
      return iCount;
   }
   do
   {
      iCount++;
      first= first->next;
   }while(first != last->next); 
   return iCount ; 
}
void InsertFirst(PPNODE first , PPNODE last ,int iNo)  //insert karayche ahe tar value sangavi lagel na
{
   PNODE newn = NULL;
   newn =(PNODE)malloc(sizeof(NODE));  //memory de new node la 

   newn->data = iNo;  //shirt var name de
   newn->next = NULL;

   if(*first == NULL && *last == NULL)   //doghehi null asel tar aatmadhe ja 
   {
      *first = newn;
      *last = newn ;
   }
   else
   {
       newn->next = *first;
       *first = newn;
   }
   (*last)->next = *first ; //manje condition kuthli pn asude circle madhe sagl honar
}
void InsertLast(PPNODE first , PPNODE last ,int iNo)
{
    PNODE newn = NULL;
    newn =(PNODE)malloc(sizeof(NODE));  //memory de new node la 

   newn->data = iNo;  //shirt var name de
   newn->next = NULL;
    if(*first == NULL && *last == NULL)   //doghehi null asel tar aatmadhe ja 
   {
      *first = newn;
      *last = newn ;
   }
   else
   {
     (*last)->next = newn;
     *last = (*last)->next;//teacher la sang ki last cha node kon ahe tee 
     
   }
   (*last)->next = *first ; //manje condition kuthli pn asude circle madhe sagl honar    
}
void InsertAtPos(PPNODE first , PPNODE last ,int iNo , int iPos)//1 parameter vadhla karan position sangayla lagel na kuth add karaycha ahe node 
{
    
}
void DeleteFirst(PPNODE first , PPNODE last)  //delete karaycha ahe tar mg value kivha position deychi garaj nahi 
{
  
   if(*first == NULL && *last == NULL)  //ll rikami ahe 
   {
      return ;
   }
   else if(*first == *last)   //linked list madhe node 1 ch ahe
   {
      free(*first);
      *first = NULL;
      *last  = NULL;
   }
   else
   {
     *first = (*first)->next;  //head madhe 200 ala
     free((*last)->next);       //CHANGE KELAY HYA MADHE 

     (*last) ->next = *first;

   }
}
void DeleteLast(PPNODE first , PPNODE last)
{
   if(*first == NULL && *last == NULL)  //ll rikami ahe 
   {
      return ;
   }
   else if(*first == *last)   //linked list madhe node 1 ch ahe
   {
      free(*first);
      *first = NULL;
      *last  = NULL;
   }
   else
   {
      
   }
}
void DeleteAtPos(PPNODE first , PPNODE last , int iPos)
{
    
}

int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;
    int iRet =0;
    
   //display call kadhla 
    InsertFirst(&head,&tail,51);
    InsertFirst(&head,&tail,21);
    InsertFirst(&head,&tail,11);

    InsertLast(&head,&tail,101);
    InsertLast(&head,&tail,111);
    InsertLast(&head,&tail,121);

    Display(head ,tail);
    iRet = Count(head , tail);
    printf("Number of nodes are :%d\n" ,iRet);

    DeleteFirst(&head,&tail);
     Display(head ,tail);
    iRet = Count(head , tail);
    printf("Number of nodes are :%d\n" ,iRet);

    return 0;
}