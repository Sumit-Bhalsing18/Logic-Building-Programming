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

void Display(PNODE first)   //PNODE ch ka ghetla NODE ka nahi karan linked list madhe apn node nahi tar node cha address (pointer ) pass karto 
{}

int Count(PNODE first)
{
    return 0;
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
    return 0;
}