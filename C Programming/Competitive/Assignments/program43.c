//write a program which accept input from user and return the count of digit in between 3 and 7
//Enter the number :9922
//count of digit in between 3 and 7  :0
//Enter the number :4521
//count of digit in between 3 and 7  :2
//time complexity : O(d) = O(log n) if number has d digits loop runs d times
#include<stdio.h>

int CountRange(int iNo)
{
    if(iNo <0)
    {
        iNo = -iNo;
    }

   int iDigit=0 ,iCount =0;
   for(  ;iNo!=0 ;iNo = iNo/10)
   {
     iDigit = iNo % 10;
     if((iDigit> 3 && iDigit< 7))
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
    iRet= CountRange(iValue);
    printf("count of digit in between 3 and 7  :%d ",iRet);
    
    return 0;
}