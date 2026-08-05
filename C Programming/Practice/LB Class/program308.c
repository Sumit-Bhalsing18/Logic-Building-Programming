//problems on bitwise operator
//Accept number from user and check whether third bit of that number is ON or OFF
//here check whether ahe manje ho YA nahi madhe answer deych ahe tar BOOL use kar 
//(third manje magun third karan this is Big Endian (MSB)) karan me intel use karto ahe )

/* OUTPUT
Enter number:97
Third bit is OFF
C:\Users\user5\OneDrive\Desktop\LB>myexe
Enter number:93 //jar aplyala 3rd bit 1 karaychi ahe tar 97 madhun -4 kar manje apli bit ON ah ass yeil 
*/
#include<stdio.h>
int main()
{  
  int iNo =0 ,iMask = 4;//4 ka dila karan 3rd bit ha 4 number var 1 ahe 
  int iAns =0;
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
