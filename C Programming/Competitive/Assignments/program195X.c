//consider singly linked list to solve below problems 
//Display number Less than X , Count elements Less than given numbers 

#include<stdio.h>
#include<stdlib.h>

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

struct node
{
    int data;
    PNODE next;
};

void CountLess(PNODE head,int Num)
{
    PNODE temp = head;
    int iCount = 0;

    while(temp != NULL)
    {
        if(temp->data < Num)
        {
            printf("%d ",temp->data);
        }
        temp = temp->next;
    }
}

void InsertFirst(PNODE *first , int iNo)
{
    
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL)
    {
      *first = newn;
    }
    else
    {
       newn->next = *first;
       *first = newn;
    }
}
int main()
{
    PNODE head = NULL;
    int iSize = 0 ,iNo = 0,iGreat = 0 ;

    printf("Enter Number of element\n");
    scanf("%d",&iSize);

    printf("Enter elements are");
    for(int i = 0 ; i < iSize;i++)
    {
       scanf("%d",&iNo);
       InsertFirst(&head,iNo);
    }

    printf("Enter X number ");
    scanf("%d",&iGreat);

    CountLess(head,iGreat);

    return 0;
}


