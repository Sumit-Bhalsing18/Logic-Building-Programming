//write a program which accept input from user and return multiplication of all digits
//Enter the number :239
//multiplication of all digits :54
//Enter the number :2395
//multiplication of all digits :270
//time complexity : O(d) = O(log n) if number has d digits loop runs d times
#include<stdio.h>

int MultiDigits(int iNo)
{
    if(iNo <0)
    {
        iNo = -iNo;
    }

   int iDigit=0 ,iCount =0 , iMul =1;
   for(  ;iNo!=0 ;iNo = iNo/10)
    {
     iDigit = iNo % 10;
     
     iMul = iMul * iDigit;  
    }
   return iMul;
}
int main()
{
    int iValue =0 ,iRet =0;
    printf("Enter the number :");
    scanf("%d",&iValue);
    iRet= CountRange(iValue);
    printf("multiplication of all digits :%d ",iRet);
    return 0;
}