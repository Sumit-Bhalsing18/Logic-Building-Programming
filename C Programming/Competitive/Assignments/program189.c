//count frequency of given number ,count how many times a number appears
#include<stdio.h>
#include<stdlib.h>

typedef struct node NODE;
typedef struct node* PNODE;

struct node
{
    int data ;
    PNODE next;
};

void Display(PNODE head)
{
    PNODE temp = head;

    while(temp != NULL)
    {
       printf(" | %d |->",temp->data);
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

int CountFrequency(PNODE head,int iNo)
{
    PNODE temp = head;
    int iCount = 0;

  while(temp != NULL)
  {

    if(temp->data == iNo)
    {
     iCount++;
    }
    temp = temp->next;
  }

  return iCount;

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

    Display(head);

    printf("Enter Count Frequeuny number :");
    scanf("%d",&iFeq);

    iRet = CountFrequency(head,iFeq);
    printf("%d times a number appears",iRet);

    return 0;
}
/*
Enter number of elements :5
Enter the elements1
5
8
5
5
 | 1 |-> | 5 |-> | 8 |-> | 5 |-> | 5 |->NULL
Enter Count Frequeuny number :5
3 times a number appears*/