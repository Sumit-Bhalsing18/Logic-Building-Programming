//write a program accept input from user and return the count of odd digit
//Enter the number :2395
//count of Odd digit in number is :3
//Enter the number :-1018
//count of Odd digit in number is :2
//time complexity : O(d) = O(log n) if number has d digits loop runs d times
#include<stdio.h>

int CountOdd(int iNo)
{
    if(iNo <0)
    {
        iNo = -iNo;
    }

   int iDigit=0 ,iCount =0;
   for(  ;iNo!=0 ;iNo = iNo/10)
   {
     iDigit = iNo % 10;
     if((iDigit % 2)!=0)
     {
        iCount++;
     }
   }
   return iCount;
}
int main()
{
    int iValue =0 ,iRet =0;
    printf("Enter the number :");
    scanf("%d",&iValue);
    iRet= CountOdd(iValue);
    printf("count of Odd digit in number is :%d ",iRet);
    
    return 0;
}