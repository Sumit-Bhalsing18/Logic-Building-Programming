//Accept number from user and check whether 17th bit of that number is ON or OFF   13 th bit manje 2 raise to 12 yeil karan 2 raise to 0 pasn start hoto
          
typedef unsigned int UNIT;   
#include<stdio.h>
int main()
{  
  UNIT iNo =0 ,iMask = 0X10000;//1 chya left wale xero na kahi mahtav nast tar te nahi lihile tari chaltat  
  UNIT iAns =0;
  printf("Enter number:");
  scanf("%d",&iNo);

  iAns = iNo & iMask ;
  if(iAns == iMask)  
  {
    printf("Seventinth bit is ON");
  }
  else
  {
    printf("Seventinth bit is OFF");
  }

  return 0;
}
 