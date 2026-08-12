#include<iostream>
using namespace std;
#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyLL    //linear linked list
{
    private:
    PNODE first ; //karan he change karayla nko mhnun 
    int iCount ;

    public:
    DoublyLL() ; //declaration    


    void Display() ;

    int Count();
    
    void InsertFirst(int iNo) ;
  
    void InsertLast(int iNo);

    void InsertAtPos(int iNo ,int iPos);
   
    void DeleteFirst()  ;
   
    void DeleteLast() ;
 
    void DeleteAtPos(int iPos)  ;//eka frame madhe sagl distay 

};
//constructor name
DoublyLL::DoublyLL()    
{
    this->first = NULL;  
    this->iCount =0;
}
//return type//classname  //function name
void DoublyLL :: Display()
{
    PNODE temp = NULL;

    temp = this->first;
    while(temp != NULL)
    {
     cout<<" | "<<temp->data<<" | <=>";
     temp = temp->next;
    }
    cout<<"NULL\n";
}

int DoublyLL :: Count()
{
    return this->iCount;
}
   
void DoublyLL ::  InsertFirst(int iNo) 
{
    PNODE newn = NULL;

    newn = new NODE;

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
void DoublyLL ::  InsertLast(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data=iNo;
    newn->next= NULL;
    newn->prev= NULL;

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
      PNODE temp = NULL;
      temp = this->first;

      while(temp->next != NULL)
      {
        temp = temp->next;
      }
      temp->next = newn;
    }
    this->iCount++;
}
void DoublyLL ::  InsertAtPos(int iNo ,int iPos)
{

    if((iPos < 1) || (iPos > iCount + 1))
    {
        cout<<"Invalid position \n";
        return ;
    }
    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == iCount + 1)
    {
        InsertLast(iNo);
    }
    else
    {
        PNODE temp = NULL;
        PNODE newn = NULL;
        int i = 0;
        
        newn = new NODE;

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
void DoublyLL ::  DeleteFirst()  
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
        PNODE temp = NULL;
        temp = this->first;
        this->first  = this->first->next;
        delete temp;
        
    }
    this->iCount--;

}
void DoublyLL ::  DeleteLast() 
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
      PNODE temp = NULL;
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
void DoublyLL ::  DeleteAtPos(int iPos)  
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
    else if(iPos == iCount + 1)
    {
        DeleteLast();
    }
    else
    {
        PNODE temp = NULL;
        PNODE target = NULL;
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
    DoublyLL dobj;
    int iRet = 0;


    dobj.InsertFirst(51);
    dobj.InsertFirst(21);
    dobj.InsertFirst(11);
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of nodes are "<<iRet<<endl;

    dobj.InsertLast(101); 
    dobj.InsertLast(111); 
    dobj.InsertLast(121); 
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

    dobj.InsertAtPos(105,4);
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of nodes are :"<<iRet<<endl;

    dobj.DeleteAtPos(4);
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of nodes are"<<iRet;

    return 0;
}
