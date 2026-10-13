//write recursive program which accept Number from user and return smallest digit
/*
Enter Number :87983
Small Digit from Number is: 3

Enter Number :123
Small Digit from Number is: 1
*/
#include<stdio.h>
#include<string.h>


int SmallDigit(int iNo)
{ 
  int iDigit = 0;
  static int iMin = 9;
  
  if(iNo != 0)
  {
    iDigit = iNo % 10;

    if(iDigit < iMin)
    {
      iMin = iDigit;
    }
    iNo = iNo / 10;
    SmallDigit(iNo);

  }

  return iMin;  
}

int main()
{
  int  iRet = 0 ,iValue= 0;
  printf("Enter Number :");
  scanf("%d",&iValue);
  iRet =SmallDigit(iValue);
  printf("Small Digit from Number is: %d",iRet);
  return 0; 
}

