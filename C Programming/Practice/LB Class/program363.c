#include<stdio.h>

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
    PNODE head = NULL ; 
    PNODE temp = NULL;
    int iCount =0;
                                     
    NODE obj1 , obj2 ,obj3;  
    
    head = &obj1; 

    obj1.data =11;
    obj1.next = &obj2; 

    obj2.data = 21;
    obj2.next = &obj3;

    obj3.data = 51;
    obj3.next = NULL;

    temp = head;  //temp madhe ahe 100 
    
   
   while(temp != NULL)
   {
   
    iCount++;
    temp = temp -> next ;
   }
   printf("Number of nodes are :%d\n" ,iCount);
   
    return 0;                  
}
