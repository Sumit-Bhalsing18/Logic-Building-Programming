#include<stdio.h>

int Count(const char * str)  
{
  int iCount =0;
  while(*str != '\0')
  {
    if(*str == 'a' || *str == 'A') //case insensitive
    {
      iCount++;
    }
    str++;
  }
  return iCount;
}
int main()
{
  char Arr[50] = {'\0'};
  int iRet =0;
  printf("Enter string :\n");
  scanf("%[^'\n']s",Arr);     //ha %[^'\n']s issue solve karto 

  iRet =Count(Arr);  
  printf("frequency  is : %d\n",iRet);
  return 0;
}