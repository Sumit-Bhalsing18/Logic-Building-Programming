#include<stdio.h>

int strlenX(char * const str) //pointer jar constatnt ahe tar str increment honar nahi 
{
  int iCount =0;
  while(*str != '\0')
  {
    iCount++;
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

  iRet =strlenX(Arr);  
  printf("String length is : %d\n",iRet);
  return 0;
}