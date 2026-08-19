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

void Display(PNODE first)    //temperoray ahe first karan temp la harm nko karan first change honar ahe 
{
    if(first !=NULL)
    {
        Display(first->next) ;
        printf("%d\t",first->data);
      
    }
   
}

int Count(PNODE first)
{
    static int iCount = 0;

    if(first != NULL)
    {
        
    }
}

void InsertFirst(PPNODE first ,int iNo)
{
    PNODE  newn = NULL;    //node create kela fakt
    newn = (PNODE)malloc(sizeof(NODE)); //memory dili

    newn->data= iNo;   //data dila node la
    newn->next= NULL;

    if(*first == NULL)  //link list is empty jevha asel tevha aatmadhe jail
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
    newn = (PNODE)malloc(sizeof(NODE)); //memory dili

    newn->data= iNo;   //data dila node la
    newn->next= NULL;

    if(*first == NULL)  //link list is empty jevha asel tevha aatmadhe jail
    {
       *first = newn;   //jar null asel newn la tu *first de manje navin node cha address *first la de 
    } 
    else    //jar else madhe ala tar samaj atleast 1 node tari ahe link list madhe
    {

    }
}

void InsertAtPos(PPNODE first ,int iNo , int iPos)
{}

void DeleteFirst(PPNODE first)
{}

void DeleteLast(PPNODE first)
{}

void DeleteAtPos(PPNODE first , int iPos)
{}

int main()
{
    PNODE head = NULL;
    InsertFirst(&head, 101);  //distay ulta pn te linked list madhe straight janar //fakt pahilya node sathi if madhe jail 
    InsertFirst(&head, 51);
    InsertFirst(&head, 21);
    InsertFirst(&head, 11);

    Display(head); //head ni call karnar
    return 0;
}

/*
1) Display ,Count hysathi PNODE first (fakt traversal karaych ahe
2) InsertFirst ,DeleteFirst -> PPNODE first (head badalnar aslyamule) main madhun &head lihilay karan ethe head kharach badalto

head ha main madhla pointer ahe
first ha display function cha parameter ahe
)*/