      
typedef unsigned int UNIT;   
#include<stdio.h>
int main()
{  
  UNIT iMask =1;
  int iCnt =0;

  for(iCnt =1 ;iCnt < 32;iCnt++)   // jevha 32 la yeil value negative hoil karan 32 la te khal padt pudh jat nahi 
  {
              // Unsigned ahe mhnun %u
    printf("%d : %u\n",iCnt,iMask);
    iMask = iMask <<1;
  }
  return 0;
}
