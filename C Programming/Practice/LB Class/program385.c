#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)   //manje hyane 20 byte bhetel
struct node
{
  int data;
  struct node* next;
  struct node* prev;   //$
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

int main()
{
    printf("%d\n",sizeof(NODE)); // 20 byte
    return 0;
}