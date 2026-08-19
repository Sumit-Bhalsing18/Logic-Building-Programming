#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> // he ka ghetla karan c madhe boolean nahi tu ghari c++ madhe kar

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

void Insert(PPNODE first , int iNo)  //first madhe pahilya node cha addres rahil
{
    PNODE newn= NULL;   //navin node banavla
    PNODE temp = NULL;  //traversal sathi 

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(*first == NULL)       //root node ahe first manje
    {
        *first = newn;
    }
    else
    {
       temp = *first ; //root chi value dili 

       while(1)    
       {
           if(iNo > temp->data)
           {
                 if(temp->rchild == NULL)
                 {
                    temp->rchild = newn;
                    break;
                 }
                 temp = temp->rchild;
           }
           else if(iNo < temp->data)
           {
                 if(temp->lchild == NULL)
                 {
                    temp->lchild = newn;
                    break;
                 }
                 temp = temp->lchild;
           }
           else if(iNo == temp->data)   //manje duplicate node ala
           {
                printf("Unable to insert as element is duplicate \n");

                free(newn);//newn banaun thevla ahe mhnun atta toh navin free kar

                break;//controller sang thamb mhnun 
           }
       }
    }
}
int main()
{
    
    PNODE head = NULL;

    Insert(&head ,11);//sequence important ahe & ka karan te tree change karnar 
    Insert(&head ,5);
    Insert(&head ,17);
  
    return 0;
}
//BST  madhe duplication nast karan jar tu 2 nda ekach data dila tevha problem yeyil tyala kalnar nahi konta data deu 