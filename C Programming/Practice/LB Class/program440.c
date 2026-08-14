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
       newn->next = *first;     //karan atta *first madhe 200 alay
       (*first)->prev = newn;
       *first = newn;

    (*last)->next =*first;  //line aatmadhe lihi if else chya baher nko karan if madhe linked list empty ahe ugach connect karnyat sense nahi 
    (*first)->prev = *last;
    }

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
        *last =newn;
    }

    (*last)->next =*first;  //line aatmadhe lihi if else chya baher nko karan if madhe linked list empty ahe ugach connect karnyat sense nahi 
    (*first)->prev = *last;
}

void InsertAtFirst(PPNODE first , PPNODE last , int iNo , int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int iCount =0;
    int i =0;
    iCount = Count(*first,*last);

    if(iPos < 1 || iPos > iCount + 1)
    {
        return ;
    }
    if(iPos == 1)
    {
        InsertFirst(first,last,iNo);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(first,last,iNo);
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
        temp->next->prev= newn;

        temp->next = newn;
        newn->prev = temp;
    }
}
void InsertAtPos(PPNODE first , PPNODE last , int iNo ,int iPos)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    int iCount =0;
    int i =0;
    iCount = Count(*first,*last);

    if(iPos < 1 || iPos > iCount + 1)
    {
        return ;
    }
    if(iPos == 1)
    {
        InsertFirst(first,last,iNo);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(first,last,iNo);
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
        temp->next->prev= newn;

        temp->next = newn;
        newn->prev = temp;
    }
}
void DeleteFirst(PPNODE first , PPNODE last)
{
    if(*first == NULL && *last == NULL)
    {
        return ;
    }
    else if(*first == *last)
    {
        free(*first);
        *first = NULL;
        *last  = NULL;
    }
    else
    {
        *first = (*first)->next;
        free((*first)->prev);
        
    }
    (*last)->next =*first;
    (*first)->prev = *last;
}
void  DeleteLast(PPNODE first , PPNODE last)
{
    if(*first == NULL && *last == NULL)
    {
        return ;
    }
    else if(*first == *last)
    {
        free(*first);
        *first = NULL;
        *last  = NULL;
    }
    else
    {
      *last = (*last)->prev;
      free((*last)->next);
        
    }
    (*last)->next =*first;
    (*first)->prev = *last;
}
void DeleteAtPos(PPNODE first , PPNODE last , int iPos)
{
    PNODE temp = NULL;
    int iCount =0;
    int i =0;
    iCount = Count(*first,*last);

    if(iPos < 1 || iPos > iCount + 1)
    {
        return ;
    }
    if(iPos == 1)
    {
        DeleteFirst(first,last);
    }
    else if(iPos == iCount)
    {
        DeleteLast(first,last);
    }
    else
    {

        temp = *first;

        for(i= 1; i< iPos -1 ;i++)
        {
            temp = temp->next;

        }
       temp->next = temp->next->next;
       free(temp->next->prev);
       temp->next->prev = temp;
    }
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
    printf("Number of nodes are :%d\n" , iRet);

    DeleteFirst(&head,&tail);
    Display(head , tail);
    iRet = Count(head,tail);
    printf("Number of nodes are :%d\n" , iRet);

    DeleteLast(&head,&tail);
    Display(head , tail);
    iRet = Count(head,tail);
    printf("Number of nodes are :%d\n" , iRet);

     InsertAtPos(&head,&tail,105,4);
     Display(head , tail);
    iRet = Count(head,tail);
    printf("Number of nodes are :%d\n" , iRet);

    DeleteAtPos(&head,&tail,4);
     Display(head , tail);
    iRet = Count(head,tail);
    printf("Number of nodes are :%d\n" , iRet);

    return 0;
}