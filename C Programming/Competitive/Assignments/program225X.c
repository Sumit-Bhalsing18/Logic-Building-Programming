//write recursive program which accept Number from user and return its reverse number 
/*
Enter Number :523
325

Enter Number :123
321
*/
#include<stdio.h>
#include<string.h>


int ReverseNum(int iNo)
{ 
  int iDigit = 0 ;
  static int iRev = 0;
  
  if(iNo != 0)
  {
    iDigit = iNo % 10;
    iRev = (iRev * 10) + iDigit; //321
    iNo = iNo / 10;
    ReverseNum(iNo);
  }
  return iRev;  
}

int main()
{
  int  iRet = 0 ,iValue= 0;
  printf("Enter Number :");
  scanf("%d",&iValue);
  iRet = ReverseNum(iValue);
  printf("Reverse Number is : %d",iRet);
 
  return 0; 
}

