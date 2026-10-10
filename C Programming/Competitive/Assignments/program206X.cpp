//write recursive program which display below pattern

//Output * * * * * 
//Bina static variable use karta program
#include<iostream>
using namespace std;

void Display(int i)
{
  if(i > 0)
  {
    cout<<"*"<<"\t";
    Display(i - 1);
  }
}
int main()
{
  Display(5);
  return 0; 
}