//write recursive program which display below pattern

//Output * * * * * 
#include<iostream>
using namespace std;

void Display()
{
  static int i = 1;
  if(i <= 5)
  {
    cout<<"*"<<"\t";
    i++;
    Display();
  }
}
int main()
{
  Display();
  return 0; 
}