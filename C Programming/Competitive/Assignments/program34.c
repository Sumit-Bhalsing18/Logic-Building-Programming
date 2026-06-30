////write a program to find odd factorial of given number
//Enter the number :10
//Even factorial of number is 945  (9 * 7 * 5 * 3 * 1)
//Enter the number :-5
//Even factorial of number is 15   (5 * 3 * 1)
//time complexity : O(n)
#include<stdio.h>
int EvenFactorial(int iNo)
{
  int iCnt=0,  Factorial=1;
  if(iNo <0)
  {
    iNo = -iNo;
  }
  for(iCnt =1;iCnt<=iNo;iCnt++)
  {
    if((iCnt%2)!=0)
    {
      Factorial = Factorial*iCnt;
      
    }
  }
  return Factorial;
  
}

int main()
{
    int iValue =0 ,iRet =0;
    printf("Enter the number :");
    scanf("%d",&iValue);
    iRet =EvenFactorial(iValue);
    printf("Odd factorial of number is %d",iRet);

    return 0;
}