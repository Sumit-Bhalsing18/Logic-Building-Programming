  //7bit check       
typedef unsigned int UNIT;   
#include<stdio.h>
int main()
{  
  UNIT iNo =0 ,iMask = 0X40;// 0X00001000 == 0X1000
  int iAns =0;
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
 