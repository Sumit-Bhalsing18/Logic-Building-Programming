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
   do
   {
      printf(" | %d | ->" ,first->data);
      first= first->next;
   }while(first != last->next);     //(100 ! = 100)
   
   printf("\n");
}
int Count(PNODE first , PNODE last)
{
    return 0;
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

}
void DeleteLast(PPNODE first , PPNODE last)
{
    
}
void DeleteAtPos(PPNODE first , PPNODE last , int iPos)
{
    
}

int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;

    InsertFirst(&head,&tail,51);
    InsertFirst(&head,&tail,21);
    InsertFirst(&head,&tail,11);

    InsertLast(&head,&tail,101);
    InsertLast(&head,&tail,111);
    InsertLast(&head,&tail,121);

    Display(head ,tail);
    return 0;
}