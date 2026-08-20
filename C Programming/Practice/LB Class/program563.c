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


//Display sathi 3
//L D R
void Inorder(PNODE first)
{
    if(first != NULL)
    {
       Inorder(first->lchild);
       printf("%d\n" , first->data);
       Inorder(first->rchild);
    }
}

//D L R
void Preorder(PNODE first)
{
    if(first != NULL)
    {
       printf("%d\n" , first->data);
       Inorder(first->lchild);
       Inorder(first->rchild);
    }
}
//L R D
void Postorder(PNODE first)
{
    if(first != NULL)
    {
       Postorder(first->lchild);
       Postorder(first->rchild);
       printf("%d\n" , first->data);
    }
}
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

int Count(PNODE first)
{
    static int  iCount = 0; //ekdach run honar 

    if(first != NULL)
    {
        iCount++;
       Count(first->lchild);
       Count(first->rchild);
    }
    return iCount;
}

bool Search(PNODE first , int iNo)
{
   bool bFlag = false;

   while(first != NULL)
   {
     if(iNo == first->data)
     {
        bFlag == true;
        break;
     }
     else if(iNo > first->data)
     {
        first = first->rchild;
     }
     else if(iNo < first->data)
     {
        first = first->lchild;

     }
   }
   return bFlag;

}

int CountLeap(PNODE first)
{
    static int iCount = 0;

    if(first != NULL)
    {
        if(first->lchild == NULL && first->rchild == NULL) //donhi pn null pahije
        {
            iCount++;
        }
        CountLeap(first->lchild);  //he ka kele
        Countleap(first->rchild);
    }
    return iCount;
}
int main()
{
    
    PNODE head = NULL;
    int iRet = 0;

    Insert(&head ,11);//sequence important ahe & ka karan te tree change karnar 
    Insert(&head ,5);
    Insert(&head ,17);
    Insert(&head ,21);
    Insert(&head ,4);
    Insert(&head ,7);
    Insert(&head ,15);
  
    printf("Inorder Display :\n ");
    Inorder(head);    
    
    iRet = Count(head);
    printf("Number of nodes are: %d\n" ,iRet);

    if(Search(head , 25) == true)
    {
        printf("25 is present in BST\n");
    }
    else
    {
        printf("25 is not present in BST\n");
    }

    iRet = CountLeap(head);
    printf("Number of leaf nodes are: %d\n" ,iRet);
    return 0;
}
//MENu derivenn kar 
//BST  madhe duplication nast karan jar tu 2 nda ekach data dila tevha problem yeyil tyala kalnar nahi konta data deu 