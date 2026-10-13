//write recursive program which accept String from user and count number of small character
/*
Enter String :HElloWOrlD
Small character count from string is : 5
*/
#include<stdio.h>
#include<string.h>


int CountSmallChar(char *str)
{ 
  static int i = 0;
  static int iCount = 0;
  
  if(str[i] != '\0')
  {
    if(str[i] >= 'a' && str[i] <= 'z')
    {
      iCount++; 
    }
    i++;
    CountSmallChar(str);
  }

  return iCount;  
}

int main()
{
  int  iRet = 0;
  char str[100];
  printf("Enter String :");
  scanf("%[^'\n']s",str);
  iRet =CountSmallChar(str);
  printf("Small character count from string is : %d",iRet);
  return 0; 
}

