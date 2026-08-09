#include<stdio.h>

#pragma pack(1) 
struct node      
{
  int data;
  struct node *next;
};
int main()
{
    struct node obj;  

    obj.data =11;
    obj.next = NULL;      //pointer ahe mhnun Null
    //direct memory intialization //static memory allocation 

    printf("%d\n" ,obj.data);

    return 0;                  
}