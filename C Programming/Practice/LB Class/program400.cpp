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
    
    //5 nodes takhle  pn jar nantar first la NULL kel tar problem hoil mhnun public ghatak ahe 


    sobj.first = NULL; // DRAWBACK  ass kel tar purn node jail
    sobj.iCount = 15;//ll madhe node 5 ahet pn icount madhe 15 yetil nodes je ki nahit
    return 0;
}
