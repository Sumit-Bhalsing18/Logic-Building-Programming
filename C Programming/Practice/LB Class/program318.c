      
typedef unsigned int UNIT;   
#include<stdio.h>
int main()
{  
  UNIT iMask =0X1;
  
  printf("%d\n", iMask);  //1
  iMask = iMask << 1;  
  
  printf("%d\n", iMask);  //2
  iMask = iMask << 1;
  printf("%d\n", iMask);  //4
  iMask = iMask << 1;
  printf("%d\n", iMask);  //8
  iMask = iMask << 1;
  printf("%d\n", iMask);  //16
  iMask = iMask << 1;
  printf("%d\n", iMask);  //32
  iMask = iMask << 1;
  printf("%d\n", iMask);  //64
  iMask = iMask << 1;
  printf("%d\n", iMask);  //125
  iMask = iMask << 1;
  return 0;
}
