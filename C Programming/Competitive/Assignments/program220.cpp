//write recursive program which accept Number from user and return its product of digits
/*
Enter Number :523
product of digits are :30
*/
#include<iostream>
using namespace std;

int Display(int iNo)
{ 
  int iDigit = 0;
  static int iProd = 1;

  if(iNo > 0) 
  {
    iDigit = iNo % 10;
    iProd = iProd * iDigit;
    iNo = iNo / 10;
    Display(iNo);
  }
  return iProd;
}

int main()
{
  int iValue = 0 , iRet = 0;
  cout<<"Enter Number :";
  cin>>iValue;
  iRet =Display(iValue);
  cout<<"product of digits are :"<<iRet;
  return 0; 
}
