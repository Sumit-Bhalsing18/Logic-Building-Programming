#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE ;  //ha type ahe 
typedef struct node* PNODE ;
typedef struct node** PPNODE ;

void Display(PNODE first)  //p ahe first == head        first = 100 
{
   while(first != NULL)
   {
    printf(" |%d| ->",first->data);
    first = first->next;
   }
    printf("NULL\n");
}
int Count(PNODE first)
{
    int iCount =0;
    while(first != NULL)
    {
      iCount++;
      first = first->next;
    }
    return iCount;
}

void InsertFirst(PPNODE first ,int iNo)
{
    PNODE newn = NULL;  //navin node banavla   //newn pointer ahe toh point karar new node chya data ani next la 
    newn = (PNODE)malloc(sizeof(NODE));   //memory dili
    
    newn->data = iNo;  //newn la initialise kel value
    newn->next = NULL;
    
    if(*first == NULL)  //comparison honar asel tevha == value assign karaychi asel tevha =
    {
      *first = newn;   //karan newn madhe next node cha address asnar 
    }
    else
    {
        newn->next = *first;
        *first = newn ;
    }

}
void InsertLast(PPNODE first , int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn= (PNODE)malloc(sizeof(NODE));

    newn->data =iNo;
    newn->next =NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
       temp = *first;
       while(temp ->next !=NULL)
       {
         temp = temp->next;
       }
       temp->next = newn;
    }
}

void DeleteFirst(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if( (*first) ->next == NULL)
    {
        free((*first) ->next);
        *first = NULL;
    }
    else
    {
        temp = *first;
       *first = (*first)->next;
        free(temp);
    }
}
void DeleteLast(PPNODE first)
{
    PNODE temp = NULL;

    if(*first == NULL)
    {
        return;
    }
    else if( (*first) ->next == NULL)
    {
        free((*first) ->next);
        *first = NULL;
    }
    else
    {
       temp = *first;

       while(temp -> next -> next != NULL)
       {
        temp = temp -> next;
       }
       free(temp->next);
       temp ->next = NULL;
    }
}
void InsertAtPos(PPNODE first ,int iNo, int iPos)
{
    int iCount =0 ,i =0;

    iCount = Count(*first);  //head nahi yenar karan tu main madhun call karat nahiye tu dusrya function madhun eka function call karto ahe mhnun varti je nav ahe tech dee

    if(iPos < 1 || iPos > iCount + 1)
    {
        printf("Invalid input");
        return ;
    }
    else if(iPos ==1)
    {
       InsertFirst(first,iNo);
    }
    else if(iCount + 1)
    {
       InsertLast(first,iNo);
    }
    else
    {
        PNODE temp =NULL;
        PNODE newn = NULL;

        newn =(PNODE)malloc(sizeof(NODE));

        newn->data = iNo;
        newn->next = NULL;

        for(i=1 ;i < iPos -1 ;i++)
        {
            temp = temp->next;
        }
        newn->next =temp->next;

        temp->next= newn;
    }
}
int main()
{
    int iRet =0;
    PNODE head = NULL;

    InsertFirst(&head, 101);  //distay ulta pn te linked list madhe straight janar //fakt pahilya node sathi if madhe jail 
    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);
    Display(head);
    iRet = Count(head);
    printf("Number of nodes are: %d\n",iRet);

    InsertLast(&head,111);
    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n",iRet);

    DeleteFirst(&head);
    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n",iRet);

    DeleteLast(&head);
    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n",iRet);

    InsertAtPos(&head ,302 ,2);
    Display(head);
    iRet = Count(head);
    printf("Number of nodes are : %d\n",iRet);



    return 0;
}