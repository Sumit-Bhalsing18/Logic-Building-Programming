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

//apn c++ madhe class chya aat lihaych ast sagl 

/* this pointer ha current object cha address thevto ani object che non static data members access karto tyasathi use kela jato 
*/
class SinglyLL                   //singly linear linked list in c++
{
    public :
    PNODE first ;                //first ha LL chya pahilya node cha address store karto  //direct null deu shakat nahi   //atta singly ll 

    SinglyLL()
    {
        cout<<"Inside constructor";
        this->first = NULL;         // this ha current object cha pointer asto manje jevha aon SinglyLL sobj lihito tevha sobj ha object tayar zala 
    }                                //nantar constructor call zala ki ,
                                     // this manje &obj (tya object cha address asto)
};
int main()
{
    SinglyLL sobj;                    //object banavla singly ll  //he constructor la call karel 
    return 0;
}
