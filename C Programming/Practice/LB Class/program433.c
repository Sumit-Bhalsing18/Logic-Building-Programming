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

}
int Count(PNODE first , PNODE last)
{
    return 0;
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

    InsertFirst(&head,&tail,51);
    InsertFirst(&head,&tail,21);
    InsertFirst(&head,&tail,11);
    
    return 0;
}