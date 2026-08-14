#include<iostream>
using namespace std;
#pragma pack(1)
struct node
{
    int data;
    struct node* next = NULL;
    struct node* prev = NULL;
};

typedef struct node NODE;
typedef struct node* PNODE;
//PPNODE lagat nahi 
#pragma pack(1)
class DoublyCL
{
    private: 
     
    int data; 
    struct node *next ;
    struct node *prev ;


};
int main()
{
    DoublyCL dobj ;
    cout<<sizeof(dobj)<<"\n";
    return 0;
}