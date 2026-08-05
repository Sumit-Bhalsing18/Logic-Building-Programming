//Unsigned chi garaj ahe bitwise problem madhe 
#include<stdio.h>
int main()
{  
  unsigned int iNo =0 ,iMask = 4;//4 ka dila karan 3rd bit ha 4 number var 1 ahe 
  unsigned int iAns =0;
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
//unsigned lihi karan unsigned la tula saglya 32 bit use karta yetat
//signed madhe tula fakt 31 bit use karta yetat 1 bit negative ahe ka positive hya sathi aste
//Unsigned modifier ahe toh size change karto  