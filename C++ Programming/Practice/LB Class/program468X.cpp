#include<iostream>
using namespace std;
struct node
{
  int data;
  struct node* next;

  node(int iNo)
  {
    data = iNo;
    next = NULL;
  }
};
class Queue
{
  private:
    struct node* first;
    int iCount ;

  public:
  Queue();
  void Display();
  int Count ();
  void Enqueue(int iNo);
  int Dequeue();
};
Queue :: Queue()
{
   first = NULL;
   iCount =0 ;
}
void Queue :: Display()
{
  struct node* temp = first;
   while(temp != NULL)
   {
    cout<<"| " <<temp->data <<" |\n";
    temp = temp->next;
   }
}
int Queue :: Count ()
{
   return iCount;
}
void Queue :: Enqueue(int iNo)
{
  struct node* newn = new node(iNo);
  if(first == NULL)
  {
    first = newn;
  }
  else
  {
    struct node* temp = first;
    while(temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = newn;
  }
  iCount++;
}
int Queue :: Dequeue()
{
   if(first == NULL)
   {
    cout<<"Stack is empty";
    return 0 ;
   }
   else
   {
    struct node* temp = first;
    int iValue = 0;

    iValue = first->data;
    first = first->next;
    delete temp;

    
    iCount--;
    return iValue;
   }
}
int main()
{

  Queue qobj;
  int iRet = 0;
  qobj.Enqueue(11);
  qobj.Enqueue(21);
  qobj.Enqueue(51);
  qobj.Enqueue(101);
  qobj.Display();
  iRet =qobj.Count();
  cout<<"Elements of Queue are :"<<iRet<<"\n";

  iRet = qobj.Dequeue();
   cout<<"Removed element is :" <<iRet<<"\n";
  qobj.Display();
  iRet =qobj.Count();
  cout<<"Elements of Queue are :"<<iRet<<"\n";

  return 0;
}