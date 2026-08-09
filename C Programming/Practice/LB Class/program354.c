#include<stdio.h>

# pragma pack(1) 
struct node      
{
  int data;
  struct node *next;
};
int main()
{               //data ani pointer ass 12 byte ,  ithe 2 mule ahet
    struct node obj1 , obj2;  

    obj1.data =11;
    obj1.next = &obj2; 

    obj2.data = 21;
    obj2.next = NULL;
    //2 mule ahet pahilya ne dusryachya khandyavr hat thevla ani dusryane khali thevlay

    printf("%d\n" ,obj1.data);
    printf("%d\n" ,obj2.data);

    return 0;                  
}