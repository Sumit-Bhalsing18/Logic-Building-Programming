#include<stdio.h>

#pragma pack(1)  
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
//SEQUENCE     
    printf("%d\n" , temp->data);//11



    temp = temp -> next ; //200 manje pahilya node chya next 
    printf("%d\n" , temp->data);//21

    temp = temp -> next ; //300 
    printf("%d\n" , temp->data);//51

    temp = temp -> next ; //Null
 //while use honar karan jopyrnt run kar topyrnt null yet nahi
  
    return 0;                  
}
//linked list traversal karnyasathi temp = temp ->next he i++ sarkh ahe