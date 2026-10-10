//write recursive program which display below pattern
//Input 5
//Output  1 2 3 4 5
#include<iostream>
using namespace std;

void Display(int i ,int iNo)
{
  if(i <= iNo)
  {
    cout<<i<<"\t";
    Display(i + 1 ,iNo);
  }
}
int main()
{
  int iValue = 0;
  cout<<"Enter Input";
  cin>>iValue;
  Display(1,iValue);
  return 0; 
}