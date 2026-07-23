#include<stdio.h>

void CallByAddress(int *iPtr)
{
  (*iPtr)++;
}
int main()
{
  int iValue=11;

  CallByAddress(&iValue);

  printf("value after function call :%d",iValue);
  return 0;
}