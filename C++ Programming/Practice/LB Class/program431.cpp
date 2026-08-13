#include<iostream>
using namespace std;

#pragma pack(1)
struct node 
{
   int data;
   struct node* next;

};
typedef struct node NODE;
typedef struct node* PNODE;
class SinglyCL
{
   private:
     PNODE first ;
     PNODE last ;
     int iCount;

   public:
   SinglyCL();
   
   void Display();   //ethe declare hotil baher define hotil
    
   int Count();

   void InsertFirst(int iNo);

   void InsertLast(int iNo);

   void InsertAtFirst(int iNo , int iPos);

   void DeleteFirst();

   void DeleteLast();

   void DeleteAtPos(int iPos);

   
};
SinglyCL :: SinglyCL()
{
   cout<<"Inside constructor";
   this->first = NULL;
   this->last = NULL;
   this->iCount = 0;
}

void SinglyCL :: Display()
{
   PNODE temp = NULL;
   if(first == NULL && last== NULL)
   {
      return ;
   }
   //pratek function la temp compulsory ahe traversal sathi
   temp = first;

   do
   {
       cout<<"| "<<temp->data<<" |->" ;
       temp = temp->next;
   }while(temp !=(last) ->next);

   cout<<"\n";
   
}
 
int SinglyCL :: Count()
{
  return iCount;
}
void SinglyCL :: InsertFirst(int iNo)
{
   PNODE newn = NULL;

   newn = new NODE;

   newn->data = iNo;
   newn->next = NULL;

   if(first == NULL && last == NULL)
   {
      first = newn;
      last = newn;
   }
   else
   {
      
   }
   iCount++;
}
void SinglyCL :: InsertLast(int iNo)
{
   PNODE newn = NULL;

   newn = new NODE;

   newn->data = iNo;
   newn->next = NULL;

   if(first == NULL && last == NULL)
   {
      first = newn;
      last = newn;
   }
   else
   {

   }
   iCount++;
}
void SinglyCL :: InsertAtFirst(int iNo , int iPos)
{

}
void SinglyCL :: DeleteFirst()
{

}
void SinglyCL :: DeleteLast()
{

}
void SinglyCL :: DeleteAtPos(int iPos)
{

}
int main()
{
   SinglyCL sobj;
   return 0;
}