      
typedef unsigned int UNIT;   
#include<stdio.h>
int main()
{  
  //largest value of int
  UNIT iNo =0;
  UNIT iMask = 0;

  printf("Enter number;");
  scanf("%d",&iNo);

  iMask = 0X00000008 ;  //4 positon vicharat ahet

  iNo = iNo ^ iMask;  //XOR
  printf("Updated number:%d\n",iNo);
  
  return 0;
}
