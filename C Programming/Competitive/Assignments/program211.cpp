//write recursive program which display below pattern
//Input 5
//Output  * * * * *
#include<iostream>
using namespace std;

void Display(int iNo)
{
   if(iNo > 0)
   {
     cout<<"*"<<"\t";
     Display(iNo -1);
   }
}
int main()
{
  int iValue = 0;
  cout<<"Enter Input";
  cin>>iValue;
  Display(iValue);
  return 0; 
}