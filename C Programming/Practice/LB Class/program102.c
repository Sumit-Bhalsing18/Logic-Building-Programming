#include<stdio.h>

void CallByValue(int iNo)
{
  iNo++;
}
int main()
{
  int iValue=11;

  CallByValue(iValue);

  printf("value after function call :%d",iValue);
  return 0;
}