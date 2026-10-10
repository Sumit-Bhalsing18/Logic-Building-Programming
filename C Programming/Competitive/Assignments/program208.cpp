//write recursive program which display below pattern

//Output  5 4 3 2 1
#include<iostream>
using namespace std;

void Display(int i)
{
  
  if(i > 0)
  {
    cout<<i<<"\t";
    Display(i - 1);
  }
}
int main()
{
  Display(5);
  return 0; 
}