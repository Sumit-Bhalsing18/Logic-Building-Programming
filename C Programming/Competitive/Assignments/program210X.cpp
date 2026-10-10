//write recursive program which display below pattern

//Output  a b c d e f
#include<iostream>
using namespace std;

void Display(char ch)
{
  if(ch <= 'f')
  {
    cout<<ch<<"\t";
    Display(++ch);
  }
}
int main()
{
  Display('a');
  return 0; 
}