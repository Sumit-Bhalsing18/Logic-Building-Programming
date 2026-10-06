//Acccept character from user and check whether it is special symbol or not (! @  # $ %  ^ &  * )
#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;
BOOL CheckSpecial(char ch )
{
  if(ch == '!' || ch == '@' || ch == '#' || ch == '$' ||
       ch == '%' || ch == '^' || ch == '&' || ch == '*')
  {
    return 1;
  }
  else
  {
    return 0;
  }
  
}
int main()
{
  char ch = '\0';
  BOOL bRet =  FALSE;
  printf("Enter character");
  scanf("%c",&ch);
  
  bRet = CheckSpecial(ch);
  
  if(bRet == TRUE)
  {
    printf("It is special character");
  }
  else
  {
      printf("It is not special character");
  }
  
  return 0;
}