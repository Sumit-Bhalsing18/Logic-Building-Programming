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

void Display(PNODE first ,PNODE last)
{
    PNODE temp = NULL;
   if(first != NULL && last != NULL)
   {
    temp = first;
     do
     {
        printf("| %d | <=>",temp->data);
        temp = temp->next;
     } while(temp != last->next);
     

    temp = first->prev;
     do
     {
        printf("| %d | <=>",temp->data);
        temp = temp->prev;
     } while(temp != last->next);

   }

}
int Count(PNODE first , PNODE last)
{
    int iCount =0;
    if(first != NULL && last != NULL)
   {
    do
    {
      iCount++;
      first = first->next;
    } while(first != last->next);
   }
   return iCount;
}
void InsertFirst(PPNODE first ,PPNODE last, int iNo)
{
    PNODE newn = NULL;
    
    newn =(PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

   if(*first == NULL && *last == NULL)
    {
       *first = newn;
       *last = newn;
    }
    else
    {
        newn->next = *first;
        (*first)->prev = newn;
        *first = newn;
    }
    (*last)->next = *first;
    (*first)->prev =*last; 

}
void InsertLast(PPNODE first ,PPNODE last ,int iNo)
{
    PNODE newn = NULL;
    
    newn =(PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(*first == NULL && *last == NULL)
    {
       *first = newn;
       *last = newn;
    }
    else
    {
     (*last)->next = newn;
     newn->prev = *last;
     *last = newn;
    }
    (*last)->next = *first; 
    (*first)->prev =*last;  
}
void InsertAtPos(PPNODE first ,PPNODE last ,int iNo , int iPos)
{
    PNODE temp = NULL;
    PNODE newn = NULL;
    int i =0;
    int iCount =0;
    iCount = Count(*first,*last);

    if( iPos < 1 || iPos > iCount + 1)
    {
        printf("Invalid position\n");
        return ;

    }
    if(iPos == 1)
    {
        InsertFirst(first,last,iNo);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(first , last,iNo);
    }
    else
    {
        newn =(PNODE)malloc(sizeof(NODE));

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        temp = *first;
        for(i= 1; i< iPos -1 ;i++)
        {
          temp = temp->next;
        }
        newn->next =temp->next;
        temp->next->prev = newn;
        temp->next = newn;
        newn->prev = temp;
        
        (*last)->next = *first;
        (*first)->prev =*last; 
    }
}
void DeleteFirst(PPNODE first ,PPNODE last)
{
    if(*first == NULL && *last == NULL)
    {
        return ;
    }
    else if( *first == *last)
    {
        free(*first);
        free(*last);
        *first =NULL;
        *last = NULL;
        
    }
    else
    {   
        PNODE temp = NULL;
        temp = *first;
        *first = (*first)->next;
        (*first)->prev = *last;
        free(temp);
    }
    (*last)->next = *first;
    (*first)->prev =*last; 
}
void DeleteLast(PPNODE first,PPNODE last)
{
    if(*first == NULL && *last == NULL)
    {
        return ;
    }
    else if( *first == *last)
    {
        free(*first);
       
        *first =NULL;
        *last = NULL;
        
    }
    else
    {   
      PNODE temp = NULL;
      temp = *first;

      while(temp->next != *last)   //manje first 400 la gela ki loop stop hoil karan nodes 4 ahet pn tevha temp 300 asel 
      {
        temp = temp->next;
      }
      free(*last);
      *last = temp;
       
    }
    (*last)->next = *first; 
    (*first)->prev =*last; 
   
}
void DeleteAtPos(PPNODE first,PPNODE last ,int iPos)
{
    
}

int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;
    int iRet = 0;

    InsertFirst(&head , &tail,51);
    InsertFirst(&head , &tail,21);
    InsertFirst(&head , &tail,11);
    Display(head ,tail);
    iRet = Count(head,tail);
    printf("Number of nodes are %d\n",iRet);

    InsertLast(&head , &tail,101);
    InsertLast(&head , &tail,111);
    InsertLast(&head , &tail,121);
    Display(head ,tail);
    iRet = Count(head,tail);
    printf("Number of nodes are %d\n",iRet);

    DeleteFirst(&head,&tail);
    Display(head ,tail);
    iRet = Count(head,tail);
    printf("Number of nodes are %d\n",iRet);

    DeleteLast(&head,&tail);
    Display(head ,tail);
    iRet = Count(head,tail);
    printf("Number of nodes are %d\n",iRet);
    return 0;
}