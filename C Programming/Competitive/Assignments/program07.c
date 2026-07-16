#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckEven(int iNo)
{
  if((iNo%2)==0)
  {
    return TRUE;
  }
  else
  {
    return FALSE;
  }
}
int main()
{
  int iValue=0 ; 
  BOOL iRet= FALSE;

  printf("Enter number\n");
  scanf("%d",&iValue);
  iRet=CheckEven(iValue);//pishvi lagnar mhnun iRet ghetla 
  printf("%d",iRet);
}
