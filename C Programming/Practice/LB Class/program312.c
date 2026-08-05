//Accept number from user and check whether 13th bit of that number is ON or OFF   13 th bit manje 2 raise to 12 yeil karan 2 raise to 0 pasn start hoto
//kuthli pn bit check karayla logic same rahnar fakt iMask change honar          
typedef unsigned int UNIT;   
#include<stdio.h>
int main()
{  
  UNIT iNo =0 ,iMask = 4096;//64 ka dila karan 7th bit ha 64 number var 1 ahe 
  UNIT iAns =0;
  printf("Enter number:");
  scanf("%d",&iNo);

  iAns = iNo & iMask ;
  if(iAns == iMask) //conditon jar true asel tar samjaych bit ON ahe mhnun 
  {
    printf("Thirteenth bit is ON");
  }
  else
  {
    printf("Thirteenth bit is OFF");
  }

  return 0;
}
/*
C:\Users\user5\OneDrive\Desktop\LB>myexe
Enter number:15
Thirteenth bit is OFF
C:\Users\user5\OneDrive\Desktop\LB>myexe
Enter number:4110
Thirteenth bit is ON
*/