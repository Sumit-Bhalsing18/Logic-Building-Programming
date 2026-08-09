#include<stdio.h>
# pragma pack(1)  
struct node      
{
  int data;
  struct node *next;
};
typedef struct node NODE ; //jast lihayla lagu nahi mhnun
int main()
{      
     NODE *head = NULL ;
                                      
     NODE obj1 , obj2 ,obj3;  
    
    head = &obj1;

    obj1.data =11;
    obj1.next = &obj2; 

    obj2.data = 21;
    obj2.next = &obj3;

    obj3.data = 51;
    obj3.next = NULL;
    
    printf("%d\n",head->data); 
    printf("%d\n",head->next->data);
    printf("%d\n",head->next->next->data);
  
   

    return 0;                  
}
