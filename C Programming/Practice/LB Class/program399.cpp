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
typedef struct node** PPNODE;

class SinglyLL    //linear linked list
{
    public :
    
    PNODE first ; 
    int iCount ;
    SinglyLL()    //constructor
    {
        cout<<"Inside constructor";
        this->first = NULL;  
        this->iCount =0;
    }
};
int main()
{
    SinglyLL sobj;
    cout<<sobj.first<<endl;
    cout<<sobj.iCount<<endl;
    return 0;
}
