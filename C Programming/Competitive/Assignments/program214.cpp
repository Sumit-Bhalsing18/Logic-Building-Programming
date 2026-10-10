//write recursive program which display below pattern
//Input 6
//Output  A B C D E F
#include<iostream>
using namespace std;

void Display(int iNo)
{
  static char ch = 'A';
  if(ch <= 'A' + iNo - 1) // 'A' + iNo - 1 = 70
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
/*
Enter Input6
A       B       C       D       E       F
*/