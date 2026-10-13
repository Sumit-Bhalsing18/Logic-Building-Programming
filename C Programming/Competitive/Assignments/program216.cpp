//write recursive program which accept Number from user and diplay below pattern
//Input 5
//Output  5 * 4 * 3 * 2 * 1 *
#include<iostream>
using namespace std;

void Display(int iNo)
{ 
  if(iNo > 0) 
  {
    cout<<iNo<<"\t*\t";
    Display(iNo - 1);
  }
}
int main()
{
  int iValue = 0;
  cout<<"Enter Number :";
  cin>>iValue;
  Display(iValue);
  return 0; 
}
