//homework
#include<iostream>
using namespace std;
#pragma pack(1)
struct node
{
    int data;
    struct node* next = NULL;
    struct node* prev = NULL;
};

typedef struct node NODE;
typedef struct node* PNODE;
//PPNODE lagat nahi 
#pragma pack(1)
class DoublyCL
{
    private:  
    int iCount; 
    PNODE first ;
    PNODE last ;

    public:
    DoublyCL();

    void Display();
    int Count();

    void InsertFirst(int iNo);
    void InsertLast(int iNo);
    void InsertAtPos(int iNo , int iPos); 

    void DeleteFirst();
    void DeleteLast();
    void DeleteAtPos(int iPos);
};
 DoublyCL :: DoublyCL()
{
   cout<<"Inside constructor\n";
   first = NULL;
   last =  NULL;
   iCount = 0;
}
void DoublyCL ::  Display()
{

}
int  DoublyCL :: Count()
{
    return iCount;
}
void  DoublyCL :: InsertFirst(int iNo)
{

}
void  DoublyCL :: InsertLast(int iNo)
{

}
void  DoublyCL :: InsertAtPos(int iNo , int iPos)
{

} 
void  DoublyCL :: DeleteFirst()
{

}
void  DoublyCL :: DeleteLast()
{

}
void  DoublyCL :: DeleteAtPos(int iPos)
{

}
int main()
{
    DoublyCL dobj ;
    cout<<sizeof(dobj)<<"\n";
    return 0;
}