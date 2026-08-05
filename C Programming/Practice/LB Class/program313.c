//Accept number from user and check whether 17th bit of that number is ON or OFF   13 th bit manje 2 raise to 12 yeil karan 2 raise to 0 pasn start hoto
//kuthli pn bit check karayla logic same rahnar fakt iMask change honar          
typedef unsigned int UNIT;   
#include<stdio.h>
int main()
{  
  UNIT iNo =0 ,iMask = 0X00010000;//hexadecimal
  UNIT iAns =0;
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
//interview madhe te calculator use karun detil ka ani nahi tar mg kas input deych aplyala mahit nasel na hexadecimal che 