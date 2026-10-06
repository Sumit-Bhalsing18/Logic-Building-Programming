//write a program which accept string from user and count number of white spaces
/*
Enter string :marvellouS
Number of white spaces are: 0

Enter string :hello my name is sumit
Number of white spaces are: 4
*/
#include<stdio.h>

int CountWhiteSpace(char *str)
{
   int iCount  = 0;
  while( *str != '\0')
  {
    if(*str == ' ')
    {
      iCount++;
    }
    str++;
  }
  return iCount;
}
int main()
{
  char Arr[20] ;
  int iRet = 0;
  printf("Enter string ");
  scanf("%[^'\n']s",Arr);

  iRet = CountWhiteSpace(Arr);
  printf("Number of white spaces are: %d" , iRet);
  return 0;
}