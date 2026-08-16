#include<iostream>
using namespace std;

#pragma pack(1)
template<class T>
struct node
{
    T data;
    struct node* next;
};
template<class T>
class Stack
{
    private:
      struct node<T>* first;
      int iCount ;

    public:
        Stack();      //constructor

        void Push(T iNO);  //InsertFirst

        T Pop() ;          //DeleteFirst

        T Peep();          //fakt data anun denar DeleteFirst sarkh ahe delete kahi karanar nahi

        void Display();

        int Count();

};
template<class T>
Stack<T> :: Stack()     
{

   first = NULL;
    this->iCount = 0;
}
template<class T>
void Stack<T> :: Push(T iNo)  
{
  struct node<T>* newn = NULL;
  newn = new struct node<T>();

  newn->data = iNo;
  newn->next = NULL;

  newn->next = first;
  first = newn;
  

  iCount++;
}
template<class T>
T Stack<T> :: Pop()          
{
  T iValue  = 0 ;//value store karayla ghetla 
  struct node<T>* temp = NULL;

   if(first == NULL)  
   {
    cout<<"Stack is empty\n";
    return -1;
   }
   else
   {
      iValue = first->data;  //first cha data iValue madhe store hoil
      temp = first;

      first = first->next;
      delete temp;

      iCount--;

      return iValue ;
   }
}
template<class T>
T Stack<T> :: Peep()       
{
  T iValue  = 0 ;//value store karayla ghetla 

   if(first == NULL)  
   {
    cout<<"Stack is empty\n";
    return -1;
   }
   else
   {
      iValue = first->data;  //first cha data iValue madhe store hoil

      return iValue ;
   }
}
template<class T>
void Stack<T> :: Display()
{
   struct node<T> * temp = NULL;
   temp = first;

   while(temp != NULL)
   {
    cout<<"| "<<temp->data<<" |\n";
    temp = temp->next;
   }
}
template<class T>
int Stack<T> :: Count()
{
  return iCount;
}
int main()
{
    Stack<int> sobj;  //stack chya class cha object
    int iRet = 0;
    sobj.Push(11);
    sobj.Push(21);
    sobj.Push(51);
    sobj.Push(101);
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Elements of the stack are :"<<iRet<<"\n";

    iRet = sobj.Pop();
    cout<<"Removed(Poped) element is :" <<iRet<<"\n";
    sobj.Display();
    iRet = sobj.Count();
    cout<<"Elements of the stack are :"<<iRet<<"\n"; 
    
    iRet = sobj.Pop();
    cout<<"peep element is :" <<iRet<<"\n";

    sobj.Display();
    iRet = sobj.Peep();
    cout<<"Peeped of the stack are :"<<iRet<<"\n";     
    return 0;
}
/*
कुठे T वापरायचा?
Variable/Function	     T की int?	                               कारण
data	                   ✅ T	                        Data type बदलतो
next                   	❌ नाही	Pointer आहे
first                     	node<T>*	                    Template node आहे
Push(T iNo)	             ✅ T		                   User कोणताही datatype देऊ शकतो
Pop()	                   ✅ T		                   कोणताही datatype return होऊ शकतो
Peep()	                ✅ T		                   कोणताही datatype return होऊ शकतो
iValue	               ✅ T		                   Data store करतो
Count()		             ❌ 	                   int	Count नेहमी integer असतो
iCount		              ❌ 	                   int	Elements मोजतो
*/