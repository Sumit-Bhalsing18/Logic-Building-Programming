//Accept number from user and check whether 7 bit of that number is ON or OFF
//atta imask kasa gheycha 7 bit manje                                           64  32  16   8  4  2  1      64 ha (2 raise to 6) he 
//kuthli pn bit check karayla logic same rahnar fakt iMask change honar          7  6    5   4  3  2  1  
typedef unsigned int UNIT;   
#include<stdio.h>
int main()
{  
  UNIT iNo =0 ,iMask = 64;//64 ka dila karan 7th bit ha 64 number var 1 ahe 
  UNIT iAns =0;
  printf("Enter number:");
  scanf("%d",&iNo);

  iAns = iNo & iMask ;
  if(iAns == iMask) //conditon jar true asel tar samjaych bit ON ahe mhnun 
  {
    printf("Seventh bit is ON");
  }
  else
  {
    printf("Seventh bit is OFF");
  }

  return 0;
}
 