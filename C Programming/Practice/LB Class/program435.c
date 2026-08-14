#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node* next ;
    struct node* prev;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first , PNODE last)
{
    if(first == NULL && last == NULL)  //do while direct aat jato jar head ani tail madhe null asel tar garbage yeil 
    {
        return ;
    }
    printf(" <=> ");
    do
    {
       printf("| %d | <=> ", first->data);
       first = first->next;

    }while (first != last->next);

    printf("\n");
    

}
int Count(PNODE first , PNODE last)
{
    int iCount =0;
    if(first == NULL && last == NULL)  //do while direct aat jato jar head ani tail madhe null asel tar garbage yeil 
    {
        return iCount;
    }
    printf(" <=> ");
    do
    {
       iCount++;
       first = first->next;

    }while (first != last->next);
    return iCount;

    printf("\n");
}
void InsertFirst(PPNODE first , PPNODE last , int iNo)
{
    PNODE newn= NULL;
    newn =(PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(*first == NULL && *last == NULL)  //manje ll empty ahe
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
void InsertLast(PPNODE first , PPNODE last , int iNo)
{
    PNODE newn= NULL;
    newn =(PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(*first == NULL && *last == NULL)  //manje ll empty ahe
    {
        *first = newn;
        *last  = newn;
    }
    else
    {
        (*last)->next = newn;
        newn->prev =*last;
        *last = newn;
    }
    (*last)->next =*first;
    (*first)->prev = *last;
}
void InsertAtFirst(PPNODE first , PPNODE last , int iNo)
{

}
void InsertAtPos(PPNODE first , PPNODE last , int iNo ,int iPos)
{

}
void DeleteFirst(PPNODE first , PPNODE last)
{

}
void  DeleteLast(PPNODE first , PPNODE last)
{

}
void DeleteAtPos(PPNODE first , PPNODE last , int iNo ,int iPos)
{

}
int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;
    int iRet = 0;

    InsertFirst(&head,&tail,51);
    InsertFirst(&head,&tail,21);
    InsertFirst(&head,&tail,11);

    InsertLast(&head,&tail,101);
    InsertLast(&head,&tail,111);
    InsertLast(&head,&tail,121);

    Display(head , tail);
    iRet = Count(head,tail);
    printf("Number of nodes are :%d" , iRet);
    
    return 0;
}