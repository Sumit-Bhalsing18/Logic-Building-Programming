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
  int iDigit = 0;
  static int iMin = 9;
  
  if(iNo != 0)
  {
    iDigit = iNo % 10;

    printf("%d",iDigit);
    iNo = iNo / 10;
    ReverseNum(iNo);

  }

  return iMin;  
}

int main()
{
  int  iRet = 0 ,iValue= 0;
  printf("Enter Number :");
  scanf("%d",&iValue);
  ReverseNum(iValue);
 
  return 0; 
}

