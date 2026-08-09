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
                                     
    NODE obj1 , obj2 ,obj3;  
    
    head = &obj1; 

    obj1.data =11;
    obj1.next = &obj2; 

    obj2.data = 21;
    obj2.next = &obj3;

    obj3.data = 51;
    obj3.next = NULL;

    temp = head;  //temp madhe ahe 100 
    
   //ITERATION
   
   while(temp != NULL)
   {
    printf("%d\n" , temp->data);
    temp = temp -> next ;
   }
   
    return 0;                  
}
//head la aplyala japayche ahe karan je japle nahi tar hya case madhe while chya nantar head aplyala Null bhetel ani 100 visrun jail 
