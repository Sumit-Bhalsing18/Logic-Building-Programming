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
    NODE obj ;// node cha object banavla  manje memoey allocate hoil 
    cout<<sizeof(obj)<<endl; //12
    return 0;
}
