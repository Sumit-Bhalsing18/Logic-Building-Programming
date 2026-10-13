//write recursive program which accept String from user and count number of characters

#include<iostream>
using namespace std;

int Display(string str)
{ 
  static int iCount = 0;
  static int i = 0;
  if(str[i] != '\0') 
  {
    iCount++;
    i++;
    Display(str);
  }
  return iCount;
}

int main()
{
  int iValue = 0 , iRet = 0;
  string str ;
  cout<<"Enter String :";
  cin>>str;
  iRet =Display(str);
  cout<<"number of characters are :"<<iRet;
  return 0; 
}
