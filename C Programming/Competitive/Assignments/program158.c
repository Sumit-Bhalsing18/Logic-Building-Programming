//write a program which accept string from user and accept one character from user , return index of first occurence of that character
/*
Enter string :Marvellous Multi OS
Enter one chracter:M
index of first occurence of that character:0

Enter string :Marvellous Multi OS
Enter one chracter:W
index of first occurence of that character:-1

Enter string :Marvellous Multi OS
Enter one chracter:l
index of first occurence of that character:5
*/

#include<stdio.h>

int FirstCharacter(char *str , char ch)
{
  int index = 0;
  while( *str != '\0')
  {
    if(*str == ch)
    {
      return index;
    }
    str++;
    index++;
  };
  return -1;
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

  iRet = FirstCharacter(Arr , cValue);
  printf("index of first occurence of that character:%d" , iRet);
  
  return 0;
}
