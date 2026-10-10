//write recursive program which display below pattern
//Input 7
//Output  a b c d e f g
#include<iostream>
using namespace std;

void Display(int iNo)
{
  static char ch = 'a';   //97 + 6 = 103
  if(ch <= 'a' + iNo - 1) // 'a' + iNo - 1 = 103
  {
    cout<<ch<<"\t";
    ch++;
    Display(iNo);
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
