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

int main()
{
   PNODE newn = NULL ;//pointer create kela newn

   newn = new NODE; //dynamic memory allocate keli using new keyword  //type cast chi garaj nahi karan c++ madhe sytax chota hoto

   newn->data =11;  //node initialize kela
   newn->next= NULL;

   cout<<newn->data<<endl;

   delete newn;  //manje he free sarkh ahe c chya
    return 0;
}
