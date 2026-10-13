//write recursive program which accept Number from user and return its factorial
/*
Enter Number :5
factorial of number are :120
*/
#include<iostream>
using namespace std;

int Display(int iNo)
{ 
  static int iFact = 1;

  if(iNo > 0) 
  {
    iFact = iFact * iNo;
    Display(iNo - 1);
  }
  return iFact;
}

int main()
{
  int iValue = 0 , iRet = 0;
  cout<<"Enter Number :";
  cin>>iValue;
  iRet =Display(iValue);
  cout<<"factorial of number are :"<<iRet;
  return 0; 
}
