#include<stdio.h>

#pragma pack(1)  //atta padding honar nahi karan 1 byte ni memory milel //he compiler la dileli special instruction ahe hyala preprocessor directive mhantat
struct node      
{
  int data;
  struct node *next;
};
int main()
{
    struct node obj;  
    printf("%d\n" ,sizeof(obj));  //12
                               // 4(int la)  + 8(pointer)
    return 0;                  
}