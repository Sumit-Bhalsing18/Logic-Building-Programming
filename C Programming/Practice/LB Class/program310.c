//Unsigned chi garaj ahe bitwise problem madhe 
typedef unsigned int UNIT; //hyane pratek veles unsigned int ha motha word lihaychi garaj nahi 
//typedef use karun tumhala je define karaych ahe te kar 
#include<stdio.h>
int main()
{  
  UNIT iNo =0 ,iMask = 4;//4 ka dila karan 3rd bit ha 4 number var 1 ahe 
  UNIT iAns =0;
  printf("Enter number:");
  scanf("%d",&iNo);

  iAns = iNo & iMask ;
  if(iAns == iMask) //conditon jar true asel tar samjaych bit ON ahe mhnun 
  {
    printf("Third bit is ON");
  }
  else
  {
    printf("Third bit is OFF");
  }

  return 0;
}
//#define asla tar shakyato capital asta mhnun maintain karayla capital 