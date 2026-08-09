#include<stdio.h>

#pragma pack(1)  
struct node      
{
  int data;
  struct node *next;
};
int main()
{               
    struct node obj1 , obj2 ,obj3;  

    obj1.data =11;
    obj1.next = &obj2; 

    obj2.data = 21;
    obj2.next = &obj3;

    obj3.data = 51;
    obj3.next = NULL;
  

    printf("%u\n" ,&obj1);
    printf("%d\n" ,&obj2);
    printf("%d\n" ,&obj3);

    printf("%d\n" ,obj1.next);
    printf("%d\n" ,obj2.next);
    printf("%d\n" ,obj3.next); //null

    printf("%d\n" ,obj1.data); //. karan data hatat ahe 
    printf("%d\n" ,obj1.next->data);
    printf("%d\n" ,obj1.next->next->data);  //51

    return 0;                  
}
