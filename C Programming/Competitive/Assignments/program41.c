//write a program accept input from user and return the count of even digit
//Enter the input :-2395
//count of even digit : 1
//Enter the input :8462
//count of even digit : 4
//time complexity : O(d) = O(log n) if number has d digits loop runs d times 
#include<stdio.h>
int CountEven(int iNo)
{
    if(iNo <0)
    {
        iNo = -iNo;
    }
  int iDigit =0, iCount =0;
  for(   ; iNo!=0;iNo = iNo /10)
  {
    iDigit = iNo %10;
    if((iDigit % 2)==0)
    {
        iCount ++;
    }
  }
   return iCount;
 
}
int main()
{
    int iValue =0 ,iRet =0;
    printf("Enter the input :");
    scanf("%d",&iValue);
    iRet =CountEven(iValue);
    printf("count of even digit : %d",iRet);
    return 0;
}