//write recursive program which display below pattern

//Output 1 2 3 4 5
#include<iostream>
using namespace std;

void Display(int i)
{
  
  if(i <= 5)
  {
    cout<<i<<"\t";
    Display(i + 1);
  }
}
int main()
{
  Display(1);
  return 0; 
}