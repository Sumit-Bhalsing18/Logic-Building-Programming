//write recursive program which accept Number from user and return largest digit
/*
Enter Number :123
largest digit from number is : 3

Enter Number :87983
largest digit from number is : 9
*/
#include<stdio.h>
#include<string.h>


int LargestDigit(int iNo)
{ 
  int iDigit = 0;
  static int iMax = 0;//static jar nasta tar 3 remove houn parat 0 zala asta mg answer chukiche ale aste

  if(iNo != 0)
  {
    iDigit = iNo % 10;

    if(iDigit > iMax)
    {
      iMax = iDigit;
    }
    
    iNo = iNo / 10;
    LargestDigit(iNo);
  }
  return iMax;  
}

int main()
{
  int  iRet = 0 , iValue =0;
  printf("Enter Number :");
  scanf("%d",&iValue);
  iRet =LargestDigit(iValue);
  printf("largest digit from number is : %d",iRet);
  return 0; 
}

