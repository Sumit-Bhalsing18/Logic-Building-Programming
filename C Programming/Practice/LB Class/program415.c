#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node* next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE first , PNODE last)       //1 pointer vadhla karan circle ahe null nahi kalnar nahi kuth thambaychay
{

}
int Count(PNODE first , PNODE last)
{
    return 0;
}
void InsertFirst(PPNODE first , PPNODE last ,int iNo)  //insert karayche ahe tar value sangavi lagel na
{

}
void InsertLast(PPNODE first , PPNODE last ,int iNo)
{
    
}
void InsertAtPos(PPNODE first , PPNODE last ,int iNo , int iPos)//1 parameter vadhla karan position sangayla lagel na kuth add karaycha ahe node 
{
    
}
void DeleteFirst(PPNODE first , PPNODE last)  //delete karaycha ahe tar mg value kivha position deychi garaj nahi 
{

}
void DeleteLast(PPNODE first , PPNODE last)
{
    
}
void DeleteAtPos(PPNODE first , PPNODE last , int iPos)
{
    
}

int main()
{
    PNODE head = NULL;
    PNODE tail = NULL;
    return 0;
}