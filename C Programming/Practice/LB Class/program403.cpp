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
    PNODE first ; //karan he change karayla nko mhnun 
    int iCount ;

    public:
    SinglyLL() ; // ha constructor ahe pn apn aplyala ha baher lihaycha ahe mhnun tithe value declare kelya    


    void Display() ;

    int Count();
    
    void InsertFirst(int iNo) ;
  
    void InsertLast(int iNo);

    void InsertAtPos(int iNo ,int iPos);
   
    void DeleteFirst()  ;
   
    void DeleteLast() ;
 
    void DeleteAtPos(int iPos)  ;//eka frame madhe sagl distay 

};
//class chya baher apn scope resolution takhun gheu shakto
//scope resolution :: manje ha function kontya class cha ahe he sangnyasathi vaprtat

//ha constructor SinglyLL class chach ahe 
SinglyLL::SinglyLL()    
{
    cout<<"Inside constructor";
    this->first = NULL;  
    this->iCount =0;
}
//return type//classname  //function name
void SinglyLL :: Display()
{

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
    
    return 0;
}
