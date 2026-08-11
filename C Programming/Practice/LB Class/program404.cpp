#include<iostream>
using namespace std;
#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyLL    //linear linked list
{
    private:
    PNODE first ; //karan he change karayla nko mhnun private 
    int iCount ;

    public:
    SinglyLL() ; //declaration    


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
SinglyLL::SinglyLL()    
{
    this->first = NULL;  
    this->iCount =0;
}
//return type//classname  //function name
void SinglyLL :: Display()
{
  PNODE temp = NULL;
  temp = this->first; //temp madhe 100 ala

  while(temp!=NULL)
  {
    cout<<"| "<<temp->data<<" | ->";
    temp = temp->next;
  }
  cout<<"NULL"<<endl;
}

int SinglyLL :: Count()
{
    return this->iCount;
}
void SinglyLL ::  InsertFirst(int iNo) 
{

}
void SinglyLL ::  InsertLast(int iNo)
{

}
void SinglyLL ::  InsertAtPos(int iNo ,int iPos)
{

}
void SinglyLL ::  DeleteFirst()  
{

}
void SinglyLL ::  DeleteLast() 
{

}
void SinglyLL ::  DeleteAtPos(int iPos)  
{

}
int main()
{
    SinglyLL sobj;

    sobj.Display();
    
    return 0;
}
//foe madhe convert kar fakt c++ ch karan iCOunt ah emhnun 
