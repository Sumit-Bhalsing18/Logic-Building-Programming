#include<stdio.h>
#include<stdlib.h> //malloc sathi

# pragma pack(1)  
struct node      
{
  int data;
  struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;  

int main()
{      
   struct node * newn = NULL ; //pointer

   newn =(struct node *)malloc(sizeof(struct node));  //dynamic memory allocation 
   
   newn -> data =11;
   newn -> next = NULL ;

   printf("%d\n" , newn ->data);
    return 0;                  
}
