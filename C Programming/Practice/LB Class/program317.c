//accept input and position from user        
typedef unsigned int UNIT;   
#include<stdio.h>
int main()
{  
  UNIT iNo =0 ,iMask = 0X1;
  int iAns =0 ,iPos =0;

  printf("Enter number\n:");
  scanf("%d",&iNo);

  printf("Enter Position\n:");
  scanf("%d",&iPos);

  iMask = iMask << (iPos -1);

  iAns = iNo & iMask ;
  if(iAns == iMask) 
  {
    printf("bit is ON");
  }
  else
  {
    printf("bit is OFF");
  }

  return 0;
}
