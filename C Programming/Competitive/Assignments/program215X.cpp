//write recursive program which display below pattern
//Input 7
//Output  a b c d e f g
#include<iostream>
using namespace std;

void Display(char ch)
{
  static char c = 'a';
  if(c <= ch)
  {
    cout<<c<<"\t";
    c++;
    Display(ch);
  }
}
int main()
{
  char cValue = 0;
  cout<<"Enter character Input ";
  cin>>cValue;
  Display(cValue);
  return 0; 
}
