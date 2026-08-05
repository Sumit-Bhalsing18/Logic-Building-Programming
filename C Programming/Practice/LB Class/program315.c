          
typedef unsigned int UNIT;   
#include<stdio.h>
int main()
{  
  UNIT iNo =0 ,iMask = 0X00001000;// 0X00001000 == 0X1000
  printf("Enter number:");
  scanf("%d",&iNo);

  iAns = iNo & iMask ;
  if(iAns == iMask) //conditon jar true asel tar samjaych bit ON ahe mhnun 
  {
    printf("Seventinth bit is ON");
  }
  else
  {
    printf("Seventinth bit is OFF");
  }

  return 0;
}
