//MENU DRIVEN
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
SinglyLL::SinglyLL()     //constructor aslya mule return type nahiye 
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
    PNODE newn = NULL ; //new pointer
    newn = new NODE;  //memory allocate keli mulga alay

    newn->data =iNo;  //mulala number de
    newn->next = NULL;

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
       newn->next = this->first;
       this->first =  newn ;
    }

    this->iCount++;//kuthlya hi loop madhun baher yeude iCount ++ hoil mhnun last la delay 
}
void SinglyLL ::  InsertLast(int iNo)
{
    PNODE newn = NULL ; //new pointer
    PNODE temp = NULL;
    newn = new NODE;  //memory allocate keli mulga alay

    newn->data =iNo;  //mulala number de
    newn->next = NULL;

    if(this->first == NULL)
    {
        this->first = newn;
    }
    else
    {
       temp = this->first;
       while(temp->next != NULL)
       {
        temp = temp ->next;
       }
       temp->next = newn;   //manje atta last la node thakla 

    }
    this->iCount++;
}
void SinglyLL ::  InsertAtPos(int iNo ,int iPos)
{
   PNODE temp = NULL;
   PNODE newn = NULL;
   int i =0;
   
   if((iPos < 1) ||(iPos > iCount + 1))
   {
    cout<<"Invalid position \n";
    return ;
   }
   if(iPos == 1)
   {
       InsertFirst(iNo);   //this->InsertFirst(iNo); lihila tari chalele
   }
   else if(iPos == iCount + 1)
   {
       InsertLast(iNo);
   }
   else
   {

    newn = new NODE ;

    newn->data = iNo;
    newn->next = NULL;

    temp = this->first;

    for(i=1 ; i < iPos -1 ;i++)
    {
         temp = temp->next;
    }
    newn->next = temp->next;  //right side zhali 
    temp->next = newn;        //atta left 
    iCount++;
   }
}
void SinglyLL ::  DeleteFirst()  
{
    PNODE temp = NULL;
    if(this->first == NULL)
   {
    return;
   }
   else if(this->first->next == NULL)
   {
     delete this->first ;  //ethe free nahi delete use karaycha udvaycha mhntlyavr
     this->first = NULL;
   }
   else
   {
       temp = this->first;
       this->first = this-> first->next;
       delete temp ;
   }
   this->iCount--; // delte ahe ,hmum node kami honar ahe mhnun --
}
void SinglyLL ::  DeleteLast() 
{
    PNODE temp = NULL;
   if(this->first == NULL)
   {
    return;
   }
   else if(this->first->next == NULL)
   {
     delete this->first ;  //ethe free nahi delete use karaycha udvaycha mhntlyavr
     this->first = NULL;
   }
   else
   {
      temp= this->first;

      while(temp->next->next != NULL)
      {
        temp = temp ->next;
      }
      delete temp->next;
      temp->next = NULL;
   }
   this->iCount--;
}
void SinglyLL ::  DeleteAtPos(int iPos)  
{
    PNODE temp = NULL;
    PNODE target = NULL;
   int i =0;
    if((iPos < 1) ||(iPos > iCount + 1))
   {
    cout<<"Invalid position \n";
    return ;
   }
   if(iPos == 1)
   {
       DeleteFirst();   //this->InsertFirst(iNo); lihila tari chalele
   }
   else if(iPos == iCount)
   {
       DeleteLast();
   }
   else
   {
    temp = this->first;
     for(i=1 ; i < iPos -1 ;i++)
     {
         temp = temp->next;
     }
     target = temp ->next;
     temp->next = target->next;
     delete target;
     iCount--;
   }
}
int main()
{
    SinglyLL sobj ;

    int iChoice =0; //choice karayla 
    int iValue = 0;//user la vicharayla
    int iRet =0 ;//value pakdayla
    int iPosition = 0 ;

    while(iChoice !=10 )  //unconditional loop
    {
        cout<<"----------------------------------\n";
        cout<<"Enter your choice : \n";
        cout<<"-----------------------------------\n";
        cout<<"1 : Insert node at first position\n";
        cout<<"2 : Insert node at last position\n";
        cout<<"3 : Insert node at given position\n";
        cout<<"4 : Delete node at first position\n";
        cout<<"5 : Delete node at last position\n";  
        cout<<"6 : Delete node at given position\n"; 
        cout<<"7 : Display the elements\n";
        cout<<"8 : Count the number of elements\n";
        cout<<"9 : terminate the application \n";
         cout<<"-------------------------------------\n";

        cin>>iChoice;

        switch(iChoice)
        {
            case 1 :
                cout<<"Enter the value : \n";
                cin>>iValue;
                sobj.InsertFirst(iValue);
                break;
            case 2 :
                cout<<"Enter the value : \n";
                cin>>iValue;
                sobj.InsertLast(iValue);
                break;  
             case 3 :
                cout<<"Enter the value : \n";
                cin>>iValue;
                cout<<"Enter the position \n";
                cin>>iPosition;
                sobj.InsertAtPos(iValue , iPosition);
                break;
             case 4 :
                sobj.DeleteFirst();
                break;     
             case 5 :
                sobj.DeleteLast();
                break;
             case 6 :
                cout<<"Enter the position \n";
                cin>>iPosition;
                sobj.InsertAtPos(iValue, iPosition);
                break; 
            case 7:
                 cout<<"Elements of linked list are : \n";
                 sobj.Display();
                 break;
                 
            case 8 :
            iRet = sobj.Count();
            cout<<"Number of elements are :"<<iRet<<"\n";
            break;

            case 9 :
                cout<<"Thanku for using marvellous infosystem application\n";
                break;

            default:

            cout<<"Invalid input";
        }
    }
    
   return 0;
}
