//consider singly linked list to solve below problems 
//last Occurence position , return position of last occurence 
#include<stdio.h>
#include<stdlib.h>

typedef struct node NODE;
typedef struct node* PNODE;

struct node
{
    int data ;
    PNODE next;
};


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

int LastOccurencePos(PNODE head , int iNo)
{
    PNODE temp = head;
    int iPos = 0 , iLast = 1;

    while(temp != NULL) 
    {
        if(temp->data == iNo)
        {
          iLast = iPos + 1;
        }
        temp = temp->next;
        iPos++;
       
    }
    return iLast;
    
}

int main()
{
    PNODE head = NULL ;
    
    int iSize = 0,iNo = 0 ,iRet = 0,iNo2 = 0 ,iOcc = 0;
    printf("Enter number of elements :");
    scanf("%d",&iSize);

    printf("Enter the elements");

    for(int i =0 ;i < iSize ;i++)
    {
        scanf("%d",&iNo);
        InsertLast(&head,iNo);
    }
    
    printf("Enter that element :");
    scanf("%d",&iNo2);

    iOcc = LastOccurencePos(head,iNo2);
     printf("that number Last Occurence position is %d",iOcc);

     

    return 0;
}
/*
Enter number of elements :5
Enter the elements
1
2
3
4
1
Enter that element :1
that number Last Occurence position is 5
*/

