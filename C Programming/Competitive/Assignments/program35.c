//write a program which returns difference even factorial and odd factorial of given number
//Enter the number :10
//Difference of even and oddd 2895
//Enter the number :-5
//Difference of even and oddd -7
//Enter the number :5
//Difference of even and oddd -7
//time complexity : O(n)
#include<stdio.h>
int FactorialDiff(int iNo)
{
  int iCnt=0,  Factorial1=1,Factorial2=1;
  if(iNo <0)
  {
    iNo = -iNo;
  }
  for(iCnt =1;iCnt<=iNo;iCnt++)
  {
    if((iCnt%2)==0)
    {
      Factorial1 = Factorial1*iCnt;
    }
    else
    {
      Factorial2 = Factorial2*iCnt;
    }
  
  }
  return Factorial1 - Factorial2;
  
}

int main()
{
    int iValue =0 ,iRet =0;
    printf("Enter the number :");
    scanf("%d",&iValue);
    iRet =FactorialDiff(iValue);
    printf("Difference of even and oddd %d",iRet);

    return 0;
}