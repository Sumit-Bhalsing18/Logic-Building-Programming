//Accept number from user and toggle fourth bit of that number         
#include<stdio.h>
typedef unsigned int UNIT;
int main()
{  
  UNIT iNo = 0;
  UNIT iMask = 0;

  printf("Enter number \n");
  scanf("%d",&iNo);

  iMask = 0X00000008;  //imask detat karan kuthli position on ahe ki off te pahnyasathi

  iNo = iNo ^ iMask; //xor

  printf("updated number %d\n" ,iNo);

  return 0;
}
