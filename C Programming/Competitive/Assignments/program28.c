//write a program to find factorial of given number 
//Enter the number: 5
//Factorial of number is 120
//Enter the number: -4
//Factorial of number is 24
//time complexity O(n)  because for loop iterates n times and we dont know n
#include<stdio.h>
int Factorial(int iNo)
{
  if(iNo <0)
  {
    iNo =-iNo; 
  }
  int iCnt =0;
  unsigned long factorial =1;

  for(iCnt =1;iCnt <= iNo;iCnt++)
  {
    factorial=factorial* iCnt;
  }
  return factorial;
}
    
int main()
{
    int iValue =0 , iRet =0;
    printf("Enter the number: ");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of number is %d",iRet);
    return 0;
}