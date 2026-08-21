#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next ;
    struct node* prev ;
};

void Display(struct node* first , struct node* last)
{
    struct node* temp = NULL;
    if(first == NULL && last == NULL)
    {
        return ;
    }
    do
    {
        printf("| %d | <=> ",first->data);
        first = first->next;
    }while(first != last->next);
    printf("\n");
    
    temp = first;
    while(temp->next != last->next)
    {
       temp = temp->next;
    }

    do
    {
        printf("| %d | <=> ",temp->data);
        temp = temp->prev;
    }while(temp != first->prev);
    printf("\n");


}
int Count(struct node* first , struct node* last)
{   
    int iCount  = 0;
    if(first == NULL && last == NULL)
    {
        return iCount;
    }
    do
    {
        iCount++;
        first = first->next;
    }while(first != last->next);
   return iCount;
}
void InsertFirst(struct node** first , struct node** last, int iNo)
{
    struct node* newn = NULL;
    newn= (struct node*)malloc(sizeof(struct node));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(*first == NULL && *last == NULL)
    {
       *first = newn;
       *last  = newn;
    }
    else
    {
        newn->next = *first;
        (*first)->prev = newn;
        *first = newn;

    }
    (*last)->next =*first;
    (*first)->prev = *last;
}
void InsertLast(struct node** first , struct node** last, int iNo)
{
    struct node* newn = NULL;
    newn= (struct node*)malloc(sizeof(struct node));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(*first == NULL && *last == NULL)
    {
       *first = newn;
       *last  = newn;
    }
    else
    {
     (*last)->next = newn;
      newn->prev = *last;
      *last = newn;
    }
    (*last)->next =*first;
    (*first)->prev = *last;   
}
void InsertAtPos(struct node** first , struct node** last, int iNo , int iPos)
{
  int iCount = Count(*first,*last);
    int i =0;
    if(iPos < 1 || iPos > iCount + 1)
    {
        printf("Invalid positon \n");
        return ;
    }

    if(iPos == 1)
    {
        InsertFirst(first ,last ,iNo);
    }
    else  if(iPos == iCount + 1)
    {
        InsertLast(first ,last ,iNo);
    }
    else 
    {
        struct node * newn = NULL;
        struct node * temp = NULL;

        newn =(struct node*)malloc(sizeof(struct node));

        newn->data = iNo;
        newn->next = NULL;
        
        temp = *first;
        for(i = 1; i< iPos - 1;i++)
        {
           temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev =newn;
        temp->next =newn;
        newn->prev = temp;

        (*last)->next = *first;
        (*first)->prev = *last;
    }
}

void DeleteFirst(struct node** first , struct node** last)
{
    if(*first == NULL && *last == NULL)
    {
        return ;
    }
    else if(*first == *last)
    {
        free(*first);
        *first = NULL;
        *last =  NULL;
    }
    else
    {
        *first = (*first)->next;
        free((*first)->prev);
    }
    (*last)->next = *first;
    (*first)->prev = *last;
}
void DeleteLast(struct node** first , struct node** last)
{
    if(*first == NULL && *last == NULL)
    {
        return ;
    }
    else if(*first == *last)
    {
        free(*first);
        *first = NULL;
        *last =  NULL;
    }
    else
    {
        struct node* temp = NULL;
        temp = *first;
       while(temp->next != *last)
       {
          temp = temp->next;
       }
       free(*last);
       *last = temp;

    (*last)->next = *first;
    (*first)->prev = *last; 
    }
       
}
void DeleteAtPos(struct node** first , struct node** last,  int iPos)
{
  int iCount = Count(*first,*last);
    int i =0;
    if(iPos < 1 || iPos > iCount + 1)
    {
        printf("Invalid positon \n");
        return ;
    }

    if(iPos == 1)
    {
        DeleteFirst(first ,last);
    }
    else  if(iPos == iCount)
    {
        DeleteLast(first ,last);
    }
    else 
    {
        struct node * temp = NULL;
        
        temp = *first;
        for(i = 1; i< iPos - 1;i++)
        {
           temp = temp->next;
        }
        temp->next = temp->next->next;
        free(temp->next->prev);
        temp->next->prev = temp;

        (*last)->next = *first;
        (*first)->prev = *last;
    }    
}
int main()
{
    struct node* head = NULL;
    struct node* tail = NULL;
    int iRet = 0;

    InsertFirst(&head,&tail,51);
    InsertFirst(&head,&tail,21);
    InsertFirst(&head,&tail,11);

    Display(head,tail);
    iRet = Count(head,tail);
    printf("Number of nodes are %d\n", iRet);

    InsertLast(&head,&tail,101);
    InsertLast(&head,&tail,111);
    InsertLast(&head,&tail,121);
    Display(head,tail);
    iRet = Count(head,tail);
    printf("Number of nodes are %d\n", iRet);

    DeleteFirst(&head,&tail);
    Display(head,tail);
    iRet = Count(head,tail);
    printf("Number of nodes are %d\n", iRet);

    DeleteLast(&head,&tail);
    Display(head,tail);
    iRet = Count(head,tail);
    printf("Number of nodes are %d\n", iRet);

    InsertAtPos(&head,&tail,105,4);
    Display(head,tail);
    iRet = Count(head,tail);
    printf("Number of nodes are %d\n", iRet);

    DeleteAtPos(&head,&tail,4);
    Display(head,tail);
    iRet = Count(head,tail);
    printf("Number of nodes are %d\n", iRet);
    return 0;
}