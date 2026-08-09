#include<stdio.h>

#pragma pack(1)  
struct node      
{
  int data;
  struct node *next;
};
int main()
{      
    struct node *head = NULL ; //sirani pahilya mulacha name (Address) lakshat thevl that is amit amit chya maghe sagle 30 mule ubha rahtil 
                               //pointer create kela  60 - 68 address         
    struct node obj1 , obj2 ,obj3;  
    
    head = &obj1; //pahilya poracha address name lakshat thevl

    obj1.data =11;
    obj1.next = &obj2; 

    obj2.data = 21;
    obj2.next = &obj3;

    obj3.data = 51;
    obj3.next = NULL;
    
    printf("%d\n",head->data); //11
    printf("%d\n",head->next->data);//21
    printf("%d\n",head->next->next->data); //51
  
    //head la . use karu shakat nahi karan toh pointer ahe pointer point karto dusryala apn hat dakhaun dakhu shakto mhnun ->

    return 0;                  
}
