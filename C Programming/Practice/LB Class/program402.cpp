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
//typedef struct node** PPNODE;  //kadhla karan apn &head pathavnarch nahiye

class SinglyLL    //linear linked list
{
    private:
    PNODE first ; //karan he change karayla nko mhnun 
    int iCount ;

    public:
    SinglyLL()    //constructor  compiler call karnar ahe mhnun public 
    {
        cout<<"Inside constructor";
        this->first = NULL;  
        this->iCount =0;
    }

    void Display()  //parameter kahich nahi karan first directly milnar ahe
    {

    }
    int iCount()
    {
        return this ->iCount ;
    }
    void InsertFirst(int iNo)   //head kami zala
    {

    }
    void InsertLast(int iNo)   //head kami zala karan toh directly this kade jatoy
    {

    }
    void InsertAtPos(int iNo ,int iPos)   //head kami zala
    {

    }
    void DeleteFirst()   //head kami zala
    {

    }
    void DeleteLast()   //head kami zala
    {

    }
    void DeleteAtPos(int iPos)   //head kami zala
    {

    }
};
int main()
{
    SinglyLL sobj;
    
    return 0;
}
//c++ new sathi vegli header file lagnar nahi 

/* step
1 this vafra
2 class madhe fakt function declare kara karan class chota pahije ani eka najret disla pahije
*/