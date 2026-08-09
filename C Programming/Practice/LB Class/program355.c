#include<stdio.h>

# pragma pack(1)  
struct node      
{
  int data;
  struct node *next;
};
int main()
{               
    struct node obj1 , obj2;  

    obj1.data =11;
    obj1.next = &obj2; 

    obj2.data = 21;
    obj2.next = NULL;
  

    printf("%u\n" ,&obj1);
    printf("%u\n" ,&obj2);
    printf("%u\n" ,obj1.next);
    printf("%u\n" ,obj2.next);
    printf("%d\n" ,obj1.next->data);

    return 0;                  
}
//every programming language give virtual address khot khota address
/*
6422296
6422288
6422288
0
21
*/