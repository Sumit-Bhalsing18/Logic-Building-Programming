//Accept amount in usn dollar and return its corresponding value in indian Currency 1$ = 70 rupees
//Enter the number in us dollar:10
//Value in indian currency is 700
//Enter the number in us dollar:1200
//Value in indian currency is 84000
//time complexity : O(1)
#include<stdio.h>
int DollarToINR(int iNo)
{
  
  return iNo * 70;
  
}

int main()
{
    int iValue =0 ,iRet =0;
    printf("Enter the number in us dollar:");
    scanf("%d",&iValue);
    iRet =DollarToINR(iValue);
    printf("Value in indian currency is %d",iRet);

    return 0;
}