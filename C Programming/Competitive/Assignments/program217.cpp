//write recursive program which accept Number from user and return Summation of its digits
/*
Enter Number :123
Summation of its digits 6

Enter Number :879
Summation of its digits 24
*/
#include<iostream>
using namespace std;

int Summation(int iNo)
{ 
  int iDigit = 0;
  static int iSum = 0;

  if(iNo != 0) 
  {
    iDigit = iNo % 10;
    iSum = iSum + iDigit;
    iNo = iNo / 10;
    Summation(iNo);
  }
  return iSum;
}

int main()
{
  int iValue = 0 , iRet = 0;
  cout<<"Enter Number :";
  cin>>iValue;
  iRet =Summation(iValue);
  cout<<"Summation of its digits "<<iRet;
  return 0; 
}
