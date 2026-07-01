//write a program which accept number from user and return Diffference between summation of even digits and summation of odd digits
//Enter the number :8440
//Diffference between summation of even  and odd digits:16   (16 -0)
//Enter the number :2395
//Diffference between summation of even  and odd digits:-15   (2 -17)
//time complexity : O(d) = O(log n) if number has d digits loop runs d times
#include<stdio.h>

int CountDiff(int iNo)
{
    if(iNo <0)
    {
        iNo = -iNo;
    }

   int iDigit=0 ,iCount =0 , iMul1 =0 ,iMul2 =0;
   for(  ;iNo!=0 ;iNo = iNo/10)
    {
    iDigit = iNo % 10;
    if((iDigit % 2) ==0)
    {
        iMul1 =iMul1 + iDigit;
    }
    else
    {
        iMul2 =iMul2 + iDigit;
    }
    }
   return iMul1 - iMul2;
}
int main()
{
    int iValue =0 ,iRet =0;
    printf("Enter the number :");
    scanf("%d",&iValue);
    iRet= CountDiff(iValue);
    printf(" Diffference between summation of even  and odd digits:%d ",iRet);
    return 0;
}