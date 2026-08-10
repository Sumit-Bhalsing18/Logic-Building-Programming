//370 he template ahe fakt function declare kele
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
{}

int Count(PNODE first)
{
    return 0;
}

void InsertFirst(PPNODE first ,int iNo)
{}

void InsertLast(PPNODE first ,int iNo)
{}

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
    return 0;
}