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

class SinglyLL   
{
    private:         //private lihil karan he variables fakt class chya atun vaprta yetil baherun vaprta yenar nahi main baher cha ahe mhnun error yet ahe 
    PNODE first ; 
    int iCount ;

    public:
    SinglyLL()  
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


    sobj.first = NULL; // error karan atta varti private lihil ahe pn class public asnar karan class access karayla lagel mhnun public pn data(class che variables)  private thevne garjeche ahe 
    sobj.iCount = 15;
    return 0;
}
