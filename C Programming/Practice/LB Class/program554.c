#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> // he ka ghetla karan c madhe boolean nahi  mhnun   // tu ghari c++ madhe kar

#pragma pack(1)
struct node
{
    int data;
    struct node* lchild;
    struct node* rchild;
};

typedef struct node NODE;  //generic sathi tula typedef kad ani c++ madhe kar
typedef struct node* PNODE;
typedef struct node** PPNODE;

int main()
{
    
    PNODE head = NULL;
    return 0;
}