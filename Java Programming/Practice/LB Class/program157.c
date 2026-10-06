//write a program which accept string from user and accept one character from user , return frequency of that character

/*
Enter string :MARVELLOUS MULTI OS
Enter one chracter:M
frequency of that character is :2

Enter string :MARVELLOUS MULTI OS
Enter one chracter:W
frequency of that character is :0
*/
#include<stdio.h>

int CharFrequency(char *str , char ch)
{
   int iCount  = 0;
  while( *str != '\0')
  {
    if(*str == ch)
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
  char cValue = '\0';

  printf("Enter string :");
  scanf("%[^'\n']s",Arr);      
 
  printf("Enter one chracter:");
  scanf(" %c" , &cValue);

  iRet = CharFrequency(Arr , cValue);
  printf("frequency of that character is :%d" , iRet);
  
  return 0;
}
