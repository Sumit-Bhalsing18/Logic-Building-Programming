#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first)         //temperoray ahe first karan temp la harm nko karan first change honar ahe 
{
    while(first)   //TYPE 1
    {
        printf(" |%d|->\t",first->data);
        first = first->next;     //traversal karel
    }
    printf("NULL\n");
}

int Count(PNODE first)
{
    int iCount =0;

    while(first)          //TYPE 1
    {
        iCount++;
        first = first->next;
    }
    return iCount;
}

void InsertFirst(PPNODE first ,int iNo)
{
    PNODE  newn = NULL;    //node create kela fakt
    newn = (PNODE)malloc(sizeof(NODE)); //memory dili

    newn->data= iNo;   //data dila node la
    newn->next= NULL;

    if(NULL == *first)  //link list is empty jevha asel tevha aatmadhe jail
    {
       *first = newn;   //jar null asel newn la tu *first de manje navin node cha address *first la de 
    } 
    else    //jar else madhe ala tar samaj atleast 1 node tari ahe link list madhe
    {
       newn->next = *first;
       *first = newn ;   //temperory la tar kall pahije
    }
}

void InsertLast(PPNODE first ,int iNo)
{
    PNODE  newn = NULL;    //node create kela fakt
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE)); //memory dili

    newn->data= iNo;   //data dila node la
    newn->next= NULL;

    if(*first == NULL)  //link list is empty jevha asel tevha aatmadhe jail
    {
       *first = newn;   //jar null asel newn la tu *first de manje navin node cha address *first la de 
    } 
    else    //jar else madhe ala tar samaj atleast 1 node tari ahe link list madhe
    {
        temp = *first;  //temp madhe 100 ala

        while(temp->next != NULL)      //TYPE 2
        {
             temp = temp -> next;
        }
        temp-> next = newn;   //last la node la add kelay manje 500 node add kelay
    }
}

void DeleteFirst(PPNODE first)
{
    PNODE temp =NULL;
    if(*first == NULL)                   //jevha link list empty asel tevha return
    {
       return;
    }
    else if( (*first) -> next == NULL)  //jevha link list madhe fakt 1node asel tevha node delete kar ani 
    {
        free(*first);                  
        *first = NULL;               
    }
    else                             //jevha link list madhe multiple nodes astil tevha aatmadhe ja 
    {
       temp = *first;

       *first = (*first)-> next;
       free(temp);
    }
}

void DeleteLast(PPNODE first)
{

    PNODE temp = NULL;

    if(*first == NULL)                   //jevha link list empty asel tevha return
    {
       return;
    }
    else if( (*first) -> next == NULL)  //jevha link list madhe fakt 1node asel tevha node delete kar ani 
    {
        free(*first);                  //tya node la delete kel 
        *first = NULL;                //koni nahiye atta shikshkala sanga
    }
    else                             ////jevha link list madhe multiple nodes astil tevha aatmadhe ja 
    {

        temp = *first;
        
        while( temp -> next -> next != NULL)    //TYPE 3
        {
            temp = temp -> next;
        }
        free(temp -> next);

        temp -> next = NULL;

    }
}
void InsertAtPos(PPNODE first ,int iNo , int iPos)
{
    int iCount =0;
    int i=0;
    PNODE newn = NULL;
    PNODE temp = NULL;

    iCount = Count(*first);

    if((iPos < 1) || (iPos > iCount + 1))
    {
        printf("Invalid position\n");
        return ;
    }
    if(iPos ==1)
    {
       InsertFirst(first ,iNo);
    }
    else if(iPos == iCount + 1)
    {
      InsertLast(first , iNo);
    }
    else
    {
       newn =(PNODE)malloc(sizeof(NODE));
       newn->data = iNo;
       newn->next = NULL;

       temp = *first ;
              //-1 nasta lihila tar thambla nasta
       for(i=1 ; i< iPos -1; i++)
       {
        temp = temp -> next;
       }

       newn->next = temp->next;  //adhi right side chya khandyavr hat thev 
       temp->next = newn ;       //nantar left chya

    }
}   

void DeleteAtPos(PPNODE first , int iPos)
{
  int iCount =0;
  int i=0;

   PNODE temp = NULL;
   PNODE target = NULL; 
   
   iCount = Count(*first);

    if((iPos < 1) || (iPos > iCount + 1))
    {
        printf("Invalid position\n");
        return;

    if(iPos ==1)
    {
       DeleteFirst(first);
    }
    else if(iPos == iCount)
    {
      DeleteLast(first);
    }
    else
    {
       temp = *first;

       for(i=1 ;i< iPos -1 ;i++)
       {
        temp = temp -> next;
       }
       target = temp ->next;

       temp ->next = target -> next;
       free(target);
    }
}
}

int main()
{
    PNODE head = NULL;
    int iRet =0;

    InsertFirst(&head, 101);  //distay ulta pn te linked list madhe straight janar //fakt pahilya node sathi if madhe jail 
    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);
    Display(head); //head ni call karnar
    iRet = Count(head);
    printf("Number of nodes are : %d\n" , iRet);

    InsertLast(&head,111);
    InsertLast(&head,121);
    Display(head); //head ni call karnar
    iRet = Count(head);
    printf("Number of nodes are : %d\n" , iRet);

    DeleteFirst(&head);
    Display(head); //head ni call karnar
    iRet = Count(head);
    printf("Number of nodes are : %d\n" , iRet);

    DeleteLast(&head);
    Display(head); //head ni call karnar
    iRet = Count(head);
    printf("Number of nodes are : %d\n" , iRet);

    InsertAtPos(&head,105,4);
    Display(head); //head ni call karnar
    iRet = Count(head);
    printf("Number of nodes are : %d\n" , iRet);

    DeleteAtPos(&head,5);
    Display(head); //head ni call karnar
    iRet = Count(head);
    printf("Number of nodes are : %d\n" , iRet);

    return 0;
}