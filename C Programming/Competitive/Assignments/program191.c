//consider singly linked list to solve below problems 
//Display only Odd elements
#include<stdio.h>
#include<stdlib.h>

typedef struct node NODE;
typedef struct node* PNODE;

struct node
{
    int data ;
    PNODE next;
};

void DisplayOdd(PNODE head)
{
    PNODE temp = head;

    while(temp != NULL)
    {
        if((temp->data % 2) != 0)
        {
           printf(" | %d |->",temp->data);
        }
       
       temp = temp->next;
    }
    printf("NULL\n");
}
void InsertLast(PNODE *first,int iNo)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL)
    {
     *first =newn;
    }
    else
    {
        PNODE temp = *first;

        while(temp->next != NULL)
        {
           temp = temp->next;
        }
        temp->next = newn;
    }
}

int main()
{
    PNODE head = NULL ;
    
    int iSize = 0,iNo = 0 ,iRet = 0,iFeq = 0;
    printf("Enter number of elements :");
    scanf("%d",&iSize);

    printf("Enter the elements");

    for(int i =0 ;i < iSize ;i++)
    {
        scanf("%d",&iNo);
        InsertLast(&head,iNo);
    }

    DisplayOdd(head);


    return 0;
}
/*
Enter number of elements :6
Enter the elements1
2
3
4
5
6
 | 1 |-> | 3 |-> | 5 |->NULL
*/
