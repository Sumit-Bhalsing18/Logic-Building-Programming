#include<iostream>
using namespace std;
#pragma pack(1)

template<class T>
struct node
{
    T data;
    struct node* next;
    struct node* prev;
};

template<class T>
class DoublyLL    //linear linked list
{
    private:
    struct node<T>* first ; //node<int>, node<float>, node<char>... यापैकी कोणता type तयार करायचा ते कळत नाही.
    int iCount ;

    public:
    DoublyLL() ; //declaration    


    void Display() ;

    int Count();
    
    void InsertFirst(T iNo) ;
  
    void InsertLast(T iNo);

    void InsertAtPos(T iNo ,int iPos);
   
    void DeleteFirst()  ;
   
    void DeleteLast() ;
 
    void DeleteAtPos(int iPos)  ;//eka frame madhe sagl distay 

};
//constructor name
template<class T>  // template<class T> हे compiler ला सांगतं की खाली लिहिलेलं function हे template class DoublyLL<T> चंच function आहे.
DoublyLL<T> ::DoublyLL()    
{
    this->first = NULL;  
    this->iCount =0;
}
//return type//classname  //function name
template<class T>
void DoublyLL<T>:: Display()
{
    struct node<T>* temp = NULL;

    temp = this->first;
    while(temp != NULL)
    {
     cout<<" | "<<temp->data<<" | <=>";
     temp = temp->next;
    }
    cout<<"NULL\n";
}
template<class T>
int DoublyLL<T> :: Count()
{
    return this->iCount;
}
 template<class T>  
void DoublyLL<T> ::  InsertFirst(T iNo) 
{
    struct node<T>* newn = NULL;

    newn = new struct node<T>;

    newn->data=iNo;
    newn->next= NULL;
    newn->prev= NULL;

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
        newn->next = this->first;
        this->first->prev = newn;
        this->first = newn;
    }
    this->iCount++;
}
template<class T>
void DoublyLL<T> ::  InsertLast(T iNo)
{
    struct node<T>* newn = NULL;

    newn = new struct node<T>;

    newn->data=iNo;
    newn->next= NULL;
    newn->prev= NULL;

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
      struct node<T>* temp = NULL;
      temp = this->first;

      while(temp->next != NULL)
      {
        temp = temp->next;
      }
      temp->next = newn;
    }
    this->iCount++;
}
template<class T>
void DoublyLL<T> ::  InsertAtPos(T iNo ,int iPos)
{

    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid position \n";
        return ;
    }
    if(iPos == 1)
    {int
        InsertFirst(iNo);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(iNo);
    }
    else
    {
        struct node<T>* temp = NULL;
        struct node<T>* newn = NULL;
        int i = 0;
        
        newn = new struct node<T>;

        temp= this->first;

        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;


        for(i =1 ;i< iPos -1 ;i++)
        {
            temp = temp->next;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        temp->next =newn;
        newn->prev= temp;

    }
     this->iCount++;
}
template<class T>
void DoublyLL<T> ::  DeleteFirst()  
{
   if(this->first == NULL)
    {
     return ;
    }
    else if(this->first->next == NULL)
    {
       delete this->first;
       this->first = NULL;
    }
    else
    {
        struct node<T>* temp = NULL;
        temp = this->first;
        this->first  = this->first->next;
        delete temp;
        
    }
    this->iCount--;

}
template<class T>
void DoublyLL<T> ::  DeleteLast() 
{
   if(this->first == NULL)
    {
      return ;
    }
    else if(this->first->next == NULL)
    {
       delete this->first;
       this->first = NULL;
    }
    else
    {
      struct node<T>* temp = NULL;
      temp = this->first ;

      while(temp->next->next != NULL)
      {
        temp = temp ->next;
      }
      delete temp->next;
      temp->next = NULL;
        
    }
    this->iCount--;
}
template<class T>
void DoublyLL<T> ::  DeleteAtPos(int iPos)  
{
    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid position \n";
        return ;
    }
    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        struct node<T>* temp = NULL;
        struct node<T>* target = NULL;
        int i = 0;

        temp= this->first;

        for(i =1 ;i< iPos -1 ;i++)
        {
            temp = temp->next;
        }
        target = temp->next;
        temp->next = target->next;
        target->next->prev = temp;
        delete target;


    }
     this->iCount--;
}
int main()
{
    DoublyLL<float> dobj;
    int iRet = 0;


    dobj.InsertFirst(51.2);
    dobj.InsertFirst(21.2);
    dobj.InsertFirst(11.2);
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of nodes are "<<iRet<<endl;

    dobj.InsertLast(101.2); 
    dobj.InsertLast(111.2); 
    dobj.InsertLast(121.2); 
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of nodes are "<<iRet<<endl;
    
    dobj.DeleteFirst();
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of nodes are "<<iRet<<endl;

    dobj.DeleteLast();
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of nodes are "<<iRet<<endl;   

    dobj.InsertAtPos(105.2,4);
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of nodes are :"<<iRet<<endl;

    dobj.DeleteAtPos(4);
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of nodes are"<<iRet;

    return 0;
}
