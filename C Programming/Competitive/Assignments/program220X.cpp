//write recursive program which accept Number from user and return its product of digits
/*
Enter Number :102
product of digits are :2

Enter Number :100
product of digits are :1
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

    if(iDigit != 0)   //jar 0 ala tar ignore hoil 
    {
      iProd = iProd * iDigit;
    }
    
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
/*
102

Digits:

2 × 0 × 1

आपण 0 ignore केला:

2 × 1 = 2*/
